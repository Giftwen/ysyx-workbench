/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-10-07 18:15:29
 * @LastEditTime: 2022-10-08 19:15:02
 * @Description: ctrl block for ysyx_22050058
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */
`include "./vsrc/ysyx_22050058_define.v"
 module ysyx_22050058_ctrl (
    input   wire                                        rst,
    input   wire                                        ctrl_stall_idreq_i,
    input   wire                                        ctrl_stall_exreq_i,
    input   wire                                        ctrl_ex_isjump,
    output  reg         [5:0]                           stall,
    output  reg         [5:0]                           flush
 );

    always @(*) begin
        if(rst == `ysyx_22050058_RstEnable)begin
            flush = 6'b000000;
        end else if(ctrl_ex_isjump == `ysyx_22050058_IsJump)begin
            flush = 6'b000111;
        end  else begin
            flush = 6'b000000;
        end
    end

    always @(*) begin
        if(rst == `ysyx_22050058_RstEnable)begin
            stall = 6'b000000;
        end else if(ctrl_stall_idreq_i == `ysyx_22050058_StallEnable)begin
            stall = 6'b000111;
        end else if(ctrl_stall_exreq_i == `ysyx_22050058_StallEnable)begin
            stall = 6'b001111;	
        end else begin
            stall = 6'b000000;
        end
    end

endmodule
