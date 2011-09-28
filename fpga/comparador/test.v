`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:54:56 08/24/2011
// Design Name:   comparador
// Module Name:   D:/fpga/comparador/test.v
// Project Name:  comparador
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: comparador
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg [1:0] a;
	reg [1:0] b;

	// Outputs
	wire aeqb;

	// Instantiate the Unit Under Test (UUT)
	comparador uut (
		.a(a), 
		.b(b), 
		.aeqb(aeqb)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		a = 1;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;

		a = 1;
		b = 1;

		// Wait 100 ns for global reset to finish
		#100;
		
		a = 2;
		b = 3;

		// Wait 100 ns for global reset to finish
		#100;
      		
		// Add stimulus here

	end
      
endmodule

