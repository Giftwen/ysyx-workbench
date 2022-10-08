/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-09-26 11:12:30
 * @LastEditTime: 2022-10-05 17:41:41
 * @Description: 
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */

 
`include "./vsrc/ysyx_22050058_define.v"
  module ysyx_22050058_inst_rom(
    input   wire                                    ce,
    input   wire    [`ysyx_22050058_InstAdderBus]   addr,
    output  reg     [`ysyx_22050058_InstBus]        inst     
 );
 
	reg[`ysyx_22050058_InstBus]  inst_mem   [`ysyx_22050058_InstMemNum-1 : 0];

	initial $readmemh ( "./data/ysyx_22050058_inst_rom.txt", inst_mem );

	always @ (*) begin
		if (ce == `ysyx_22050058_ChipDisable) begin
			inst = `ysyx_22050058_ZeroWord;
	  	end else begin
		  inst = inst_mem[addr[`ysyx_22050058_InstMemNumLog2:2]];
		end
	end

endmodule

