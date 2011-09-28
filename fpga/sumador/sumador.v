`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:46:59 08/31/2011 
// Design Name: 
// Module Name:    sumador 
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
module sumador(
    input [3:0] a,
    input [3:0] b,
    output [3:0] res
    );

	reg [3:0] temp;
	always @ * 
	begin
		if (a[3] == b[3]) 
		begin
			temp[2:0] = a[2:0] + b[2:0]; 
			temp[3] = a[3];
		end
			else if (a[2:0] > b[2:0])
			begin
				temp[2:0] = a[2:0] - b[2:0]; 
				temp[3] = a[3];
			end
			else
			begin
				temp[2:0] = b[2:0] - a[2:0]; 
				temp[3] = b[3];
			end
	end
	
	assign res = temp;

endmodule
