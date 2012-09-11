----------------------------------------------------------------------------------
-- Company:				Tallinn University of Technology, Dept. of Comp. Eng.
-- Engineer: 			mgorev
-- 
-- Create Date:			10:18:04 03/12/2012 
-- Design Name:			PS/2 kyeboard interface
-- Module Name:			keyboard_interface
-- Target Devices:		Spartan-6 FPGA
-- Tool versions:		Xilinx ISE 12.3
-- Description:			This implements a simple PS/2 keyboard interface. It
--						captures the message from the keyboard, extracts the
--						data byte and issues a data ready signal.
--
-- Revision:			1.0 - 2012.03.12 V1.0
-- Additional Comments:	
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity keyboard_interface is
	port (
		keyb_clk_in : in std_logic;
		keyb_data_in : in std_logic;
		clk : in	std_logic;
		data_out : out std_logic_vector(7 downto 0);
		interrupt : out std_logic
	);
end keyboard_interface;

architecture Behavioral of keyboard_interface is

	-- keyboard interface signals
	signal 	input_buffer : std_logic_vector(10 downto 0):= (others => '0');	-- KEYBOARD INPUT BUFFER (11 BIT WIDE)
	signal	byte1	: std_logic_vector(7 downto 0):= (others => '0');				--	8 BIT DATA CHUNK EXTRACTED FROM INPUT BUFFER

	signal	code_reg_ena :	std_logic	:= '0';											-- CODE REGISTER WRITE ENABLE SIGNAL
	signal	code_reg1 : std_logic_vector(7 downto 0):= (others => '0');			-- CODE REGISTER
	
	signal	slow_clk : std_logic:= '0';													--	SLOW CLOCK FOR TRIGGERS
	
	signal d1_in, d1_out, d2_in, d2_out : std_logic :='0';							-- TRIGGERS SIGNALS
	signal bit_counter : integer range 0 to 11:=0;										--	BIT COUNTER OF KEYBOART INPUT SEQUENCE

begin

-- PULSE GENERATION FROM code_reg_ena SIGNAL
-- interrupt handling
	d1_in <= code_reg_ena;
	d2_in <= (code_reg_ena and (not d1_out));
	interrupt <= d2_out;

	-- slow clock
	process (clk)
	begin
	if ((clk'event) and (clk = '1')) then
		slow_clk <= not slow_clk;
	end if;
	end process;

	-- D trigger 1
	process (slow_clk)
	begin
		if ((slow_clk'event) and (slow_clk = '1')) then
			d1_out <= d1_in;

		end if;
	end process;

	-- D trigger 2
	process (slow_clk)
	begin
		if ((slow_clk'event) and (slow_clk = '1')) then
			d2_out <= d2_in;
		end if;
	end process;
-------------------------------------------------

byte1 <= input_buffer(9 downto 2);			
data_out <= code_reg1;

-- keyboard interface
process (keyb_clk_in)
begin
	if keyb_clk_in'event and keyb_clk_in = '0' then

				input_buffer <= (keyb_data_in&input_buffer(10 downto 1));

				if bit_counter = 10 then
					code_reg_ena <= '0';
					bit_counter <= 0;
					
				elsif bit_counter = 9 then
					code_reg_ena <= '1';
					bit_counter <= bit_counter + 1;
					
				else
					code_reg_ena <= '0';
					bit_counter <= bit_counter + 1;
				end if;

	end if;
end process;

-- code register
process (clk)
begin
	if clk'event and clk = '1' then
		if code_reg_ena = '1' then
			code_reg1 <= byte1;
		else
			code_reg1 <= code_reg1;
		end if;	
	end if;
end process;

end Behavioral;

