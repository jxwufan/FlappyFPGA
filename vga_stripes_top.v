`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:24:07 12/06/2014 
// Design Name: 
// Module Name:    vga_stripes_top 
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
module vga_stripes_top(
input wire mclk,
input wire btn,
output wire hsync, vsync,
output wire [2:0] red, green,
output wire [1:0] blue
    );
	 
	 wire clk25, clr, vidon;
	 wire [9:0] hc, vc;
	 assign clr = btn;
	 
	 clkdiv U1(.mclk(mclk),
				  .clr(clr),
				  .clk25(clk25));
				  
	 vga_640x480 U2(.clk(clk25),
					.clr(clr),
				  .hsync(hsync),
				  .vsync(vsync),
				  .hc(hc),
				  .vc(vc),
				  .vidon(vidon));
	
	 vga_stripes U3(.vidon(vidon),
						 .hc(hc),
						 .vc(vc),
						 .red(red),
						 .green(green),
						 .blue(blue));
						 


endmodule
