///////////////////////////////////////////////////////////////////////////////
// Company:			Tallinn University of Technology, Dept. of Comp. Eng.
// Engineer:		vadsonen
// 
// Create Date:		12:51:22 2012/03/02
// Design Name:		CellularRAM controller sample application
// Module Name:		psram_app
// Target Devices:	Spartan-6 FPGA
// Tool versions:	Xilinx ISE 12.3
// Language:		Verilog 2001 (VHDL for PS/2 keyboard interface)
// Description:		This is a sample application of the PSRAM controller.
// 					It combines the PSRAM controller, video pipeline,
// 					memory controller dualport front-end, picoBlaze
// 					soft-core processor, PS/2 keyboard interface and
// 					7-segment adapter.
// 
// Revision: 		0.01 - 2012.03.02 - File Created
// 					1.0 - 2012.03.09 - V1.0
// 
// Comments:		- In source code 1xTAB = 4xSPACE
// 					- Please report bugs to vadim.pesonen@ati.ttu.ee. Although
// 					  i would rather prefer fixes.
// 
///////////////////////////////////////////////////////////////////////////////
`timescale 1ns/1ps
`include "defines.v"


//  RAMB16_S1  : In order to incorporate this function into the design,
//   Verilog   : the following instance declaration needs to be placed
//  instance   : in the body of the design code.  The instance name
// declaration : (RAMB16_S1_inst) and/or the port declarations within the
//    code     : parenthesis may be changed to properly reference and
//             : connect this function to the design.  All inputs
//             : and outputs must be connected.

