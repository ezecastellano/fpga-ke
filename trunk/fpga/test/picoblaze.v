// ----------------------------------------------------------------------------
//
// This is application-2 for the PSRAM controller application design. It
// instantiates a picoBlaze core and provides some interfacing logic for
// the PSRAM controller.
//
// ----------------------------------------------------------------------------
module picoblaze
(
	// inputs
	clk,
	clk_10,
	reset,
	data_in,
	data_ok,
	op_begun,
	op_finished,
	ctrlr_good,
	ps2_kbrd_data,
	ps2_kbrd_clk,
	// outputs
	segm,
	segm_sel,
	wr,
	rd,
	ub,
	lb,
	burst,
	addr,
	data_out
);

input			clk;			// 100MHz
input			clk_10;			// 10MHz clock
input			reset;
input	[15:0]	data_in;		// data from memory
input			data_ok;		// data ready / give data now (on next clock)
input			op_begun;		// operation has initialized
input			op_finished;	// operation has finished
input			ctrlr_good;		// controller ready for operation
input			ps2_kbrd_data;	// PS/2 keyboard data
input			ps2_kbrd_clk;	// PS/2 keyboard clock
output	[7:0]	segm;			// 7-segment LED
output	[3:0]	segm_sel;		// 7-segment anode select
output			wr;				// write strobe to memory
output			rd;				// read strobe to memory
output			ub;				// upper byte enable
output			lb;				// lower byte enable
output			burst;			// burst operation
output	[22:0]	addr;			// memory address
output	[15:0]	data_out;		// data to memory

reg				rd;
reg				wr;
wire			mem_rd;
wire			mem_wr;
wire	[11:0]	address;
wire	[17:0]	instruction;
wire			bram_enable;
wire	[7:0]	port_id;
wire	[7:0]	out_port;
reg		[7:0]	in_port;
wire			write_strobe;
wire			sw_reset;
wire			interrupt;
wire	[7:0]	segm;
wire	[3:0]	segm_sel;
wire	[7:0]	scan_code;		// PS/2 keyboard scan code
reg				clear_ctrl;		// clear strobes
reg				op_done_en;		// set operation_done register
reg		[15:0]	mem_data = 0;	// registering data from memory, port_id = 0+1
reg		[7:0]	data_lo = 0;	// data low, port_id = 0
reg		[7:0]	data_hi = 0;	// data high, port_id = 1
reg		[7:0]	addr_lo = 0;	// address low, port_id = 2
reg		[7:0]	addr_mi = 0;	// address middle, port_id = 3
reg		[5:0]	addr_hi = 0;	// address high, port_id = 4
reg		[7:0]	segm_12 = 0;	// seven segment LED left-most section, port_id = 7
reg		[7:0]	segm_34 = 0;	// seven segment LED right-most section, port_id = 8
reg		[3:0]	ctrl = 0;		// strobes, port_id = 5, [0] = upper byte, [1] = lower byte, [2] = write, [3] = read
reg		[7:0]	op_done = 0;	// operation done register, port_id = 6 (write), port_id = 2 (read)
reg		[2:0]	cur_state = 0;	// FSM state register
reg		[2:0]	next_state;		// next state signal

assign data_out = {data_hi,data_lo};
assign addr = {addr_hi,addr_mi,addr_lo};
assign ub = ctrl[0];
assign lb = ctrl[1];
assign mem_wr = ctrl[2];
assign mem_rd = ctrl[3];
assign burst = 1'b0;

// picoBlaze soft-core processor
//kcpsm6
//#(
//	.interrupt_vector			(12'h3FF),
//	.scratch_pad_memory_size	(64),
//	.hwbuild					(8'h00)
//)
//kcpsm6_inst
//(
//	.clk 				(clk),
//	.reset				(reset | sw_reset),
//	.sleep				(1'b0),
//	.address 			(address),
//	.instruction 		(instruction),
//	.bram_enable 		(bram_enable),
//	.port_id 			(port_id),
//	.write_strobe		(write_strobe),
//	.k_write_strobe		(),
//	.out_port			(out_port),
//	.read_strobe		(),
//	.in_port			(in_port),
//	.interrupt			(interrupt),
//	.interrupt_ack		()
//);

kcpsm3 kcpsm3_inst
(
	.clk 				(clk),
	.reset				(reset | sw_reset),
	.address 			(address),
	.instruction 		(instruction),
	.port_id 			(port_id),
	.write_strobe		(write_strobe),
	.out_port			(out_port),
	.read_strobe		(),
	.in_port			(in_port),
	.interrupt			(interrupt),
	.interrupt_ack		()
);

//// program memory
//program_rom
//#(
//	.C_FAMILY				("S6"),	// family, S6 = Spartan-6
//	.C_RAM_SIZE_KWORDS		(1),	// program memory size, 1 = 1K words
//	.C_JTAG_LOADER_ENABLE	(0)		// JTAM loader, 0 = no
//)
//program_rom_inst
//(
// 	.rdl 			(sw_reset),
//	.enable 		(bram_enable),
//	.address 		(address),
//	.instruction 	(instruction),
//	.clk 			(clk)
//);

