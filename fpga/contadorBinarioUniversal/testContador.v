`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:21:00 09/14/2011
// Design Name:   contadorBinarioUniversal
// Module Name:   //dc3.ad.dc.uba.ar/RedirectedFolders06/ecastellano/Desktop/fpga/contadorBinarioUniversal/testContador.v
// Project Name:  contadorBinarioUniversal
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: contadorBinarioUniversal
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testContador;

	// Inputs
	reg clk;
	reg reset;
	reg syn_clr;
	reg load;
	reg en;
	reg up;
	reg [7:0] d;

	// Outputs
	wire max_tick;
	wire [7:0] q;
	wire min_tick;

	// Instantiate the Unit Under Test (UUT)
	contadorBinarioUniversal uut (
		.clk(clk), 
		.reset(reset), 
		.syn_clr(syn_clr), 
		.load(load), 
		.en(en), 
		.up(up), 
		.d(d), 
		.max_tick(max_tick), 
		.q(q), 
		.min_tick(min_tick)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		syn_clr = 0;
		load = 0;
		en = 0;
		up = 0;
		d = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

