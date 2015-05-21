`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:19:06 12/06/2014 
// Design Name: 
// Module Name:    vga_stripes 
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
module vga_stripes(
input wire vidon,
input wire [9:0] hc, vc,
output reg[2:0] red, green,
output reg[1:0] blue
    );
	 
reg [1:0] cnt;
	 
	 always @(*)
	 begin
		red = 0;
		green = 0;
		blue = 0;
		if (vidon == 1)
		begin
			red = {vc[6], vc[6], vc[6]};
			blue = {vc[3], vc[3]};
			green = ~{vc[3], vc[3], vc[3]};
		end
	end


endmodule
