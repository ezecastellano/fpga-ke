//Listing 8.4
module sincronizadorDeFifosPorFull   (
	input wire clk, reset,
    input wire rd_uart_full, rd_uart_empty,
    output wire tx
   );

//	wire [7:0] tx_fifo_out, rx_data_out;
//	wire tx_next;
   
	localparam [1:0]
	inicial = 2'b00, // full, empty
	llena = 2'b10,
	
	reg [1:0] state_reg, state_next;
	reg tx_reg;
//	reg [3:0] count_next;

	always @(posedge clk, posedge reset)
		if (reset)
			state_reg <= inicial;
		else
			state_reg <= state_next;

	always @(posedge clk, posedge reset)
		if (reset)
			tx_reg <= 0;
		else
			tx_reg <= tx_next;

		
	always @* 
		begin 
			state_next = state_reg; // default state: the same 
			tx_next = tx_reg;
		//	count_next = count_reg; // default state: the same 
			case (state_reg) 
				inicial: 
					begin
						if (rd_uart_full)
							state_next = llena;
							tx_next = 1;
					end

				llena: 
					begin
						if (rd_uart_empty)
							state_next = inicial;
							tx_next = 0;
						else
							tx_next = 1;
					end

				default: 
					state_next = inicial; 
					tx_next = 0;
			endcase 
		end 
		
	assign tx = tx_next;

endmodule		
			