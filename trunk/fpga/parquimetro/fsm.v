`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:31:28 09/28/2011 
// Design Name: 
// Module Name:    fsm 
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
module fsm(
	input wire clk, reset,
	input wire a, 
	input wire b,
	output reg tick,
	output contador
	
);
// symbolic state declaration
	localparam [3:0]
	e1 = 4'b0000,
	e2 = 4'b1010,
	e3 = 4'b1110,
	e4 = 4'b1011,
	e5 = 4'b0100,
	e6 = 4'b1000,
	e7 = 4'b1100;
	
	// signal declaration
	reg [3:0] state_reg, state_next;
	// state register
	always @(posedge clk, posedge reset)
		if (reset)
			state_reg <= zero;
		else
			state_reg <= state_next;
			
	
	contador = 4'b0000;
			
	always @* 
	begin state_next = state_reg; // default state: the same 
	tick = 1'b0; // default output: 0 
	case (state_reg) 
		e1: 
			begin
				if (a) 
					state_next = e2; 
				else 
					if (b)
						state_next = e5; 
			end
		e2: 
			begin
				if (~a) 
					state_next = e1; 
				else
					if (b)
						state_next = e3; 				
			end
		e3: 
			begin
				if (~a) 
					state_next = e5; 
				else
					if (~b)
						state_next = e4; 				
			end
		e4: 
			begin
				if (~a) 
					state_next = e1; 
					// se debe aumentar contador
				else
					if (b)
						state_next = e3; 				
			end
		e5: 
			begin
				if (a) 
					state_next = e7; 
				else
					if (~b)
						state_next = e1; 				
			end
		e6: 
			begin
				if (~a) 
					state_next = e1; 
				else
					if (b)
						state_next = e7; 				
			end
		e7: 
			begin
				if (~a) 
					state_next = e5; 
				else
					if (~b)
						state_next = e6; 				
			end
		default: 
			state_next = e1; 
		endcase 
	end 
endmodule		
			
			
			