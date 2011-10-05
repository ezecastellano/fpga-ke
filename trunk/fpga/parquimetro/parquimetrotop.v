`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:58:57 10/05/2011 
// Design Name: 
// Module Name:    parquimetrotop 
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
module parquimetrotop(
		input wire clk, reset,
		input wire a, 
		input wire b,
		output wire [7:0] count_sseg,
		output wire [3:0] an

    );

   wire [7:0] hex;
	fsm fff(.clk(clk), .reset(reset), .a(a), .b(b), .count_reg(hex));

	wire [7:0] htss;
	hex_to_sseg hts (.hex (hex[3:0]), .dp(0), .sseg(htss)); 
	
	disp_mux dm (.clk(clk), .reset(reset), .in0(0), .in1(0), .in2(0), .in3(htss), .an(an), .sseg(count_sseg));
	


endmodule