//// program memory para spartan3
bmp24prog program_rom_inst
(
 	.address 		(address),
	.instruction 	(instruction),
	.clk 			(clk)
);
// program memory para spartan3
//program1 program_rom_inst
//(
// 	.address 		(address),
//	.instruction 	(instruction),
//	.clk 			(clk)
//);
// PS/2 keyboard interface
keyboard_interface keyboard_interface_inst
(
	// inputs
	.clk			(clk),				// system clock
	.keyb_data_in	(ps2_kbrd_data),	// PS/2 keyboard data
	.keyb_clk_in	(ps2_kbrd_clk),		// PS/2 keyboard clock
	// outputs
	.data_out		(scan_code),		// scan code
	.interrupt		(interrupt)			// scan code ready
);

// 7-segment LED block
seven_seg seven_seg_inst
(
	.clk		(clk_10),	// assuming 10MHz clock
	.reset		(reset),	// asynchronous reset
	.data		({segm_12,segm_34}),		// 16-bit data to display
	.segm		(segm),		// bits 0-6 = A-G, bit 7 = dot (be sure to recheck this)
	.segm_sel	(segm_sel)	// bit 3 = AN0, bit 0 = AN3 (be sure to recheck this)
);


always @ (posedge clk or posedge reset)
	begin
		if (reset)
			data_lo <= 0;
		else if ((port_id == 0) && (write_strobe))
			data_lo <= out_port;
	end
//
always @ (posedge clk or posedge reset)
	begin
		if (reset)
			data_hi <= 0;
		else if ((port_id == 1) && (write_strobe))
			data_hi <= out_port;
	end
//
always @ (posedge clk or posedge reset)
	begin
		if (reset)
			addr_lo <= 0;
		else if ((port_id == 2) && (write_strobe))
			addr_lo <= out_port;
	end
//
always @ (posedge clk or posedge reset)
	begin
		if (reset)
			addr_mi <= 0;
		else if ((port_id == 3) && (write_strobe))
			addr_mi <= out_port;
	end
//
always @ (posedge clk or posedge reset)
	begin
		if (reset)
			addr_hi <= 0;
		else if ((port_id == 4) && (write_strobe))
			addr_hi <= out_port[5:0];
	end
//
always @ (posedge clk or posedge reset)
	begin
		if (reset)
			ctrl <= 0;
		else if (clear_ctrl)
			ctrl <= 0;
		else if ((port_id == 5) && (write_strobe))
			ctrl <= out_port[3:0];
	end
//
always @ (posedge clk or posedge reset)
	begin
		if (reset)
			op_done <= 0;
		else if (op_done_en)
			op_done <= 1;
		else if ((port_id == 6) && (write_strobe))
			op_done <= out_port;
	end
//
always @ (posedge clk or posedge reset)
	begin
		if (reset)
			segm_12 <= 0;
		else if ((port_id == 7) && (write_strobe))
			segm_12 <= out_port;
	end
//
always @ (posedge clk or posedge reset)
	begin
		if (reset)
			segm_34 <= 0;
		else if ((port_id == 8) && (write_strobe))
			segm_34 <= out_port;
	end
//

// state register
always @ (posedge clk or posedge reset)
	begin
		if (reset)
			cur_state <= 0;
		else
			cur_state <= next_state;
	end
//

// transition and output functions
always @ (cur_state,mem_rd,mem_wr,op_begun,op_finished,ctrlr_good)
	begin
		clear_ctrl = 0;
		op_done_en = 0;
		wr = 0;
		rd = 0;
		next_state = cur_state;
		case (cur_state)
			0:	begin
					if (ctrlr_good)
						if (mem_rd)
							next_state = cur_state + 1'b1;
						else if (mem_wr)
							next_state = 3;
						else
							next_state = cur_state;
					else
						next_state = cur_state;
				end
			1:	begin
					rd = 1;
					if (op_begun)
						begin
							clear_ctrl = 1;
							next_state = cur_state + 1'b1;
						end
					else
						next_state = cur_state;
				end
			2:	begin
					if (op_finished)
						begin
							op_done_en = 1;
							next_state = 0;
						end
					else
						next_state = cur_state;
				end
			3:	begin
					wr = 1;
					if (op_begun)
						begin
							clear_ctrl = 1;
							next_state = cur_state + 1'b1;
						end
					else
						next_state = cur_state;
				end
			4:	begin
					if (op_finished)
						begin
							op_done_en = 1;
							next_state = 0;
						end
					else
						next_state = cur_state;
				end
		endcase
	end
//


always @ (posedge clk or posedge reset)
	begin
		if (reset)
			mem_data <= 0;
		else if (data_ok && ((cur_state == 1) || (cur_state == 2)))	// data ok and read operation
			mem_data <= data_in;
	end
//

always @ (port_id,mem_data,op_done,scan_code)
	begin
		case (port_id)
			0: in_port = mem_data[7:0];
			1: in_port = mem_data[15:8];
			6: in_port = op_done;
			7: in_port = scan_code;
			default:
				in_port = op_done;
		endcase
	end
//


endmodule
