`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:44:08 09/07/2011 
// Design Name: 
// Module Name:    multiplexor 
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
module multiplexor(
    input [3:0] m0,
    input [3:0] m1,
    input [3:0] m2,
    input [3:0] m3,
	 input [1:0] btn,
    output reg [3:0] mout
    );

   always @*
   begin
      case(btn)
         2'b00: mout = m0;
         2'b01: mout = m1;
         2'b10: mout = m2;
			default: mout = m3; 
     endcase
   end


endmodule
