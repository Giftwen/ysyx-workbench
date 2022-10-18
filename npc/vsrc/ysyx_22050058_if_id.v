/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-09-26 11:10:43
 * @LastEditTime: 2022-10-17 22:37:32
 * @Description: 
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */
`include "./vsrc/ysyx_22050058_define.v"
module ysyx_22050058_if_id(
    //Interface with Input
    input   wire                                    clk,
    input   wire                                    rst,
    input   wire    [`ysyx_22050058_InstAdderBus]   if_pc_i,
    input   wire    [`ysyx_22050058_InstAdderBus]   if_dnpc_i,
    input   wire    [`ysyx_22050058_InstBus]        if_inst_i,
    //Interface with CtrlBlock
    input   wire    [5:0]                           stall,
    input   wire    [5:0]                           flush,
    //Interface with Output
    output  reg     [`ysyx_22050058_InstAdderBus]   id_pc_o,
    output  reg     [`ysyx_22050058_InstAdderBus]   id_dnpc_o,
    output  reg     [`ysyx_22050058_InstBus]        id_inst_o
);

    always @(posedge clk ) begin
        if (rst == `ysyx_22050058_RstEnable) begin
            id_pc_o     <=  `ysyx_22050058_RstVector;
            id_dnpc_o   <=  `ysyx_22050058_RstVector;
            id_inst_o   <=  `ysyx_22050058_ZeroWord;
        end else if((stall[1] == `ysyx_22050058_StallEnable)
            &&(stall[2] == `ysyx_22050058_StallDisable)) begin
            id_pc_o     <=  `ysyx_22050058_ZeroWord;
            id_dnpc_o   <=  `ysyx_22050058_RstVector;
            id_inst_o   <=  `ysyx_22050058_ZeroWord;
        end else if(flush[1] == `ysyx_22050058_FlushEnable) begin
            id_pc_o     <=  `ysyx_22050058_ZeroWord;
            id_dnpc_o   <=  `ysyx_22050058_RstVector;
            id_inst_o   <=  `ysyx_22050058_ZeroWord;
        end else if (stall[1] == `ysyx_22050058_StallDisable)begin
            id_pc_o     <=  if_pc_i;
            id_dnpc_o   <=  if_dnpc_i;
            id_inst_o   <=  if_inst_i;
        end else begin
            id_pc_o     <=  id_pc_o;
            id_dnpc_o   <=  id_dnpc_o;
            id_inst_o   <=  id_inst_o;
        end
    end

endmodule
