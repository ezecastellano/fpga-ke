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
		output wire [3:0] an,
		output wire ready,
		output wire done_tick
    );
 
   wire [12:0] count;
	fsm fff(.clk(clk), .reset(reset), .a(a), .b(b), .count_reg(count));

	wire [3:0] bcd3;
	wire [3:0] bcd2;
	wire [3:0] bcd1;
	wire [3:0] bcd0;

	bin2bcd b2b (.clk(clk), .reset(reset), .start(1'b1), .bin(count), .ready(ready), .done_tick(done_tick), .bcd3(bcd3), .bcd2(bcd2), .bcd1(bcd1), .bcd0(bcd0));

	wire [7:0] htss3;
	wire [7:0] htss2;
	wire [7:0] htss1;
	wire [7:0] htss0;

	hex_to_sseg hts3 (.hex (bcd3), .dp(1'b1), .sseg(htss3)); 
	hex_to_sseg hts2 (.hex (bcd2), .dp(1'b1), .sseg(htss2)); 
	hex_to_sseg hts1 (.hex (bcd1), .dp(1'b1), .sseg(htss1)); 
	hex_to_sseg hts0 (.hex (bcd0), .dp(1'b1), .sseg(htss0)); 

/*
	hex_to_sseg hts3 (.hex (hex), .dp(1'b1), .sseg(htss3)); 
	hex_to_sseg hts2 (.hex (hex), .dp(1'b1), .sseg(htss2)); 
	hex_to_sseg hts1 (.hex (hex), .dp(1'b1), .sseg(htss1)); 
	hex_to_sseg hts0 (.hex (hex), .dp(1'b1), .sseg(htss0)); 
*/

	disp_mux dm (.clk(clk), .reset(reset), .done(done_tick), .in0(htss0), .in1(htss1), .in2(htss2), .in3(htss3), .an(an), .sseg(count_sseg));
	
endmodule
