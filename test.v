`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:50:53 12/22/2014
// Design Name:   vga_initials_top
// Module Name:   E:/code/hardware/flyppybird/test.v
// Project Name:  flyppybird
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

module test;

	// Inputs
	reg btn;
	reg mclk;

	// Outputs
	wire hsync;
	wire vsync;
	wire [2:0] red;
	wire [2:0] green;
	wire [1:0] blue;

	// Instantiate the Unit Under Test (UUT)
	vga_initials_top uut (
		.btn(btn), 
		.mclk(mclk), 
		.hsync(hsync), 
		.vsync(vsync), 
		.red(red), 
		.green(green), 
		.blue(blue)
	);

	initial begin
		// Initialize Inputs
		btn = 0;
		mclk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		mclk = 1;
		#10;
		mclk = 0;
		#10;		mclk = 1;
		#10;
		mclk = 0;
		#10;		mclk = 1;
		#10;
		mclk = 0;
		#10;		mclk = 1;
		#10;
		mclk = 0;
		#10;		mclk = 1;
		#10;
		mclk = 0;
		#10;		mclk = 1;
		#10;
		mclk = 0;
		#10;		mclk = 1;
		#10;
		mclk = 0;
		#10;		mclk = 1;
		#10;
		mclk = 0;
		#10;		mclk = 1;
		#10;
		mclk = 0;
		#10;		mclk = 1;
		#10;
		mclk = 0;
		#10;		mclk = 1;
		#10;
		mclk = 0;
		#10;		mclk = 1;
		#10;
		mclk = 0;
		#10;		mclk = 1;
		#10;
		mclk = 0;
		#10;		mclk = 1;
		#10;
		mclk = 0;
		#10;		mclk = 1;
		#10;
		mclk = 0;
		#10;		mclk = 1;
		#10;
		mclk = 0;
		#10;		mclk = 1;
		#10;
		mclk = 0;
		#10;		mclk = 1;
		#10;
		mclk = 0;
		#10;		mclk = 1;
		#10;
		mclk = 0;
		#10;

	end
      
endmodule

