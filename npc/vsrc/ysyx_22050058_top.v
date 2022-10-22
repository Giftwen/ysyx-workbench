/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-09-26 11:12:41
 * @LastEditTime: 2022-10-21 02:42:35
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
 wire     [`ysyx_22050058_MemBUS]         memrdata_w;
 wire                                     memrdatavaild_w;
 wire                                     memwdatavaild_w;
 wire                                     memre_w;
 wire     [`ysyx_22050058_StoreSelBus]    memwe_w;
 wire     [`ysyx_22050058_MemAddrBus]     memaddr_w;
 wire     [`ysyx_22050058_MemBUS]         memwdata_o;

    ysyx_22050058_inst_rom ysyx_22050058_inst_rom_u0(
        .clk                    (clk),
        .rst                    (rst),
        .stall                  (stall),
        .flush                  (flush),
        .ce                     (ce),
        .addr                   (pc),
        .thispc                 (thispc),
        .inst                   (inst)
    );

    ysyx_22050058_data_rom ysyx_22050058_data_rom_u0(
        .clk                    (clk),
        .rst                    (rst),
        .ce                     (ce),
        //Interface with MemBlock
        .memre_i                (memre_w),
        .memwe_i                (memwe_w),
        .memaddr_i              (memaddr_w),
        .memwdata_i             (memwdata_o), 
        .memrdata_o             (memrdata_w),
        .memrdatavaild_o        (memrdatavaild_w),
        .memwdatavaild_o        (memwdatavaild_w)
     );

    ysyx_22050058_pipeline ysyx_22050058_pipeline_u0(
        .clk                    (clk),
        .rst                    (rst),
        .stall                  (stall),
        .flush                  (flush),
        .pipeline_thispc_i      (thispc),
        .pipeline_inst_i        (inst),
        .pipeline_ce_o          (ce),
        .pipeline_pc_o          (pc),
        //Interface with DataMem
        .pipeline_memrdata_i     (memrdata_w),
        .pipeline_memrdatavaild_i(memrdatavaild_w),
        .pipeline_memwdatavaild_i(memwdatavaild_w),
        .pipeline_memre_o        (memre_w),
        .pipeline_memwe_o        (memwe_w),
        .pipeline_memaddr_o      (memaddr_w),
        .pipeline_memwdata_o     (memwdata_o),
        // Interface with DPI-C
        .pipeline_dpic_stop_o   (dpic_stop)     
    );

endmodule

