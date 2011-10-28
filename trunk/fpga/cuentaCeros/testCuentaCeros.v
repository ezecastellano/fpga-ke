`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:58:39 10/28/2011
// Design Name:   cuentaCeros
// Module Name:   D:/fpga-ke usar este/fpga/cuentaCeros/testCuentaCeros.v
// Project Name:  cuentaCeros
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cuentaCeros
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testCuentaCeros;

	// Inputs
	reg [7:0] a;
	reg clk;
	reg start;

	// Outputs
	wire [2:0] count;
	wire done;

	// Instantiate the Unit Under Test (UUT)
	cuentaCeros uut (
		.a(a), 
		.clk(clk), 
		.start(start), 
		.count(count), 
		.done(done)
	);
	
/**

// PARA NO TENER QUE SETEAR EL CLK A MANO CADA VEZ

	
	parameter T = 100;
	
	always
	begin
		clk = 0;
		#(T/2);
		clk = 1;
		#(T/2);
	end

**/

	initial begin
		// Initialize Inputs
		a = 8'b00001100;
		clk = 1;
		start = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;
		
		/**
		// PARA HACER ALGO CUANDO ESTA EL CLK EN 1
		
		@(posedge clk);
		
		**/
		
		start = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;


		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;


		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;

		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;


		// Add stimulus here

	end
      
endmodule

