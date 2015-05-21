`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:59:51 12/10/2014 
// Design Name: 
// Module Name:    vga_initials_top 
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
module vga_initials_top(
input wire PS2C,// PS2输入信号
input wire PS2D,
input wire btn,// 用于调试的按钮输入
input wire btn2,
input wire btn3,
input wire btn4,
input wire btn5,
input wire mclk,// 100Mhz时间钟
output wire hsync,
output wire vsync,//扫描信号
output wire [2:0] red,
output wire [2:0] green,
output wire [1:0] blue,// 颜色信号
output wire LED2, // 用于调试的LED灯
output wire [6:0] a_to_g, // 用于输出最高得分的七段数码管
output wire [3:0] an,
output wire dp
    );
	 wire clk, clk10ms, vidon, clk25;
	 wire [9:0] hc, vc, num;
	 assign clr = btn;
	 wire [12:0] ax, bx, cx; 
	 wire [9:0] at, bt, ct;
	 wire [9:0] bird;
	 wire [14:0] back_add;
	 wire [9:0] bird_add;
	 wire [7:0] strip_data, back_data, bird_data1, bird_data2, bird_data3, downtube_data1, uptube_data1, downtube_data2, uptube_data2, downtube_data3, uptube_data3;
	 wire [12:0] downtube_add1, uptube_add1,
	 downtube_add2, uptube_add2,
	 downtube_add3, uptube_add3;
	 wire [8:0] strip_add;
	 wire [3:0] score1, score2, score3, high_score1, high_score2, high_score3;
	 wire [7:0] num_data1, num_data2, num_data3, num_data4, num_data5, num_data6;
	 wire [10:0] num_add1, num_add2, num_add3, num_add4, num_add5, num_add6;
	 wire plusone;
	 wire clr2;
	 wire [1:0] state;
	 wire fly, ret, start;
	 	
	wire [10:0] startback_add, retback_add;
	wire [7:0] startback_data, retback_data;
	wire clk190;
	
	//以上导线用于连接各个模块

	clkdiv U1(.mclk(mclk), .clr(clr), .clk25(clk25), .clk10ms(clk10ms), .clk190(clk190));
	
	// 分频器，clk25用于VGA的分频，clk10ms主要用在重力加速度的模拟和物体的移动上，clk190用于数码管的分频
	
	vga_640x480 U2 (.clk(clk25), .clr(clr), .hsync(hsync), .vsync(vsync), .hc(hc), .vc(vc), .vidon(vidon) );
	
	//　标准的ＶＧＡ模块，实现与配套书上的代码一致
	
	vga_initials U3 ( .clk(clk10ms), .clk10ms(clk10ms), .vidon(vidon), .hc(hc), .vc(vc), .ax(ax), .bx(bx), .cx(cx), .at(at), .bt(bt), .ct(ct), .bird(bird), 
						    .back_data(back_data), .back_add(back_add), .red(red), .green(green), .blue(blue) , .bird_add(bird_add), 
							 .bird_data1(bird_data1), .bird_data2(bird_data2), .bird_data3(bird_data3), 
							 .downtube_add1(downtube_add1), .downtube_data1(downtube_data1),
							 .uptube_data1(uptube_data1), .uptube_add1(uptube_add1), 
							 .downtube_add2(downtube_add2), .downtube_data2(downtube_data2),
							 .uptube_data2(uptube_data2), .uptube_add2(uptube_add2),
							 .downtube_add3(downtube_add3), .downtube_data3(downtube_data3),
							 .uptube_data3(uptube_data3), .uptube_add3(uptube_add3),
							 .strip_data(strip_data), .strip_add(strip_add),
							 .num_add1(num_add1), .num_add2(num_add2), .num_add3(num_add3),
							 .num_data1(num_data1), .num_data2(num_data2), .num_data3(num_data3),
							 .num_add4(num_add4), .num_add5(num_add5), .num_add6(num_add6),
							 .num_data4(num_data4), .num_data5(num_data5), .num_data6(num_data6),
							 .score1(score1), .score2(score2), .score3(score3),  
							 .high_score1(high_score1), .high_score2(high_score2), .high_score3(high_score3), .state(state),
							 .startback_add(startback_add), .startback_data(startback_data) ,
							 .retback_add(retback_add), .retback_data(retback_data) );
	
	// 显示模块，由于需要传输大量数据所以看起来线十分多，具体会在模块代码中解释
	
	randomgenerator U4 (.clk(mclk), .fly(btn2), .num(num));
	
	// 随机数生成模块，用于随机生成水管的高度
	
	objects U5 (.clk(mclk), .clk10ms(clk10ms), .num(num), .fly(fly), .ax(ax), .bx(bx), .cx(cx), .at(at), .bt(bt), .ct(ct), .bird(bird), .plusone(plusone), 
				   .collide(LED2), .start(start), .ret(ret), .clr(clr2), .state(state));
	
	//　控制物体数据的模块，
	
	background U6(.clka(mclk), .addra(back_add), .douta(back_data));
	
	bird1 U7(.clka(mclk), .addra(bird_add), .douta(bird_data1));
	
	bird2 U8(.clka(mclk), .addra(bird_add), .douta(bird_data2));
	
	bird3 U9(.clka(mclk), .addra(bird_add), .douta(bird_data3));
	
	downtube U10(.clka(mclk), .addra(downtube_add1), .douta(downtube_data1) );
	
	downtube U11(.clka(mclk), .addra(uptube_add1), .douta(uptube_data1) );

	downtube U12(.clka(mclk), .addra(downtube_add2), .douta(downtube_data2) );
	
	downtube U13(.clka(mclk), .addra(uptube_add2), .douta(uptube_data2) );

	downtube U14(.clka(mclk), .addra(downtube_add3), .douta(downtube_data3) );
	
	downtube U15(.clka(mclk), .addra(uptube_add3), .douta(uptube_data3) );
	
	backstrip U16(.clka(mclk), .addra(strip_add), .douta(strip_data) );
	
	nums U17(.clka(mclk), .addra(num_add1), .douta(num_data1));
	
	nums U18(.clka(mclk), .addra(num_add2), .douta(num_data2));
	
	nums U19(.clka(mclk), .addra(num_add3), .douta(num_data3));
	
	// 以上皆为图片数据，用于在VGA扫描的时候读取所扫描的像素点的数据，详见代码
	
	scorecnt U20(.clk(mclk), .plusone(plusone), .score1(score3), .score2(score2), .score3(score1), .reset(clr2),
					 .high_score1(high_score3), .high_score2(high_score2), .high_score3(high_score1) );
	
	// 得分计数器，通过object发憷的plusone信号进行计数，score为当前得分，high_score为历史最高得分
	
	/*nums U21(.clka(mclk), .addra(num_add4), .douta(num_data4));

	nums U22(.clka(mclk), .addra(num_add5), .douta(num_data5));

	nums U23(.clka(mclk), .addra(num_add6), .douta(num_data6));
　　由于开发板本身内存不够，此段本为最高分的显示图片模块，已经弃用
	*/

	start_back U24(.clka(mclk), .addra(startback_add), .douta(startback_data));
	
	ret_back U25(.clka(mclk), .addra(retback_add), .douta(retback_data));
	
	// 以上两个为游戏提示字符的图片数据
	
	keyboard U26(.clk25(clk25), .clr(clr), .PS2D(PS2D), .PS2C(PS2C), .fly(fly), .start(start), .ret(ret));
	
	// 键盘控制模块，通过键盘输入数据输出三个控制信号，分别是开始游戏信号，游戏进行时飞的信号，游戏死亡后返回重新开始游戏的信号
	
	x7segbc U27(.x({4'b0000, high_score1, high_score2, high_score3}), 
	.cclk(clk190), .clr(clr), .a_to_g(a_to_g), .an(an), .dp(dp) ); 
	
	// 七段数码管的显示模块，用于显示历史最高得分
	
endmodule
