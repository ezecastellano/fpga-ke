`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:25:06 08/24/2011 
// Design Name: 
// Module Name:    comparador1 
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
module comparador1(
    input i0,
    input i1,
    output eq
    );
	wire p0, p1;
	assign eq = p0 | p1;
	assign p0 = ~i0 & ~i1;
	assign p1 = i0 & i1;
	

endmodule
