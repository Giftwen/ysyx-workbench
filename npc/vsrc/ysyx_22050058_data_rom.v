/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-10-21 01:03:17
 * @LastEditTime: 2022-11-04 21:50:00
 * @Description: 
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */
`include "./vsrc/ysyx_22050058_define.v"
  module ysyx_22050058_data_rom(
	input	wire									 clk,
	input	wire								  	 rst,
    input   wire                                     ce,
	//Interface with MemBlock
    input   wire                                     memre_i,
    input   wire     [`ysyx_22050058_StoreSelBus]    memwe_i,
    input   wire     [`ysyx_22050058_MemAddrBus]     memaddr_i,
    input   wire     [`ysyx_22050058_MemBUS]         memwdata_i, 
    output  reg      [`ysyx_22050058_MemBUS]         memrdata_o,
    output  reg                                      memrdatavaild_o,
    output  reg                                      memwdatavaild_o
    
 );
 
	import "DPI-C" function void pmem_read(input longint inst_raddr, output longint inst);
    import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);
	reg [63:0] data_line1;
    reg [63:0] data_line2;
    reg [`ysyx_22050058_StoreSelBus] data_mask;
    reg [`ysyx_22050058_MemAddrBus]  data_addr;
	always @ (posedge clk) begin
		if (rst) begin
			memrdata_o      <= `ysyx_22050058_ZeroWord;
            memrdatavaild_o <= `ysyx_22050058_MemReadnVaild;
		end else if (   ce  ==  `ysyx_22050058_ChipDisable) begin
			memrdata_o      <=  `ysyx_22050058_ZeroWord;
            memrdatavaild_o <=  `ysyx_22050058_MemReadnVaild;
		end else if(memre_i ==  `ysyx_22050058_MemReadEnable) begin
			pmem_read(memaddr_i, data_line1);
            memrdata_o      <= data_line1;
            memrdatavaild_o <= `ysyx_22050058_MemReadVaild;
        end else begin
            memrdata_o      <= `ysyx_22050058_ZeroWord;
            memrdatavaild_o <= `ysyx_22050058_MemReadnVaild;
        end
	end

    always @ (posedge clk) begin
		if (rst) begin
            memwdatavaild_o <=  `ysyx_22050058_MemWritenVaild;
            data_line2      <=  `ysyx_22050058_ZeroWord;
            data_mask       <=  `ysyx_22050058_StoreSelBusNum'b00000000;
		end else if (   ce  ==  `ysyx_22050058_ChipDisable) begin
			data_line2      <=  `ysyx_22050058_ZeroWord;
            memwdatavaild_o <=  `ysyx_22050058_MemWritenVaild;
            data_mask       <=  `ysyx_22050058_StoreSelBusNum'b00000000;
        end else if(memwe_i !=  `ysyx_22050058_StoreSelBusNum'b00000000) begin
            data_line2       <= memwdata_i;
            data_mask        <= memwe_i;
            data_addr        <= memaddr_i;
            
            memwdatavaild_o <= `ysyx_22050058_MemWriteVaild;
        end else begin
            data_line2      <= `ysyx_22050058_ZeroWord;
            memwdatavaild_o <= `ysyx_22050058_MemWritenVaild;
            data_mask       <=  `ysyx_22050058_StoreSelBusNum'b00000000;
        end
	end
    always@(posedge clk)begin
        if(memwdatavaild_o)begin
            pmem_write(data_addr,data_line2,data_mask);
        end
        
    end
endmodule
