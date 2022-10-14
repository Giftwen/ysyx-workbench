/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-09-26 11:12:30
 * @LastEditTime: 2022-10-14 20:17:34
 * @Description: 
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */

 
`include "./vsrc/ysyx_22050058_define.v"
  module ysyx_22050058_inst_rom(
	input	wire									clk,
	input	wire									rst,
    input   wire                                    ce,
	//Interface with CtrlBlock
    input   wire    [5:0]                           stall,
    input   wire    [5:0]                           flush,
    input   wire    [`ysyx_22050058_InstAdderBus]   addr,
	output	reg	[`ysyx_22050058_InstAdderBus]	thispc,
    output  reg     [`ysyx_22050058_InstBus]        inst     
 );

	import "DPI-C" function void pmem_read(input longint inst_raddr, output longint inst);
 
	//reg[`ysyx_22050058_InstBus]  inst_mem   [`ysyx_22050058_InstMemNum-1 : 0];
	reg [`ysyx_22050058_InstLen*2-1:0] inst_line;
	//initial $readmemh ( "./data/ysyx_22050058_inst_rom.txt", inst_mem );
	always @(posedge clk ) begin
		thispc<=addr;
	end
	always @ (posedge clk) begin
		if (rst) begin
			inst <= `ysyx_22050058_ZeroWord;
		end else if((stall[0] == `ysyx_22050058_StallEnable)
            &&(stall[1] == `ysyx_22050058_StallDisable))begin
			inst <= `ysyx_22050058_ZeroWord;
		end else if(flush[0] == `ysyx_22050058_FlushEnable)begin
			inst <= `ysyx_22050058_ZeroWord;
		end else if (ce==`ysyx_22050058_ChipDisable)begin
			inst <= `ysyx_22050058_ZeroWord;
		end else begin
			pmem_read(addr, inst_line);
		  	inst <= addr[2]?inst_line[63:32]:inst_line[31:0];
		end
	end

endmodule

