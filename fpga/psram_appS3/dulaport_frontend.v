module dualport_frontend
(
	// general inputs
	clk,
	reset,
	// input 1
	app_1_data_wr,
	app_1_addr,
	app_1_wr,
	app_1_rd,
	app_1_ub,
	app_1_lb,
	app_1_burst,
	app_1_req_access,
	// output 1
	app_1_data_ok,
	app_1_op_begun,
	// input 2
	app_2_data_wr,
	app_2_addr,
	app_2_wr,
	app_2_rd,
	app_2_ub,
	app_2_lb,
	app_2_burst,
	// output 2
	app_2_data_ok,
	app_2_op_finished,
	app_2_op_begun,
	// input mem
	data_ok,
	op_finished,
	op_begun,
	// output mem
	app_data_out,
	app_addr,
	app_wr,
	app_rd,
	app_ub,
	app_lb,
	app_burst
);

input			clk;
input			reset;
// input 1
input 	[15:0]	app_1_data_wr;
input 	[22:0]	app_1_addr;
input			app_1_wr;
input			app_1_rd;
input			app_1_ub;
input			app_1_lb;
input			app_1_burst;
input			app_1_req_access;
// output 1
output			app_1_data_ok;
output			app_1_op_begun;
// input 2
input 	[15:0]	app_2_data_wr;
input 	[22:0]	app_2_addr;
input			app_2_wr;
input			app_2_rd;
input			app_2_ub;
input			app_2_lb;
input			app_2_burst;
// output 2
output			app_2_data_ok;
output			app_2_op_finished;
output			app_2_op_begun;
// input mem
input			op_begun;
input			op_finished;
input			data_ok;
// output mem
output	[15:0]	app_data_out;
output	[22:0]	app_addr;
output			app_wr;
output			app_rd;
output			app_ub;
output			app_lb;
output			app_burst;

wire			app_sel;				// application selector: 0 = app_1, 1 = app_2
reg		[1:0]	cur_state = 0;			// FSM stat register
reg		[1:0]	next_state;				// next state signal
reg				op_finished_reg = 0;	// registering op_finished signal to avoid combinational loopbacks

assign app_data_out = app_sel ? app_2_data_wr : app_1_data_wr;
assign app_addr =  app_sel ? app_2_addr : app_1_addr;
assign app_ub =  app_sel ? app_2_ub : app_1_ub;
assign app_lb =  app_sel ? app_2_lb : app_1_lb;
assign app_wr =  app_sel ? app_2_wr : app_1_wr;
assign app_rd =  app_sel ? app_2_rd : app_1_rd;
assign app_burst =  app_sel ? app_2_burst : app_1_burst;
assign app_2_data_ok = app_sel ? data_ok : 1'b0;
assign app_2_op_begun = app_sel ? op_begun : 1'b0;
assign app_2_op_finished = app_sel ? op_finished : 1'b0;
assign app_1_data_ok = app_sel ? 1'b0 : data_ok;
assign app_1_op_begun = app_sel ? 1'b0 : op_begun;

assign app_sel = ((cur_state == 2)|(next_state == 2));

always @ (posedge clk or posedge reset)
	begin
		if (reset)
			cur_state <= 0;
		else
			cur_state <= next_state;
	end
//

// registering op_finished to avoid a combinational loopback which otherwise appear
always @ (posedge clk or posedge reset)
	begin
		if (reset)
			op_finished_reg <= 0;
		else
			op_finished_reg <= op_finished;
	end
//

always @ (cur_state,app_1_wr,app_1_rd,app_2_wr,app_2_rd,op_finished_reg,app_1_req_access)
	begin
		case (cur_state)
			// access available
			0:	begin
					//if (app_1_wr | app_1_rd)
					if (app_1_req_access)
						next_state = 1;
					else if (app_2_wr | app_2_rd)
						next_state = 2;
					else
						next_state = cur_state;
				end
			// application 1 is using memory
			1:	begin
					if (op_finished_reg)
						next_state = 0;
					else
						next_state = cur_state;
				end
			// application 2 is using memory
			2:	begin
					if (op_finished_reg)
						next_state = 0;
					else
						next_state = cur_state;
				end
			3:	begin
					next_state = cur_state;
				end
		endcase
	end
//

endmodule
