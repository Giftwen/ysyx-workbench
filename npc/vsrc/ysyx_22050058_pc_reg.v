/*
 * @Author: ysyx_22050058_wenjiabao
 * @Date: 2022-09-26 11:11:41
 * @LastEditTime: 2022-10-08 19:16:48
 * @Description: pc_reg
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */
`include "./vsrc/ysyx_22050058_define.v"
module ysyx_22050058_pc_reg(
    //Interface with Input
    input   wire                                      clk,
    input   wire                                      rst,
    //Interface with ExBlock
    input   wire                                      isjump,
    input   wire    [`ysyx_22050058_InstAdderBus]     jumpaddr,
    //Interface with CtrlBlock
    input   wire    [5:0]                             stall,
    //Interface with Output
    output  reg     [`ysyx_22050058_InstAdderBus]     pc,
    output  reg                                       ce
);

    always @(posedge clk ) begin
        if (rst == `ysyx_22050058_RstEnable) begin
            ce  <=  `ysyx_22050058_ChipDisable;
        end else begin
            ce  <=  `ysyx_22050058_ChipEnable; 
        end
        
    end

    always @(posedge clk ) begin
        if (ce== `ysyx_22050058_ChipDisable) begin
            pc  <=  pc;
        end else if (stall[0] == `ysyx_22050058_StallEnable)begin
            pc  <=  pc;
        end else begin
            if(isjump==`ysyx_22050058_IsJump)begin
                pc  <=  jumpaddr;
            end else begin
                pc  <=  pc + `ysyx_22050058_RegBUSNum'h4;
            end
        end
    end
    

endmodule
