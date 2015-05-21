`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:30:47 12/27/2014 
// Design Name: 
// Module Name:    scorecnt 
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
// 此模块用于统计当前游戏的得分状态，具体实现是通过两个计数器，一个计数器记录历史最高分，一个计数器记录当前的分，根据当前输入信号进行改变。
module scorecnt(
input wire clk,
input wire plusone,
input wire reset,
output wire [3:0] score1, score2, score3,
						high_score1, high_score2, high_score3
    );
	 reg [9:0] score; // 计数器用来记录当前得分
	 reg [9:0] high_score; // 计数器用来记录历史最高分
	 reg [1:0] filter_plusone, filter_reset; // 手动判断上升触发
	 
	 initial
	 begin
	 // 寄存器初始化
		score <= 0;
		high_score <= 0;
		filter_plusone <= 0;
		filter_reset <= 0;
	 end
	 
	 always @(posedge clk)
	 begin
		filter_plusone = {filter_plusone[0], plusone};
		filter_reset = {filter_reset[0], reset};
		if (reset == 2'b01)
			score <= 0;
		else
		begin
			if (filter_plusone == 2'b01)
				score <= score + 1; // 根据信号计数器加1
			if (high_score < score) 
				high_score <= score; // 改变历史最高分
		end
	 end
	 //使用以下电路强行转换成BCD码
	 assign score1 = score % 10; 
	 assign score2 = (score / 10) % 10;
	 assign score3 = (score / 100);

	 assign high_score1 = high_score % 10;
	 assign high_score2 = (high_score / 10) % 10;
	 assign high_score3 = (high_score / 100);

endmodule
