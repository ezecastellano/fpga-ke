`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:25:29 09/07/2011 
// Design Name: 
// Module Name:    testSumadorSignoYMagnitud 
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
module testSumadorSignoYMagnitud(
    input [3:0] a,
    input [3:0] b,
    input [1:0] btn,
    input clk,
    output [7:0] sseg,
    output [3:0] an,
	 output [6:0] salidaaux
    );

	 wire [3:0] e0;
	 wire [3:0] mout;
	 sumador sum (.a(a), .b(b), .res(e0));
	 multiplexor mout2 (.m0(a), .m1(b), .m2(e0), .m3(e0), .btn(btn) , .mout(mout));
	 
	 wire [7:0] sseg2;
	 hex_to_sseg hextosseg (.hex(mout[2:0]), .dp(1), .sseg(sseg2));
	 
	 wire [7:0] e1;
	 signcircuit c (.insign(mout[3]), .outsign(e1));
	 
	 disp_mux dm (.in3(8'b11111111), .in2(8'b11111111), .in1(e1), .in0(sseg2), .sseg(sseg), .an(an), .reset(0), .clk(clk));
	 
	 assign salidaaux = sseg2[6:0];
	  
	 

endmodule
