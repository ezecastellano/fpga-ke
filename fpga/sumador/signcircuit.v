`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:54:18 09/07/2011 
// Design Name: 
// Module Name:    signcircuit 
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
module signcircuit(
    input insign,
    output [7:0] outsign
    );

	assign outsign[7:1] = 7'b0000000;
	assign outsign[0] = insign;

endmodule
