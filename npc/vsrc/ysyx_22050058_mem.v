/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-09-26 11:10:28
 * @LastEditTime: 2022-10-06 12:30:11
 * @Description: 
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */
`include "./vsrc/ysyx_22050058_define.v"
 module ysyx_22050058_mem (
    //Interface with EXStage
    input   wire     [`ysyx_22050058_InstAdderBus]  mem_pc_i,
    input   wire                                    mem_dpicstop_i,
    input   wire     [`ysyx_22050058_RegAddrBus]    mem_reg_waddr_i,
    input   wire                                    mem_we_i,
    input   wire     [`ysyx_22050058_RegBUS]        mem_wdata_i,

    //Interface with WBStage
    output  reg      [`ysyx_22050058_InstAdderBus]  mem_pc_o,
    output  reg                                     mem_dpicstop_o,
    output  reg      [`ysyx_22050058_RegAddrBus]    mem_reg_waddr_o,
    output  reg                                     mem_we_o,
    output  reg      [`ysyx_22050058_RegBUS]        mem_wdata_o
 );
    always @(*) begin
        mem_pc_o            =       mem_pc_i;
        mem_dpicstop_o      =       mem_dpicstop_i;
    end

    always @(*) begin
        mem_reg_waddr_o     =       mem_reg_waddr_i;
        mem_we_o            =       mem_we_i;
        mem_wdata_o         =       mem_wdata_i;
    end

endmodule
