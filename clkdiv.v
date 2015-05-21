`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:32:22 12/04/2014 
// Design Name: 
// Module Name:    clkdiv 
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
module clkdiv(
input wire mclk,
input wire clr,
output wire clk25,
output wire clk10ms,
output wire clk190
    );
	 
// mclk的时钟频率为100Mhz，通过计数器实现分频
	 
reg [2:0] p;
reg [19:0] regi;
reg [20:0] cnt;
reg _10ms;
reg [20:0] cnt2;

initial 
begin
	p <= 0;
	regi <= 0;
	_10ms <= 0;
	cnt <= 0;
end

always @(posedge mclk)
begin
	if (clr == 1)
	begin
		p <= 0;
		regi <= 0;
		cnt <= 0;
		cnt2 <= 0;
	end
	else
	begin
		cnt2 <= cnt2 + 1;
		p <= p + 1;
		if (regi == 999999) // 由于mclk每1M次的时候过去10Ms, 故通过计数器记录Mclk的次数实现10Ms的信号
			begin
				regi <= 0;
				_10ms <= 1;
			end
			else
			begin
				regi <= regi + 1;
				_10ms <= 0; 
			end 
	end
end

assign clk25 = p[1];
assign clk10ms = _10ms;
assign clk190 = cnt2[18];

// 25 与 190的原理类似，不再赘述


endmodule
