`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:15:34 08/24/2011 
// Design Name: 
// Module Name:    comparador 
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
module comparador(
    input [1:0] a,
    input [1:0] b,
    output aeqb
    );

	wire e0, e1;
	comparador1 eq_bit0_unit (.i0(a[0]), .i1(b[0]), .eq(e0));
	comparador1 eq_bit1_unit (.eq(e1), .i0(a[1]), .i1(b[1]));
	
	assign aeqb = e0 & e1;

endmodule
