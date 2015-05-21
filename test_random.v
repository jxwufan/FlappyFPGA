`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:42:38 01/29/2015
// Design Name:   vga_initials_top
// Module Name:   E:/code/hardware/flappybird/test_random.v
// Project Name:  flappybird
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: vga_initials_top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_random;

	// Inputs
	reg PS2C;
	reg PS2D;
	reg btn;
	reg btn2;
	reg btn3;
	reg btn4;
	reg btn5;
	reg mclk;

	// Outputs
	wire hsync;
	wire vsync;
	wire [2:0] red;
	wire [2:0] green;
	wire [1:0] blue;
	wire LED2;
	wire [6:0] a_to_g;
	wire [3:0] an;
	wire dp;

	// Instantiate the Unit Under Test (UUT)
	vga_initials_top uut (
		.PS2C(PS2C), 
		.PS2D(PS2D), 
		.btn(btn), 
		.btn2(btn2), 
		.btn3(btn3), 
		.btn4(btn4), 
		.btn5(btn5), 
		.mclk(mclk), 
		.hsync(hsync), 
		.vsync(vsync), 
		.red(red), 
		.green(green), 
		.blue(blue), 
		.LED2(LED2), 
		.a_to_g(a_to_g), 
		.an(an), 
		.dp(dp)
	);

	initial begin
		// Initialize Inputs
		PS2C = 0;
		PS2D = 0;
		btn = 0;
		btn2 = 0;
		btn3 = 0;
		btn4 = 0;
		btn5 = 0;
		mclk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

