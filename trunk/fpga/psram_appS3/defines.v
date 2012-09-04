// enables simulation mode
//`define SIM

// enable 7-segment LED module
//`define SEVEN_SEG

// PSRAM configuration word
`define psram_config_word 23'b000_10_00_0_1_011_1_0_0_0_0_01_1_111

// FSM state codes (not forcing)
`define init_state 0

`define conf_1_state 1
`define conf_2_state 2
`define conf_3_state 3
`define conf_4_state 4
`define conf_5_state 5
`define conf_6_state 6
`define conf_7_state 7

`define idle_state 8

`define wr_0_state 9
`define wr_1_state 10
`define wr_2_state 11
`define wr_3_state 12
`define wr_4_state 13
`define wr_5_state 14
`define wr_6_state 15
`define wr_7_state 16
`define wr_8_state 17
`define wr_9_state 18
`define wr_10_state 19

`define rd_0_state 20
`define rd_1_state 21
`define rd_2_state 22
`define rd_3_state 23
`define rd_4_state 24
`define rd_5_state 25
`define rd_6_state 26
`define rd_7_state 27
`define rd_8_state 28
`define rd_9_state 29
`define rd_10_state 30

// VGA standard
`define VESA_800x600_60Hz
//`define VESA_800x600_72Hz

// VGA timing generator
	`define SPP 1'b1
	`define HLINES 800
	`define VLINES 600
`ifdef VESA_800x600_60Hz
	`define HMAX 1056
	`define VMAX 628
	`define HFP 840
	`define HSP 968
	`define VFP 601
	`define VSP 605
`elsif VESA_800x600_72Hz
	`define HMAX 1040
	`define VMAX 666
	`define HFP 856
	`define HSP 976
	`define VFP 637
	`define VSP 643
`endif