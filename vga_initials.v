`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:50:32 12/10/2014 
// Design Name: 
// Module Name:    vga_initials 
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
module vga_initials(
	input wire clk,
	input wire clk10ms,
	input wire vidon,
	input wire [9:0] hc,
	input wire [9:0] vc,
	input wire [12:0] ax, bx, cx,
	input wire [9:0] at, bt, ct, 
	input wire [9:0] bird,
	input wire [7:0] back_data,
	input wire [7:0] bird_data1,
	input wire [7:0] bird_data2,
	input wire [7:0] bird_data3,
	input wire [7:0] downtube_data1,
	input wire [7:0] downtube_data2,
	input wire [7:0] downtube_data3,
	input wire [7:0] uptube_data1,
	input wire [7:0] uptube_data2,
	input wire [7:0] uptube_data3,
	input wire [7:0] strip_data,
	input wire [7:0] num_data1,
	input wire [7:0] num_data2,
	input wire [7:0] num_data3,
	input wire [7:0] num_data4,
	input wire [7:0] num_data5,
	input wire [7:0] num_data6,
	input wire [3:0] score1, 
	input wire [3:0] score2, 
	input wire [3:0] score3,
	input wire [3:0] high_score1,
	input wire [3:0] high_score2,
	input wire [3:0] high_score3,
	input wire [1:0]  state,
	input wire [7:0] startback_data,
	input wire [7:0] retback_data,
	output wire [10:0] startback_add,
	output wire [10:0] retback_add,
	output wire [10:0] num_add1,
	output wire [10:0] num_add2,
	output wire [10:0] num_add3,
	output wire [10:0] num_add4,
	output wire [10:0] num_add5,
	output wire [10:0] num_add6,
	output wire [8:0] strip_add,
	output wire [12:0] downtube_add1,
	output wire [12:0] downtube_add2,
	output wire [12:0] downtube_add3,
	output wire [12:0] uptube_add1,
	output wire [12:0] uptube_add2,
	output wire [12:0] uptube_add3,
	output wire [14:0] back_add,
	output wire [9:0] bird_add,
	output reg[2:0] red,
	output reg[2:0] green,
	output reg[1:0] blue
);

parameter hbp = 10'b0010010000;
parameter vbp = 10'b0000011111;
parameter gap = 100;

wire [9:0] x, y;

assign x = hc - hbp - 1;
assign y = vc - vbp - 1;
assign back_add = y[9:2] * 160 + x[9:2];
assign bird_add = (x - 150) + (23 + y - bird) * 34;
assign downtube_add1 = ((ax - x) >> 2) + ((at - y) >> 2) * 25;
assign uptube_add1 = ((ax - x) >> 2) + ((y - at - gap) >> 2) * 25;
assign downtube_add2 = ((bx - x) >> 2) + ((bt - y) >> 2) * 25;
assign uptube_add2 = ((bx - x) >> 2) + ((y - bt - gap) >> 2) * 25;
assign downtube_add3 = ((cx - x) >> 2) + ((ct - y) >> 2) * 25;
assign uptube_add3 = ((cx - x) >> 2) + ((y - ct - gap) >> 2) * 25;

assign num_add1 = ((x - 275) >> 1) + 130 * ((y - 41) >> 1) + 13 * score1;
assign num_add2 = ((x - 301) >> 1) + 130 * ((y - 41) >> 1) + 13 * score2;
assign num_add3 = ((x - 327) >> 1) + 130 * ((y - 41) >> 1) + 13 * score3;
/*
assign num_add4 = ((x - 275) >> 1) + 130 * ((y - 101) >> 1) + 13 * high_score1;
assign num_add5 = ((x - 301) >> 1) + 130 * ((y - 101) >> 1) + 13 * high_score2;
assign num_add6 = ((x - 327) >> 1) + 130 * ((y - 101) >> 1) + 13 * high_score3;*/

assign strip_add = ((x + cnt2) % 12) + 12 * (y - 451);

assign startback_add = (x - 240) + 160 * (y - 240);
assign retback_add = (x - 240) + 152 * (y - 240);

// 命名尾部带有add的wire类型都为图片地址，根据当前VGA扫描到的像素点坐标设定地址

wire [10:0] ax1, bx1, cx1;

assign ax1 = ax - 100;
assign bx1 = bx - 100;
assign cx1 = cx - 100;

reg [3:0] cnt;
reg [5:0] cnt2;

initial 
begin
	cnt <= 0;
	cnt2 <= 0;
end

always @ (posedge clk10ms)
begin
	cnt2 <= (cnt2 + 1 ) % 12; //　cnt2用于实现草坪的移动效果，实际草坪图片为12*30，通过数学运算对载入的内存地址进行变换实现草坪移动效果
end

always @(posedge clk)
begin
	cnt <= cnt + 1; // cnt用于判断当前鸟的图片选择，通过在不同实现选择不同的图片实现鸟的拍翅膀效果
end
// state有三种值，0为等待开始状态，1为游戏进行状态，2为死亡状态
always @ (*)
begin
	if ((vidon == 1))
	begin
		if (y > 450) //当y坐标大于450时，为草坪，载入草坪数据
		begin
			red <= strip_data[7:5];
			green <= strip_data[4:2];
			blue <= strip_data[1:0];
		end
		else
		if (state != 2) // 非死亡状态显示所有物体，包括水管和鸟，以下为各种坐标情况下的内存载入
		begin
			if ( ( state == 0) && (x > 240) && (x < 400) && (y >= 240) && (y < 251) && (startback_data != 'b11111111) )
			begin
				red <= startback_data[7:5];
				green <= startback_data[4:2];
				blue <= startback_data[1:0];
			end
			else
			if ( ( x > 150 ) && (x < 184) && ( (y >= (bird - 23) ) || ( (bird < 23)  ) ) && (y <= bird) )
			begin
				if ( (cnt[3:2] == 2'b00) && (bird_data1 != 8'b11111111) )
				begin
					red <= bird_data1[7:5];
					green <= bird_data1[4:2];
					blue <= bird_data1[1:0];
				end
				else
				if ( (cnt[3:2] == 2'b01) && (bird_data2 != 8'b11111111) )
				begin
					red <= bird_data2[7:5];
					green <= bird_data2[4:2];
					blue <= bird_data2[1:0];
				end
				else
				if ( (cnt[3:2] == 2'b10) && (bird_data3 != 8'b11111111) )
				begin
					red <= bird_data3[7:5];
					green <= bird_data3[4:2];
					blue <= bird_data3[1:0];
				end
				else
				if ( (cnt[3:2] == 2'b11) && (bird_data1 != 8'b11111111) )
				begin
					red <= bird_data1[7:5];
					green <= bird_data1[4:2];
					blue <= bird_data1[1:0];
				end
				else
				begin
					red <= back_data[7:5];
					green <= back_data[4:2];
					blue <= back_data[1:0];
				end
			end
			else
			begin 
 				if ( (num_data1 != 8'b11111111) && (x > 274) && (x <= 300) && (y > 40) && (y <= 70) && (score1 != 0) )
				begin
					red <= num_data1[7:5];
					green <= num_data1[4:2];
					blue <= num_data1[1:0];
				end
				else
				if ( (num_data2 != 8'b11111111) && (x > 300) && (x <= 326) && (y > 40) && (y <= 70) && ( ( score2 != 0) || (score1 != 0) ) )
				begin
					red <= num_data2[7:5];
					green <= num_data2[4:2];
					blue <= num_data2[1:0];
				end
				else
				if ( (num_data3 != 8'b11111111) && (x > 326) && (x <= 352) && (y > 40) && (y <= 70) )
				begin
					red <= num_data3[7:5];
					green <= num_data3[4:2];
					blue <= num_data3[1:0];
				end
				else
				if ( ( (x > ax1) || (ax < 100) ) && (x <= ax) )
				begin
					if (y <= at && downtube_data1 != 8'b11111111)
					begin
						red <= downtube_data1[7:5];
						green <= downtube_data1[4:2];
						blue <= downtube_data1[1:0];
					end
					else
						if (y >= at + gap && uptube_data1 != 8'b11111111)
						begin
							red <= uptube_data1[7:5];
							green <= uptube_data1[4:2];
							blue <= uptube_data1[1:0];
						end
					else
					begin
							red <= back_data[7:5];
							green <= back_data[4:2];
							blue <= back_data[1:0];
					end
				end
				else
				if ( ( (x > bx1) || (bx < 100) ) && (x <= bx) )
				begin
					if (y <= bt && downtube_data2 != 8'b11111111)
					begin
						red <= downtube_data2[7:5];
						green <= downtube_data2[4:2];
						blue <= downtube_data2[1:0];
					end
					else
						if (y >= bt + gap && uptube_data2 != 8'b11111111)
						begin
							red <= uptube_data2[7:5];
							green <= uptube_data2[4:2];
							blue <= uptube_data2[1:0];
						end
					else
					begin
							red <= back_data[7:5];
							green <= back_data[4:2];
							blue <= back_data[1:0];
					end
				end
				else
				if ( ( (x > cx1) || (cx < 100) ) && (x <= cx) )
				begin
					if (y <= ct && downtube_data3 != 8'b11111111)
					begin
						red <= downtube_data3[7:5];
						green <= downtube_data3[4:2];
						blue <= downtube_data3[1:0];
					end
					else
						if (y >= ct + gap && uptube_data3 != 8'b11111111)
						begin
							red <= 7;
							red <= uptube_data3[7:5];
							green <= uptube_data3[4:2];
							blue <= uptube_data3[1:0];
						end
					else
					begin
							red <= back_data[7:5];
							green <= back_data[4:2];
							blue <= back_data[1:0];
					end
				end
				else
				begin
					red <= back_data[7:5];
					green <= back_data[4:2];
					blue <= back_data[1:0];
				end
			end
		end
		else
		begin // 当处于死亡状态，只显示得分和返回提示文字
				if ( (num_data1 != 8'b11111111) && (x > 274) && (x <= 300) && (y > 40) && (y <= 70) && (score1 != 0) )
				begin
					red <= num_data1[7:5];
					green <= num_data1[4:2];
					blue <= num_data1[1:0];
				end
				else
				if ( (num_data2 != 8'b11111111) && (x > 300) && (x <= 326) && (y > 40) && (y <= 70) && ( ( score2 != 0) || (score1 != 0) ) )
				begin
					red <= num_data2[7:5];
					green <= num_data2[4:2];
					blue <= num_data2[1:0];
				end
				else
				if ( (num_data3 != 8'b11111111) && (x > 326) && (x <= 352) && (y > 40) && (y <= 70) )
				begin
					red <= num_data3[7:5];
					green <= num_data3[4:2];
					blue <= num_data3[1:0];
				end
				else
			/*	if ( (num_data4 != 8'b11111111) && (x > 274) && (x <= 300) && (y > 100) && (y <= 130) && (high_score1 != 0) )
				begin
					red <= num_data4[7:5];
					green <= num_data4[4:2];
					blue <= num_data4[1:0];
				end
				else
				if ( (num_data5 != 8'b11111111) && (x > 300) && (x <= 326) && (y > 100) && (y <= 130) && ( ( high_score2 != 0) || (high_score1 != 0) ) )
				begin
					red <= num_data5[7:5];
					green <= num_data5[4:2];
					blue <= num_data5[1:0];
				end
				else
				if ( (num_data6 != 8'b11111111) && (x > 326) && (x <= 352) && (y > 100) && (y <= 130) )
				begin
					red <= num_data6[7:5];
					green <= num_data6[4:2];
					blue <= num_data6[1:0];
				end
				else原本计划显示6个数字代表最高分和当前分，由于资源限制已经放弃*/
				if ((x > 240) && (x < 392) && (y >= 240) && (y < 251) && (retback_data != 'b11111111) )
				begin
					red <= retback_data[7:5];
					green <= retback_data[4:2];
					blue <= retback_data[1:0];
				end
				else
				begin
					red <= back_data[7:5];
					green <= back_data[4:2];
					blue <= back_data[1:0];
				end
			end
	end
	else //处于非显示的时间，将RGB置为0
		begin
			red <= 'b000;
			green <= 'b000;
			blue <= 'b00;
		end
end

endmodule