//  <-----Cut code below this line---->

   // RAMB16_S1: 16kx1 Single-Port RAM
   //            Spartan-3E
   // Xilinx HDL Language Template, version 14.1

   RAMB16_S1 #(
      .INIT(1'b0),  // Value of output RAM registers at startup
      .SRVAL(1'b0), // Output value upon SSR assertion
      .WRITE_MODE("WRITE_FIRST"), // WRITE_FIRST, READ_FIRST or NO_CHANGE

      // The following INIT_xx declarations specify the initial contents of the RAM
      // Address 0 to 4095
      .INIT_00(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_01(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_02(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_03(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_04(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_05(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_06(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_07(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_08(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_09(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_0A(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_0B(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_0C(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_0D(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_0E(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_0F(256'h0000000000000000000000000000000000000000000000000000000000000000),
      // Address 4096 to 8191
      .INIT_10(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_11(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_12(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_13(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_14(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_15(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_16(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_17(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_18(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_19(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_1A(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_1B(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_1C(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_1D(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_1E(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_1F(256'h0000000000000000000000000000000000000000000000000000000000000000),
      // Address 8192 to 12287
      .INIT_20(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_21(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_22(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_23(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_24(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_25(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_26(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_27(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_28(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_29(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_2A(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_2B(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_2C(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_2D(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_2E(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_2F(256'h0000000000000000000000000000000000000000000000000000000000000000),
      // Address 12288 to 16383
      .INIT_30(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_31(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_32(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_33(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_34(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_35(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_36(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_37(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_38(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_39(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_3A(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_3B(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_3C(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_3D(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_3E(256'h0000000000000000000000000000000000000000000000000000000000000000),
      .INIT_3F(256'h0000000000000000000000000000000000000000000000000000000000000000)
   ) RAMB16_S1_inst (
      .DO(DO),      // 1-bit Data Output
      .ADDR(ADDR),  // 14-bit Address Input
      .CLK(CLK),    // Clock
      .DI(DI),      // 1-bit Data Input
      .EN(EN),      // RAM Enable Input
      .SSR(SSR),    // Synchronous Set/Reset Input
      .WE(WE)       // Write Enable Input
   );

  // End of RAMB16_S1_inst instantiation
						module psram_app
(
	//inputs
	osc_clk,
	reset,
	`ifndef SIM
	segm,
	segm_sel,
	`endif
	ps2_kbrd_data,
	ps2_kbrd_clk,
	//outputs
	mem_addr,
	mem_clk,
	mem_ce_n,
	mem_oe_n,
	mem_we_n,
	mem_adv_n,
	mem_ub_n,
	mem_lb_n,
	mem_cre,
//	hs,
//	vs,
//	r2,r1,r0,
//	g2,g1,g0,
//	b2,b1,
	//input-outputs
	mem_data
);

input			osc_clk;		// oscillator clock (100MHz)
input			reset;			// reset (asynchronous)
input			ps2_kbrd_data;	// PS/2 keyboard data
input			ps2_kbrd_clk;	// PS/2 keyboard clock
`ifndef SIM
output	[7:0]	segm;			// 7-segment LEDs
output	[3:0]	segm_sel;		// 7-segment common anode control
`endif
output	[22:0]	mem_addr;		// memory address
output			mem_clk;		// memory clock (50MHz)
output			mem_ce_n;		// memory chip enable
output			mem_oe_n;		// memory output enable
output			mem_we_n;		// memory write enable
output			mem_adv_n;		// memory address valid
output			mem_ub_n;		// memory upper byte enable
output			mem_lb_n;		// memory lower byte enable
output			mem_cre;		// memory control register enable
//output			hs;				// horisontal sync signal
//output			vs;				// vertical sync signal
//output			r2,r1,r0;		// red
//output			g2,g1,g0;		// green
//output			b2,b1;			// blue, b0 tied to 0 on PCB
inout	[15:0]	mem_data;		// memory data

//reg		[1:0]	cur_state = 0;
//reg		[1:0]	next_state;
wire	[22:0]	addr;
wire	[15:0]	wr_data;
wire	[15:0]	rd_data;
wire			burst;
//wire	[8:0]	lin_cntr;
wire			ctrlr_good;
//wire			app_1_rd;
//wire			app_1_burst;
//wire	[22:0]	app_1_addr;
wire			app2_op_begun;
wire			ub;
wire			lb;
wire			wr;
wire			rd;
//wire	[15:0]	app_2_data;
//wire	[22:0]	app_2_addr;
//wire	[7:0]	rgb;
wire	[7:0]	segm;
wire	[3:0]	segm_sel;
wire			clk_10;

wire	CLK2X_OUT;


//assign r2 = rgb[7];
//assign r1 = rgb[6];
//assign r0 = rgb[5];
//assign g2 = rgb[4];
//assign g1 = rgb[3];
//assign g0 = rgb[2];
//assign b2 = rgb[1];
//assign b1 = rgb[0];


dcm_50_a_100 instance_name (
    .CLKIN_IN(osc_clk), 
    .RST_IN(reset), 
    .CLKIN_IBUFG_OUT(), //CLKIN_IBUFG_OUT
    .CLK0_OUT(), //CLK0_OUT
    .CLK2X_OUT(CLK2X_OUT)
    );

// Cellular RAM (PSRAM) controller
psram_ctrlr psram_ctrlr_inst
(
	//inputs
	//.osc_clk		(osc_clk), 
	.osc_clk		(CLK2X_OUT), 
	.reset			(reset),
	.app_data_in	(wr_data),		// data to memory
	.app_addr		(addr),			// memory address
	.app_wr			(wr),			// write strobe
	.app_rd			(rd),			// read strobe
	.app_ub			(ub),			// upper byte enable
	.app_lb			(lb),			// lower byte enable
	.app_burst_op	(burst),		// burst operation issued by application
	//outputs
	.mem_addr		(mem_addr),
	.mem_clk		(mem_clk),
	.mem_ce			(mem_ce_n),
	.mem_cre		(mem_cre),
	.mem_oe			(mem_oe_n),
	.mem_we			(mem_we_n),
	.mem_adv		(mem_adv_n),
	.mem_ub			(mem_ub_n),
	.mem_lb			(mem_lb_n),
	.app_data_ok	(data_ok),		// data ready / OK to fetch data (on next clock)
	.app_op_begun	(app2_op_begun),		// read/write operation has initiated
	.op_finished	(op_finished),	// read/write operation has finished
	.app_data_out	(rd_data),		// data from memory
	.app_ctrlr_good	(ctrlr_good),	// controller is ready for operation
	.app_clk_100	(clk_100),		// 100MHz clock (use this instead of oscillator clock)
	.app_clk_10		(clk_10),		// 10MHz clock (i.e. for 7-seg LEDs or dividers, etc.)
	.app_pixel_clk	(pixel_clk),	// 40/50MHz clock (VGA module uses this clock)
	//input-outputs
	.mem_data		(mem_data)
);

picoblaze picoblaze_inst
(
	// inputs
	.clk			(clk_100),
	.clk_10			(clk_10),
	.reset			(reset),
	.data_in		(rd_data),
	.data_ok		(data_ok),
	.op_begun		(app2_op_begun),
	.op_finished	(op_finished),
	.ctrlr_good		(ctrlr_good),
	.ps2_kbrd_data	(ps2_kbrd_data),
	.ps2_kbrd_clk	(ps2_kbrd_clk),
	// outputs
	.segm			(segm),
	.segm_sel		(segm_sel),
	.wr				(wr),
	.rd				(rd),
	.ub				(ub),
	.lb				(lb),
	.burst			(burst),
	.addr			(addr),
	.data_out		(wr_data)
);

// dualport front-end for memory controller
//dualport_frontend dualport_frontend_inst
//(
//	// general inputs
//	.clk				(clk_100),
//	.reset				(reset),
//	// input from application 1
//	.app_1_data_wr		({16{1'b0}}),
//	.app_1_addr			(app_1_addr),
//	.app_1_wr			(1'b0),
//	.app_1_rd			(app_1_rd),
//	.app_1_ub			(1'b0),
//	.app_1_lb			(1'b0),
//	.app_1_burst		(app_1_burst),
////	.app_1_req_access	(app_1_req_access),
//	.app_1_req_access	(1'b0),
//	// output to application 1
//	.app_1_op_begun		(app_1_op_begun),
//	.app_1_data_ok		(app_1_data_ok),
//	// input from application 2
//	.app_2_data_wr		(app_2_data),
//	.app_2_addr			(app_2_addr),
//	.app_2_wr			(app_2_wr),
//	.app_2_rd			(app_2_rd),
//	.app_2_ub			(app_2_ub),
//	.app_2_lb			(app_2_lb),
//	.app_2_burst		(app_2_burst),
//	// output to application 2
//	.app_2_op_begun		(app_2_op_begun),
//	.app_2_data_ok		(app_2_data_ok),
//	.app_2_op_finished	(app_2_op_finished),
//	// input from memory controller
//	.op_begun			(op_begun),
//	.data_ok			(data_ok),
//	.op_finished		(op_finished),
//	// output to memory controller
//	.app_data_out		(wr_data),
//	.app_addr			(addr),
//	.app_wr				(wr),
//	.app_rd				(rd),
//	.app_ub				(ub),
//	.app_lb				(lb),
//	.app_burst			(burst)
//);

//// application 1 - video pipeline
//video_pipeline video_pipeline_isnt
//(
//	// inputs
//	.clk			(clk_100),
//	.pixel_clk		(pixel_clk),
//	//.pixel_clk		(clk_100),
//	.reset			(reset),
//	.data			(rd_data),
//	.op_begun		(app_1_op_begun),
//	.data_ok		(app_1_data_ok),
//	.ctrlr_good		(ctrlr_good),
//	// outputs
//	.req_access		(app_1_req_access),
//	.rd				(app_1_rd),
//	.burst			(app_1_burst),
//	.addr			(app_1_addr),
//	.hs				(hs),
//	.vs				(vs),
//	.rgb			(rgb)
//);

// application 2 - picoblaze + interface logic
//picoblaze picoblaze_inst
//(
//	// inputs
//	.clk			(clk_100),
//	.clk_10			(clk_10),
//	.reset			(reset),
//	.data_in		(rd_data),
//	.data_ok		(app_2_data_ok),
//	.op_begun		(app_2_op_begun),
//	.op_finished	(app_2_op_finished),
//	.ctrlr_good		(ctrlr_good),
//	.ps2_kbrd_data	(ps2_kbrd_data),
//	.ps2_kbrd_clk	(ps2_kbrd_clk),
//	// outputs
//	.segm			(segm),
//	.segm_sel		(segm_sel),
//	.wr				(app_2_wr),
//	.rd				(app_2_rd),
//	.ub				(app_2_ub),
//	.lb				(app_2_lb),
//	.burst			(app_2_burst),
//	.addr			(app_2_addr),
//	.data_out		(app_2_data)
//);

endmodule
