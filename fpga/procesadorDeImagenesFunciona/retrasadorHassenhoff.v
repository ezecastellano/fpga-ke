`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:45:49 10/21/2011 
// Design Name: 
// Module Name:    retrasadorHassenhoff 
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
module retrasadorHassenhoff(
    input clk_in,
    output clk_out
    );
	 
//estados del clock
localparam 
		 cero= 1'b0,
		 uno=1'b1;
		 
// declaración de señales
	reg  estadoActual, estadoSiguiente;
	reg [19:0] contadorActual, contadorSiguiente;

// estado del registro
	always @(posedge clk_in)
		begin
		estadoActual <= estadoSiguiente;
		contadorActual<=contadorSiguiente;
		end
//logiga del siguiente estado
	always @*
	begin
		// por "default" el estado siguiente es el actual
		estadoSiguiente = estadoActual;
		contadorSiguiente=contadorActual+20'd1;
		case(estadoActual)
			cero:
		
				if (contadorActual==20'd0)
				estadoSiguiente=uno;
				
			uno:
	
				if (contadorActual==20'd0)
				estadoSiguiente=cero;
				
		endcase
	end	
	
	assign clk_out=(estadoActual==cero)? 1'b0:1'b1; 

endmodule
