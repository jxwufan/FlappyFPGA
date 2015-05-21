`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:37:19 12/28/2014 
// Design Name: 
// Module Name:    keyboard 
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
//　此部分为键盘控制代码，大部分参考书上例程
module keyboard(
	input wire clk25,
	input wire clr,
	input wire PS2C,
	input wire PS2D,
	output reg ret,
	output reg start,
	output reg fly
);


reg PS2Cf, PS2Df;
reg [7:0] ps2c_filter, ps2d_filter;
reg [10:0] shift1, shift2;
assign xkey = {shift2[8:1], shift1[8:1]};

initial 
begin
	shift1 <= 0;
	shift2 <= 0;
end

always @(posedge clk25 or posedge clr)
begin
	if (clr == 1)
	begin
		ps2c_filter <= 0;
		ps2d_filter <= 0;
		PS2Cf <= 1;
		PS2Df <= 1;
	end
	else
	begin
		ps2c_filter <= {PS2C, ps2c_filter[7:1]};
		ps2d_filter <= {PS2D, ps2d_filter[7:1]};
		if (ps2c_filter == 8'b0000000)
			PS2Cf <= 0;
		else
			if (ps2c_filter == 8'b11111111)
				PS2Cf <= 1;
		if (ps2d_filter == 8'b0000000)
			PS2Df <= 0;
		else
			if (ps2d_filter == 8'b11111111)
				PS2Df <= 1;
	end
end

always @(negedge PS2Cf or posedge clr)
begin
	if (clr == 1)
	begin
		shift1 <= 0;
		shift2 <= 1;
	end
	else
	begin
		shift1 <= {PS2Df, shift1[10:1]};
		shift2 <= {shift1[0], shift2[10:1]};
	end
end

always @(posedge clk25)
begin
	//　根据当前PS2读取值输出信号
	if (shift2[8:1] != 8'hF0 && shift1[8:1] == 8'h29)
		fly <= 1;
	else
		fly <= 0;
	if (shift2[8:1] != 8'hF0 && shift1[8:1] == 8'h76)
		ret <= 1;
	else
		ret <= 0;
	if (shift2[8:1] != 8'hF0 && shift1[8:1] == 8'h5A)
		start <= 1;
	else
		start <= 0;
	
end

endmodule
