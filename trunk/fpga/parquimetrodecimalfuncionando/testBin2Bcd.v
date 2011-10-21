`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:16:11 10/21/2011
// Design Name:   bin2bcd
// Module Name:   D:/fpga-ke usar este/fpga/parquimetrodecimalfuncionando/testBin2Bcd.v
// Project Name:  parquimetrodecimalfuncionando
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: bin2bcd
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testBin2Bcd;

	// Inputs
	reg clk;
	reg reset;
	reg start;
	reg [12:0] bin;

	// Outputs
	wire ready;
	wire done_tick;
	wire [3:0] bcd3;
	wire [3:0] bcd2;
	wire [3:0] bcd1;
	wire [3:0] bcd0;

	// Instantiate the Unit Under Test (UUT)
	bin2bcd uut (
		.clk(clk), 
		.reset(reset), 
		.start(start), 
		.bin(bin), 
		.ready(ready), 
		.done_tick(done_tick), 
		.bcd3(bcd3), 
		.bcd2(bcd2), 
		.bcd1(bcd1), 
		.bcd0(bcd0)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		start = 0;
		bin = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		clk = 1;
		
		#100;
		
		clk = 0;
	
		bin = 1;
	
	
		#100;
		
		clk = 1;
		
		#100;
		
		clk = 0;
		
		#100;
        
		// Add stimulus here

	end
      
endmodule

