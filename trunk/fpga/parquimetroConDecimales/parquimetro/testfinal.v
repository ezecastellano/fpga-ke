`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:36:31 10/07/2011
// Design Name:   parquimetrotop
// Module Name:   D:/FPGA-SVN/fpga/parquimetro/testfinal.v
// Project Name:  parquimetro
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: parquimetrotop
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testfinal;

	// Inputs
	reg clk;
	reg reset;
	reg a;
	reg b;

	// Outputs
	wire [7:0] count_sseg;
	wire [3:0] an;

	// Instantiate the Unit Under Test (UUT)
	parquimetrotop uut (
		.clk(clk), 
		.reset(reset), 
		.a(a), 
		.b(b), 
		.count_sseg(count_sseg), 
		.an(an)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
		reset = 0;        
		clk = 1;
		#100;

		clk = 0;
		a = 1;
		b = 0;
		#100;
        
		clk = 1;
		#100;

		clk = 0;
		a = 1;
		b = 1;

		#100;
        
		clk = 1;
		#100;

		clk = 0;
		a = 1;
		b = 0;

		#100;
        
		clk = 1;
		#100;

		clk = 0;
		a = 0;
		b = 0;


		// Wait 100 ns for global reset to finish
		#100;
		
		clk=1;
		#100;
		
		clk=0;
		
        
		// Add stimulus here

	end
      
endmodule

