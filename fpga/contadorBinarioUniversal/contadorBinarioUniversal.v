`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:35:05 09/14/2011 
// Design Name: 
// Module Name:    contadorBinarioUniversal 
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
module contadorBinarioUniversal
	#(parameter N=8) 
	(
    input wire clk,
    input wire reset,
    input wire syn_clr,
    input wire load,
    input wire en,
    input wire up,
    input wire [N-1:0] d,
    output wire max_tick,
    output wire [N-1:0] q,
    output wire min_tick
    );

		reg [N-1:0] r_reg; 
		reg [N-1:0] r_next;
		
		always @(posedge clk, posedge reset) 
			if (reset) 
				r_reg <= 0; 
			else 
				r_reg <= r_next; 
				
		always @*
			if (syn_clr)
				r_next = 0;
			else if (load)
				r_next = d;
			else if (en & up)
				r_next = r_reg + 1;
			else if (en & ~up)
				r_next = r_reg - 1;
			else 
				r_next = r_reg;
		
		assign q = r_reg;
		assign max_tick = (r_reg==2**N-1) ? 1'b1 : 1'b0;
		assign min_tick = (r_reg==0) ? 1'b1 : 1'b0;
		
endmodule
