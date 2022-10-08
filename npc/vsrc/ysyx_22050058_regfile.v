/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-09-26 11:12:53
 * @LastEditTime: 2022-10-05 18:27:25
 * @Description: 
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */
`include "./vsrc/ysyx_22050058_define.v"
module ysyx_22050058_regfile (
    //Interface with Input
    input   wire                                    clk,
    input   wire                                    rst,

    // Interface for write port
    input   wire                                    we_i,
    input   wire    [`ysyx_22050058_RegAddrBus]     waddr_i,
    input   wire    [`ysyx_22050058_RegBUS]         wdata_i,
    // Interface for read port1
    input   wire                                    re1_i,
    input   wire    [`ysyx_22050058_RegAddrBus]     raddr1_i,
    output  reg     [`ysyx_22050058_RegBUS]         rdata1_o,
    // Interface for read port2
    input   wire                                    re2_i,
    input   wire    [`ysyx_22050058_RegAddrBus]     raddr2_i,
    output  reg     [`ysyx_22050058_RegBUS]         rdata2_o

);

import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
initial set_gpr_ptr(gprs);  // rf为通用寄存器的二维数组变量

// Initaltize 32 regfiles
    reg     [`ysyx_22050058_RegBUS] gprs [`ysyx_22050058_RegNum -1 : 0];

// Wirte port 1
    always @(posedge clk ) begin
        if (rst == `ysyx_22050058_RstDisable) begin
            if ((we_i == `ysyx_22050058_WriteEnable)&&(waddr_i != `ysyx_22050058_RegNumLog2'b0)) begin
                gprs[waddr_i] <=  wdata_i;
           end

        end
    end
// Read port 1
    always @(*) begin
        if (rst == `ysyx_22050058_RstEnable) begin
            rdata1_o    =  `ysyx_22050058_ZeroWord;
        end else if (raddr1_i == `ysyx_22050058_RegNumLog2'b0) begin
            rdata1_o    =  `ysyx_22050058_ZeroWord;
        end else if ((raddr1_i == waddr_i ) && (we_i == `ysyx_22050058_WriteEnable) //fix data harzard
                    && (re1_i == `ysyx_22050058_ReadEnable) ) begin
            rdata1_o    =  wdata_i;                
        end else if (re1_i == `ysyx_22050058_ReadEnable) begin
            rdata1_o    =  gprs[raddr1_i];
        end else begin
            rdata1_o    =  `ysyx_22050058_ZeroWord;
        end
        
    end

// Read port 2
    always @(*) begin
        if (rst == `ysyx_22050058_RstEnable) begin
            rdata2_o    =  `ysyx_22050058_ZeroWord;
        end else if (raddr2_i == `ysyx_22050058_RegNumLog2'b0) begin
            rdata2_o    =  `ysyx_22050058_ZeroWord;
        end else if ((raddr2_i == waddr_i ) && (we_i == `ysyx_22050058_WriteEnable) //fix data harzard
                    && (re2_i == `ysyx_22050058_ReadEnable) ) begin
            rdata2_o    =  wdata_i;                
        end else if (re2_i == `ysyx_22050058_ReadEnable) begin
            rdata2_o    =  gprs[raddr2_i];
        end else begin
            rdata2_o    =  `ysyx_22050058_ZeroWord;
        end
        
    end

endmodule
