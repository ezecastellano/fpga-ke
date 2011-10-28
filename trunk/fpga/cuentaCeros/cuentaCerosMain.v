`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:21:37 10/28/2011 
// Design Name: 
// Module Name:    cuentaCerosMain 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module cuentaCerosMain(
		input [7:0] a,
		input clk,
		input start,
		output wire [3:0] an,
		output [7:0] count
		//output done
    );

		wire done;
		wire [3:0] hex;
		cuentaCeros cc (.a(a), .clk(clk), .start(start), .count(hex), .done(done));

		wire [7:0] htss;
		hex_to_sseg hts (.hex (hex), .dp(1'b1), .sseg(htss)); 
		
		disp_mux dm (.clk(clk), .reset(start), .in0(htss), .in1(8'b11111111), .in2(8'b11111111), .in3(8'b11111111), .an(an), .sseg(count), .done(done));

endmodule
