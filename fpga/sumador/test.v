`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:16:49 08/31/2011
// Design Name:   sumador
// Module Name:   D:/fpga/sumador/test.v
// Project Name:  sumador
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sumador
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
	reg [3:0] a;
	reg [3:0] b;

	// Outputs
	wire [3:0] res;

	// Instantiate the Unit Under Test (UUT)
	sumador uut (
		.a(a), 
		.b(b), 
		.res(res)
	);

	initial begin
		// Initialize Inputs
		a = 4'b0000;
		b = 4'b0100;

		// Wait 100 ns for global reset to finish
		#100;

		a = 4'b0001;
		b = 4'b1010;
        
		// Add stimulus here

		#100;

		b = 4'b0001;
		a = 4'b1010;
		
		
		#100;

		b = 4'b1001;
		a = 4'b1010;
		
		#100;

		b = 4'b0001;
		a = 4'b1110;
		
		#100;
		
	   a = 4'b0010;
		b = 4'b0100;
		


	end
      
endmodule

