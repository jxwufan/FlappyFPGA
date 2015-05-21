`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:24:24 12/28/2014 
// Design Name: 
// Module Name:    clkdiv2 
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
module clkdiv2(
input wire mclk,
input wire clr,
output wire clk25,
output wire clk190
    );
	 
reg [20:0] p;

always @(posedge mclk)
begin
	if (clr == 1)
	begin
		p <= 0;
	end
	else
	begin
		p <= p + 1;
	end
end

assign clk25 = p[1];
assign clk190 = p[18];


endmodule
