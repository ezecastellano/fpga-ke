`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:23:42 10/28/2011 
// Design Name: 
// Module Name:    cuentaCeros 
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
module cuentaCeros(
		input [7:0] a,
		input clk,
		input start,
		output [3:0] count,
		output done
    );

	reg [3:0] count_reg, count_next;
	reg [3:0] indice_reg;
	reg [3:0] indice_next;
	reg done_reg, done_next;
	
	always @(posedge clk)
		begin
			if (start)
				begin
					count_reg<=4'b0;
					indice_reg<=0;
					done_reg <= 1'b0;
				end
			else
				begin
					count_reg<=count_next;
					indice_reg<=indice_next;
					done_reg <= done_next;
				end
		end

	always @ *
		begin
			done_next = done_reg;
			count_next = count_reg;
			indice_next = indice_reg;
			if (indice_reg <= 7)
				begin
					if (a[indice_reg]==0)
						count_next=count_reg + 1 ;
					else
						count_next=count_reg;
				indice_next = indice_reg + 1;
				end
			else
				done_next = 1'b1;
		end
	assign count=count_reg;
	assign done = done_reg;

endmodule



