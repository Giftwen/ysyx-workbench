/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-09-26 11:12:41
 * @LastEditTime: 2022-10-14 20:12:34
 * @Description: 
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */
`include "./vsrc/ysyx_22050058_define.v"
 module ysyx_22050058_top(
    input   wire                                    clk,
    input   wire                                    rst
 );


    wire                                 ce;
    wire [`ysyx_22050058_InstAdderBus]   pc;
    wire [`ysyx_22050058_InstAdderBus]   thispc;
    wire [`ysyx_22050058_InstBus]        inst;
    wire                                 dpic_stop;

import "DPI-C" function int checkdpicstop(input reg[63:0] dpic_o);

    always @(*) begin
        checkdpicstop(dpic_stop);
    end

 wire     [5:0]                           stall;
 wire     [5:0]                           flush;
    ysyx_22050058_inst_rom ysyx_22050058_inst_rom(
        .clk                    (clk),
        .rst                    (rst),
        .stall                  (stall),
        .flush                  (flush),
        .ce                     (ce),
        .addr                   (pc),
        .thispc                 (thispc),
        .inst                   (inst)
    );

    ysyx_22050058_pipeline ysyx_22050058_pipeline(
        .clk                    (clk),
        .rst                    (rst),
        .stall                  (stall),
        .flush                  (flush),
        .pipeline_thispc_i      (thispc),
        .pipeline_inst_i        (inst),
        .pipeline_ce_o          (ce),
        .pipeline_pc_o          (pc),
        // Interface with DPI-C
        .pipeline_dpic_stop_o   (dpic_stop)     
    );
endmodule

