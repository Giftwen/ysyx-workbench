/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-10-24 11:06:23
 * @LastEditTime: 2022-10-24 13:54:03
 * @Description: 
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */
module ysyx_22050058_div #(parameter WIDTH = 64)
(
	input				   clk_i,
	input				   rst_i,
	input 				   data_valid_i,
	input 	   [WIDTH-1:0] dividend_i,
	input 	   [WIDTH-1:0] divisor_i,
	output reg 		 	   qr_valid_o,
	output reg [WIDTH-1:0] quotient_o,
	output reg [WIDTH-1:0] remainder_o
);

reg [2*WIDTH  :0] remainder [WIDTH-1:0];
reg [2*WIDTH-1:0] divisor   [WIDTH-1:0];
reg [  WIDTH-1:0] quotient  [WIDTH-1:0];
reg               dat_valid [WIDTH-1:0];
genvar m;
//get valid input data
always @ (posedge clk_i or posedge rst_i) begin
	if (rst_i) begin
		remainder[0] <= {2*WIDTH+1{1'b0}};
		divisor  [0] <= {2*WIDTH  {1'b0}};
		quotient [0] <= {  WIDTH  {1'b0}};
		dat_valid[0] <=            1'b0  ;
	end else if (data_valid_i) begin
		if (|divisor_i) begin
			remainder[0] <= (dividend_i<<1) - (divisor_i<<WIDTH);
			divisor  [0] <= divisor_i<<WIDTH;
			quotient [0] <= {  WIDTH  {1'b0}};
			dat_valid[0] <=            1'b1  ;
		end else begin
			remainder[0] <= {2*WIDTH+1{1'b0}};
			divisor  [0] <= {2*WIDTH  {1'b0}};
			quotient [0] <= {  WIDTH  {1'b0}};
			dat_valid[0] <=            1'b0  ;
		end
	end else begin
		remainder[0] <= {2*WIDTH+1{1'b0}};
		divisor  [0] <= {2*WIDTH  {1'b0}};
		quotient [0] <= {  WIDTH  {1'b0}};
		dat_valid[0] <=            1'b0  ;
	end
end
//if n<0, n=n+d; n<<1, n=n-q; \
//else n<<1, n=n-q;
generate
for (m=1;m<32;m=m+1) begin: calculate_31_cycle
	always @ (posedge clk_i or posedge rst_i) begin
		if (rst_i) begin
			remainder[m] <= {2*WIDTH+1{1'b0}};
			divisor  [m] <= {2*WIDTH  {1'b0}};
			quotient [m] <= {  WIDTH  {1'b0}};
			dat_valid[m] <=            1'b0  ;
		end else if (dat_valid[m]) begin
			if (remainder[m-1][2*WIDTH]) begin
				remainder[m] <= ((remainder[m-1]+divisor[m-1])<<1) - divisor[m-1];
				divisor  [m] <= divisor  [m-1];
				quotient [m] <= quotient [m-1]<<1 + 1'b1;
				dat_valid[m] <= dat_valid[m-1];
			end else begin
				remainder[m] <= (remainder[m-1]<<1) - divisor[m-1];
				divisor  [m] <= divisor  [m-1];
				quotient [m] <= (quotient [m-1]<<1) + 1'b1;
				dat_valid[m] <= dat_valid[m-1];
			end
		end else begin
			remainder[m] <= remainder[m-1];
			divisor  [m] <= divisor  [m-1];
			quotient [m] <= quotient [m-1];
			dat_valid[m] <= dat_valid[m-1];
		end
	end
end
endgenerate

always @ (posedge clk_i or posedge rst_i) begin
	if (rst_i) begin
		remainder_o <= {WIDTH{1'b0}};
		quotient_o  <= {WIDTH{1'b0}};
		qr_valid_o  <=        1'b0  ;
	end else if (dat_valid[31]) begin
		if (remainder[m-1][2*WIDTH]) begin
			remainder_o <= (remainder[31]+divisor[31])>>WIDTH;
			quotient_o  <= quotient [31]<<1;
			qr_valid_o  <= dat_valid[31];
		end else begin
			remainder_o <= remainder[31]>>WIDTH;
			quotient_o  <= (quotient [31]<<1) + 1'b1;
			qr_valid_o  <= dat_valid[31];
		end
	end else begin
			qr_valid_o  <= dat_valid[31];
	end
end

endmodule
