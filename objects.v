`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:10:05 12/22/2014 
// Design Name: 
// Module Name:    tubes 
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
module objects(
	 input wire clk,
	 input wire clk10ms,
	 input wire [9:0] num,
	 input wire fly,
	 input start,
	 input ret,
	 output reg [12:0] ax, bx, cx, 
	 output reg [9:0] at, bt, ct,
	 output reg [9:0] bird,
	 output reg plusone,
	 output reg collide,
	 output reg clr,
	 output reg [1:0] state
    );
	 
	 reg signed [20:0] speed;
	 reg [2:0] cnt;
	 reg [1:0] clk10ms_filter, start_filter, ret_filter;
	 
	 initial 
	 begin
		speed <= 0;
		ax <= 740;
		bx <= 740 + 270;
		cx <= 740 + 270 + 270;
		at <= 220;
		bt <= 330;
		ct <= 210;
		//初始化三个水管的坐标以及水管洞的高度
		bird <= 250;
		plusone <= 0;
		collide <= 0;
		state <= 0;
		clk10ms_filter <= 0;
		start_filter <= 0;
		ret_filter <= 0;
		clr <= 0;
	 end
	 
	 // 由于一个寄存器只能有一个always块对其进行操作，这里我使用了两个filter，用于手动检测上升沿，当filter内部为01时候即为检测到上升沿
	 
	 always @(posedge clk)
	 begin
		clk10ms_filter = {clk10ms_filter[0], clk10ms};
		start_filter = {start_filter[0], start};
		ret_filter = {ret_filter[0], ret};// 分别对10ms的时钟，返回键，开始键进行采样，手动判断上升沿
		if (start_filter == 2'b01 && state == 0) // 检测到开始信号，改变状态开始游戏
		begin
			state <= 1;
		end
		else
		if (ret_filter == 2'b01 && state == 2) // 检测返回信号，从希望状态转变到开始待开始状态
		begin
			state <= 0;
		end
		else
		begin
			if (state == 0)
			begin
				// 当处于待开始状态时，初始化各种数据，包括鸟的高度速度以及水管的坐标
				speed <= 0;
				ax <= 740;
				bx <= 740 + 270;
				cx <= 740 + 270 + 270;
				at <= 220;
				bt <= 330;
				ct <= 210;
				bird <= 250;
				plusone <= 0;
				clr <= 1;
			end
			else
			begin
				clr <= 0;
				if (state == 1)
				begin
					if (clk10ms_filter == 2'b01)
					begin
						// 每10毫秒对各种元素信息进行修改，产生水管移动以及鸟的重力效果，并进行死亡的判定。
						if (fly)
							speed <= - 15;
						else speed <= speed + 1;
						if (ax == 0)
							begin
								ax <= cx + 270;
								at <= num;
							end
							else
							begin
								ax <= ax - 1;
								at <= at;
							end
						if (bx == 0)
							begin
								bx <= ax + 270;
								bt <= num;
							end
							else
							begin
								bx <= bx - 1;
								bt <= bt;
							end
						if (cx == 0)
							begin
								cx <= bx + 270;
								ct <= num;
							end
							else
							begin
								cx <= cx - 1;
								ct <= ct;
							end
							bird <= (bird + speed[20:3]);
						// 当鸟经过一个管子产生一个增加的信号
						if ( ax == 201 || bx == 201 || cx == 201 )
							plusone <= 1;
						else
							plusone <= 0;
						if ( ( ( (ax <= 282) && (ax >= 151) ) && ( ( at + 24 >= bird)  || (at + 100 <= bird) ) ) ||
							  ( ( (bx <= 282) && (bx >= 151) ) && ( ( bt + 24 >= bird)  || (bt + 100 <= bird) ) ) ||
							  ( ( (cx <= 282) && (cx >= 151) ) && ( ( ct + 24 >= bird)  || (ct + 100 <= bird) ) ) ||
							  ( bird > 450) )
							  state <= 2;
					   //　产生碰撞，进入死亡状态
					end
				end
			end
		end
	 end
	 /*
	 always @(posedge clk10ms)
	 begin
		if (fly)
				speed <= - 15;
		else speed <= speed + 1;
	 end
	 
	 
	 always @(posedge clk10ms)
	 begin
		if (ax == 0)
			begin
				ax <= cx + 270;
				at <= num;
			end
			else
			begin
				ax <= ax - 1;
				at <= at;
			end
		if (bx == 0)
			begin
				bx <= ax + 270;
				bt <= num;
			end
			else
			begin
				bx <= bx - 1;
				bt <= bt;
			end
		if (cx == 0)
			begin
				cx <= bx + 270;
				ct <= num;
			end
			else
			begin
				cx <= cx - 1;
				ct <= ct;
			end
			bird <= (bird + speed[20:3]);
		if ( ax == 201 || bx == 201 || cx == 201 )
			plusone <= 1;
		else
			plusone <= 0;
		if ( ( ( (ax <= 250) && (ax >= 183) ) && ( ( at + 23 >= bird)  || (at + 100 <= bird) ) ) ||
		     ( ( (bx <= 250) && (bx >= 183) ) && ( ( bt + 23 >= bird)  || (bt + 100 <= bird) ) ) ||
			  ( ( (cx <= 250) && (cx >= 183) ) && ( ( ct + 23 >= bird)  || (ct + 100 <= bird) ) ) ||
			  ( bird > 450) )
			  collide <= 1;
		else
			collide <= 0;
	 end*/

endmodule
