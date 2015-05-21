`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:43:20 01/29/2015
// Design Name:   randomgenerator
// Module Name:   E:/code/hardware/flappybird/test1.v
// Project Name:  flappybird
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: randomgenerator
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test1;

	// Inputs
	reg clk;
	reg fly;

	// Outputs
	wire [9:0] num;

	// Instantiate the Unit Under Test (UUT)
	randomgenerator uut (
		.clk(clk), 
		.fly(fly), 
		.num(num)
	);
	integer i;
	initial begin
		// Initialize Inputs
		clk <= 0;
		fly <= 0;

		// Wait 100 ns for global reset to finish
		#100;
		

        
		// Add stimulus here

		/*for(i = 0 ; i < 100; i = i + 1)
		begin
			clk = !clk;
			if (i == 20 || i == 40) fly = 1; else fly = 0;
			#100;
		end*/
	end
      
endmodule

