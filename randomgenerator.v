`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:30:26 12/22/2014 
// Design Name: 
// Module Name:    randomgenerator 
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
module randomgenerator(
			input wire clk,
			input wire fly,
			output reg [9:0] num
    );
	 // 此模块用于生成随机数，原理相对简单，通过一个计数器不断计数并且模一个素数，为了使生成的更加随机，通过加入游戏操作者的控制信号扰乱计数器使得所产生数据更加不规则

	 initial 
	 begin
		num <= 0;
	 end
	 
	 always @(posedge clk)
	 begin
			if (fly)
				num <= (num + 1023) % 349;// 在玩家按键的时候对计数器进行扰乱
			else
			num <= (num + 1) % 349; // 正常计数
	 end

endmodule
