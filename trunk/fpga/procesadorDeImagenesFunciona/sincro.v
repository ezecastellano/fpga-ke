`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:26:34 12/06/2011 
// Design Name: 
// Module Name:    sincro 
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
module sincro(
    input wire clk, reset,
    input wire rx_empty,
    input wire btn_tick,
    output wire signal
    );
	localparam [1:0]
	esperando = 2'b00,
	en_proceso = 2'b10,
	sacando_uno = 2'b01;
	
	// signal declaration
	reg [1:0] state_reg, state_next;

	// state register
	always @(posedge clk, posedge reset)
		if (reset)
			state_reg <= esperando;
		else
			state_reg <= state_next;

	always @* 
		begin 
			state_next = state_reg; // default state: the same 
			case (state_reg) 
				esperando: 
					begin
						if (btn_tick) 
							state_next = en_proceso;
					end
				en_proceso: 
					begin
						if (rx_empty) 
							state_next = esperando;
						else
							state_next = sacando_uno;
					end
				sacando_uno: 
					begin
						state_next = en_proceso; 				
					end
				default: 
					state_next = state_reg; 
			endcase 
		end 

		
	assign signal = state_reg[0];

	
endmodule
