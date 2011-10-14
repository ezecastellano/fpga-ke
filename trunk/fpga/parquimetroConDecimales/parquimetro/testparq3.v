`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:15:49 10/05/2011
// Design Name:   fsm
// Module Name:   D:/FPGA-SVN/fpga/parquimetro/testparq3.v
// Project Name:  parquimetro
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fsm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testparq3;

	// Inputs
	reg clk;
	reg reset;
	reg a;
	reg b;

	// Outputs
	wire tick;
	wire [7:0] count_reg;

	// Instantiate the Unit Under Test (UUT)
	fsm uut (
		.clk(clk), 
		.reset(reset), 
		.a(a), 
		.b(b), 
		.tick(tick), 
		.count_reg(count_reg)
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

