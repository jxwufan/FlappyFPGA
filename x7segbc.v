`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:39:19 12/05/2014 
// Design Name: 
// Module Name:    x7segbc 
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
// 七段数码管代码，完全使用书上例程，不在赘述
module x7segbc(
input wire[15:0] x,
input wire cclk,
input wire clr,
output reg[6:0] a_to_g,
output reg[3:0] an,
output wire dp
    );
	 
reg[1:0] s;
reg[3:0] digit;

assign dp = 1;

always @(*)
case (s)
	0: digit = x[3:0];
	1: digit = x[7:4];
	2: digit = x[11:8];
	3: digit = x[15:12];
	default: digit = x[3:0];
endcase

always @(*)
case (digit)
	0: a_to_g = 7'b0000001;
	1: a_to_g = 7'b1001111;
	2: a_to_g = 7'b0010010;
	3: a_to_g = 7'b0000110;
	4: a_to_g = 7'b1001100;
	5: a_to_g = 7'b0100100;
	6: a_to_g = 7'b0100000;
	7: a_to_g = 7'b0001111;
	8: a_to_g = 7'b0000000;
	9: a_to_g = 7'b0000100;
	'hA: a_to_g = 7'b0001000;
	'hB: a_to_g = 7'b1100000;
	'hC: a_to_g = 7'b0110001;
	'hD: a_to_g = 7'b1000010;
	'hE: a_to_g = 7'b0110000;
	'hF: a_to_g = 7'b0111000;
default: a_to_g = 7'b0000001;
endcase

always @(*)
begin
	an = 4'b1111;
	if ((s == 2 && digit != 4'b0000) || (s == 1 && digit == 4'b0000 && x[11:8] != 4'b0000) || (s == 1 && digit != 4'b0000) || (s == 4'b0000) )
		an[s] = 0;
end

always @(posedge cclk or posedge clr)
begin
	if (clr == 1)
		s <= 0;
	else
		s <= s + 1;
end

endmodule
