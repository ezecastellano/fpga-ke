//Listing 8.4
module sincronizadorDeFifosPorCantidad
   #( 
		parameter aRecibir = 32
   )
	(
	input wire clk, reset,
    input wire rd_uart_empty,
    output wire tx
   );
   
	reg tx_reg;
	reg tx_next;
	reg [3:0] count_next, count_reg;

	always @(posedge clk, posedge reset)
		if (reset)
			tx_reg <= 0;;
		else
			tx_reg <= tx_next;

	always @(posedge clk, posedge reset)
		if (reset)
			count_reg <= 0;
		else
			count_reg <= count_next;

		
	always @* 
		begin 
			tx_next = tx_reg;
			count_next = count_reg; // default state: the same 
			if (count_reg < aRecibir)
				begin
					if (rd_uart_empty)
						count_next = 0;
						tx_next = 0;
					else
						count_next = count_reg + 1;
						tx_next = 1;
				end
			else
				begin
					count_next = 0;
					tx_next = 0;
				end
		end 
		
	assign tx = tx_next;
	
endmodule		
			