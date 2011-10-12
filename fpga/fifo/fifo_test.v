`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:22:38 10/12/2011 
// Design Name: 
// Module Name:    fifo_test 
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
module fifo_test(
	input wire clk, reset,
	input wire [1:0] btn,
	input wire [2:0] sw,
	output wire [7:0] led 
	);

	//No usamos el debounce porque es para estabilizar la se�al.

	// signal declaration 
	//wire [1:0] db_btn; 
	
	// debounce circuit for btn[0] 
	//debounce btn_db_unit0 (.clk(clk), .reset(reset), .sw(btn[0]), .db_level(), .db_tick(db_btn[0])); 
	
	// debounce circuit for btn[1] 
	//debounce btn_db_unit1 (.clk(clk), .reset(reset), .sw(btn[1]), .db_level(), .db_tick(db_btn[1]));
	
	// instantiate a 2^2-by-3 fifo 
	//fifo #(.B(3), .W(2)) fifo_unit (.clk(clk), .reset(reset), .rd(db_btn[0]), .wr(db_btn[1]), .w_data(sw), .r_data(led[2:0]), .full(led[7]), .empty(led[6])); 
		
	fifo #(.B(3), .W(2)) fifo_unit (.clk(clk), .reset(reset), .rd(btn[0]), .wr(btn[1]), .w_data(sw), .r_data(led[2:0]), .full(led[7]), .empty(led[6])); 	
	
	// disable unused leds 
	assign led[5:3] = 3'b000; 

endmodule
