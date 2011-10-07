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

   wire [3:0] hex;
	fsm fff(.clk(clk), .reset(reset), .a(a), .b(b), .count_reg(hex));

	wire [7:0] htss;
	hex_to_sseg hts (.hex (hex), .dp(1), .sseg(htss)); 
	
	disp_mux dm (.clk(clk), .reset(reset), .in0(htss), .in1(7'b1111111), .in2(7'b1111111), .in3(7'b1111111), .an(an), .sseg(count_sseg));
	


endmodule
