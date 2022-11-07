/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-09-27 00:11:49
 * @LastEditTime: 2022-11-04 23:01:09
 * @Description: 
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */
`include "./vsrc/ysyx_22050058_define.v"
 module ysyx_22050058_pipeline(
    input   wire                                    clk,
    input   wire                                    rst,
    input   wire    [`ysyx_22050058_InstAdderBus]   pipeline_thispc_i,
    input   wire    [`ysyx_22050058_InstBus]        pipeline_inst_i,
    output  reg                                     pipeline_ce_o,
    output  reg     [`ysyx_22050058_InstAdderBus]   pipeline_pc_o,
    
    //Interface with DataMem
    input   wire    [`ysyx_22050058_MemBUS]         pipeline_memrdata_i,
    input   wire                                    pipeline_memrdatavaild_i,
    input   wire                                    pipeline_memwdatavaild_i,
    output  reg                                     pipeline_memre_o,
    output  reg     [`ysyx_22050058_StoreSelBus]    pipeline_memwe_o,
    output  reg     [`ysyx_22050058_MemAddrBus]     pipeline_memaddr_o,
    output  reg     [`ysyx_22050058_MemBUS]         pipeline_memwdata_o,
    
    //Interface with CtrlBlock
    output   wire    [5:0]                           stall,
    output   wire    [5:0]                           flush,

    // Interface with DPI-C
    output  reg                                     pipeline_dpic_stop_o

 );
    //Interface with ControlBlock
    // wire     [5:0]                           stall;
    // wire     [5:0]                           flush;
    wire                                     stall_exreq_w;
    wire                                     stall_idreq_w;
    wire                                     isjump_w;
    wire     [`ysyx_22050058_InstAdderBus]   jumpaddr_w;
    //Interface with IFstage
    reg      [`ysyx_22050058_InstBus]        id_inst_r;
    reg      [`ysyx_22050058_InstAdderBus]   id_pc_r;
    reg      [`ysyx_22050058_InstAdderBus]   id_dnpc_r;
    //Interface with Regfile
    reg      [`ysyx_22050058_RegBUS]         id_reg1_rdata_r;
    reg      [`ysyx_22050058_RegBUS]         id_reg2_rdata_r;
    wire                                     id_reg1_re_w;
    wire                                     id_reg2_re_w;
    wire     [`ysyx_22050058_RegAddrBus]     id_reg1_raddr_w;
    wire     [`ysyx_22050058_RegAddrBus]     id_reg2_raddr_w;

    //Interface with EXstage
    wire     [`ysyx_22050058_InstAdderBus]   id_pc_w;
    wire     [`ysyx_22050058_InstAdderBus]   id_dnpc_w;
    wire                                     id_dpicstop_w;
    wire     [`ysyx_22050058_AluOpBus]       id_aluop_w;
    wire     [`ysyx_22050058_AluSelBus]      id_alusel_w;
    wire     [`ysyx_22050058_RegBUS]         id_op1_wdata_w;
    wire     [`ysyx_22050058_RegBUS]         id_op2_wdata_w;
    wire     [`ysyx_22050058_RegBUS]         id_op3_wdata_w;
    wire     [`ysyx_22050058_RegAddrBus]     id_reg_waddr_w;
    wire                                     id_we_w;
    wire                                     id_instvalid_w;
    

    //Interface with IDstage
    reg    [`ysyx_22050058_InstAdderBus]   ex_pc_r;
    reg    [`ysyx_22050058_InstAdderBus]   ex_dnpc_r;
    reg                                    ex_dpicstop_r;
    reg    [`ysyx_22050058_AluOpBus]       ex_aluop_r;
    reg    [`ysyx_22050058_AluSelBus]      ex_alusel_r;
    reg    [`ysyx_22050058_RegBUS]         ex_op1_wdata_r;
    reg    [`ysyx_22050058_RegBUS]         ex_op2_wdata_r;
    reg    [`ysyx_22050058_RegBUS]         ex_op3_wdata_r;
    reg    [`ysyx_22050058_RegAddrBus]     ex_reg_waddr_r;
    reg                                    ex_we_r;
    reg                                    ex_instvalid_r;
    
    //Interface with MemStage
    wire   [`ysyx_22050058_AluOpBus]       ex_aluop_w;
    wire   [`ysyx_22050058_InstAdderBus]   ex_pc_w;
    wire   [`ysyx_22050058_InstAdderBus]   ex_dnpc_w;
    wire                                   ex_dpicstop_w;
    wire                                   ex_instvalid_w;
    wire   [`ysyx_22050058_AluOpBus]       ex_aluop_o_w;
    wire   [`ysyx_22050058_RegAddrBus]     ex_reg_waddr_w;
    wire                                   ex_we_w;
    wire   [`ysyx_22050058_RegBUS]         ex_wdata_w;

    //Interface with EXStage
    reg    [`ysyx_22050058_InstAdderBus]   mem_pc_r;
    reg    [`ysyx_22050058_InstAdderBus]   mem_dnpc_r;
    reg                                    mem_dpicstop_r;
    reg     [`ysyx_22050058_AluOpBus]      mem_aluop_r;
    reg                                    mem_instvalid_r;
    reg     [`ysyx_22050058_RegAddrBus]    mem_reg_waddr_r;
    reg                                    mem_we_r;
    reg     [`ysyx_22050058_RegBUS]        mem_wdata_r;

    //Interface with WBStage
    wire                                    mem_stall_memreq_w;
    wire     [`ysyx_22050058_InstAdderBus]  mem_pc_w;
    wire     [`ysyx_22050058_InstAdderBus]  mem_dnpc_w;
    wire                                    mem_dpicstop_w;
    wire                                    mem_instvalid_w;
    wire     [`ysyx_22050058_RegAddrBus]    mem_reg_waddr_w;
    wire                                    mem_we_w;
    wire     [`ysyx_22050058_RegBUS]        mem_wdata_w;

    //Interface with MEMStage
    reg     [`ysyx_22050058_InstAdderBus]  wb_pc_r;
    reg     [`ysyx_22050058_InstAdderBus]  wb_dnpc_r;
    reg                                    wb_dpicstop_r;
    reg                                    wb_instvalid_r;
    reg     [`ysyx_22050058_RegAddrBus]    wb_reg_waddr_r;
    reg                                    wb_we_r;
    reg     [`ysyx_22050058_RegBUS]        wb_wdata_r;

//********************************************************************//

//******************************DPIC******************************//
import "DPI-C" function int checkdpicpc(input longint dpic_o);
import "DPI-C" function int checkdpicdnpc(input longint dpic_o);
import "DPI-C" function int checkdpicmempc(input longint dpic_o);
import "DPI-C" function int bypassregfilewe(input reg[63:0] dpic_o);
import "DPI-C" function int bypassregfiledata(input longint  dpic_o);
import "DPI-C" function int bypassregfileaddr(input longint dpic_o);    
import "DPI-C" function int checkdpicinstvaild(input reg[63:0] dpic_o); 
    always @(*) begin
        checkdpicpc(wb_pc_r);
        checkdpicdnpc(wb_dnpc_r);
        bypassregfilewe(wb_we_r);
        bypassregfileaddr(wb_reg_waddr_r);
        checkdpicmempc(mem_pc_r);
        bypassregfiledata(wb_wdata_r);
        //$display("%x",wb_wdata_r);
        checkdpicinstvaild(wb_instvalid_r);
        
    end

    always @(*) begin
        pipeline_dpic_stop_o    = wb_dpicstop_r;
    end


//******************************Pipeline******************************//


    ysyx_22050058_pc_reg    ysyx_22050058_pc_reg_u0(
        //Interface with Input
        .clk             (clk),
        .rst             (rst),
        //Interface with ExBlock
        .isjump          (isjump_w),
        .jumpaddr        (jumpaddr_w),
        //Interface with CtrlBlock
        .stall          (stall),
        //Interface with IFstage
        .pc             (pipeline_pc_o),
        .ce             (pipeline_ce_o)
    );

    ysyx_22050058_ctrl  ysyx_22050058_ctrl_u0(
    .rst                (rst),
    .ctrl_stall_exreq_i (stall_exreq_w),
    .ctrl_stall_idreq_i (stall_idreq_w),
    .ctrl_stall_memreq_i(mem_stall_memreq_w),
    .ctrl_ex_isjump     (isjump_w),
    .stall              (stall),
    .flush              (flush)
    );


//*********************IF_ID*********************//
        always @(posedge clk ) begin
        if (rst == `ysyx_22050058_RstEnable) begin
            id_pc_r     <=  `ysyx_22050058_RstVector;
            id_dnpc_r   <=  `ysyx_22050058_RstVector;
            id_inst_r   <=  `ysyx_22050058_ZeroWord;
        end else if((stall[1] == `ysyx_22050058_StallEnable)
            &&(stall[2] == `ysyx_22050058_StallDisable)) begin
            id_pc_r     <=  `ysyx_22050058_ZeroWord;
            id_dnpc_r   <=  `ysyx_22050058_ZeroWord;
            id_inst_r   <=  `ysyx_22050058_ZeroWord;
        end else if((stall[1] == `ysyx_22050058_StallEnable)
            &&(stall[2] == `ysyx_22050058_StallEnable)) begin
            id_pc_r     <=  id_pc_r;
            id_dnpc_r   <=  id_dnpc_r;
            id_inst_r   <=  id_inst_r;
        end else if(flush[1] == `ysyx_22050058_FlushEnable) begin
            id_pc_r     <=  `ysyx_22050058_ZeroWord;
            id_dnpc_r   <=  `ysyx_22050058_ZeroWord;
            id_inst_r   <=  `ysyx_22050058_ZeroWord;
        end else if (stall[1] == `ysyx_22050058_StallDisable)begin
            id_pc_r     <=  pipeline_thispc_i;
            id_dnpc_r   <=  pipeline_pc_o;
            id_inst_r   <=  pipeline_inst_i;
        end else begin
            id_pc_r     <=  id_pc_r;
            id_dnpc_r   <=  id_dnpc_r;
            id_inst_r   <=  id_inst_r;
        end
    end


    
    ysyx_22050058_regfile  ysyx_22050058_regfile(
        //Interface with Input
        .clk        (clk),
        .rst        (rst),
        // Interface with WBstage
        .we_i       (wb_we_r),
        .waddr_i    (wb_reg_waddr_r),
        .wdata_i    (wb_wdata_r),
        // Interface with ID
        .re1_i      (id_reg1_re_w),
        .raddr1_i   (id_reg1_raddr_w),
        .rdata1_o   (id_reg1_rdata_r),
        .re2_i      (id_reg2_re_w),
        .raddr2_i   (id_reg2_raddr_w),
        .rdata2_o   (id_reg2_rdata_r) 
    );

    ysyx_22050058_id        ysyx_22050058_id_u0(
        //Interface with IFstage
        .id_pc_i            (id_pc_r),
        .id_dnpc_i          (id_dnpc_r),
        .id_inst_i          (id_inst_r),
        //Interface with Regfile
        .id_reg1_rdata_i    (id_reg1_rdata_r),
        .id_reg2_rdata_i    (id_reg2_rdata_r),
        .id_reg1_re_o       (id_reg1_re_w),
        .id_reg2_re_o       (id_reg2_re_w),
        .id_reg1_raddr_o    (id_reg1_raddr_w),
        .id_reg2_raddr_o    (id_reg2_raddr_w),
        //Interface with CtrlBlock
        .id_stall_idreq_o   (stall_idreq_w),
        //Interface with EXstage    
        .id_pc_o            (id_pc_w),
        .id_dnpc_o          (id_dnpc_w),
        .id_dpicstop_o      (id_dpicstop_w),
        .id_aluop_o         (id_aluop_w),
        .id_alusel_o        (id_alusel_w),
        .id_op1_wdata_o     (id_op1_wdata_w),
        .id_op2_wdata_o     (id_op2_wdata_w),
        .id_op3_wdata_o     (id_op3_wdata_w),
        .id_reg_waddr_o     (id_reg_waddr_w),
        .id_we_o            (id_we_w),
        .id_instvalid_o     (id_instvalid_w),
        .id_ex_alusel_i     (ex_alusel_r),
        .id_ex_reg_waddr_i  (ex_reg_waddr_w),//fix data harzard
        .id_ex_wdata_i      (ex_wdata_w),//fix data harzard
        .id_ex_we_i         (ex_we_w),//fix data harzard
        //Interface with Memstage
        .id_mem_reg_waddr_i (mem_reg_waddr_w),//fix data harzard
        .id_mem_wdata_i     (mem_wdata_w),//fix data harzard
        .id_mem_we_i        (mem_we_w)//fix data harzard
    );


//*********************ID_EX*********************//

    always @(posedge clk ) begin
        if (rst ==  `ysyx_22050058_RstEnable)begin  
            ex_pc_r                  <=  `ysyx_22050058_ZeroWord;
            ex_dnpc_r                <=  `ysyx_22050058_ZeroWord;
            ex_dpicstop_r            <=  `ysyx_22050058_DPICNOSTOP;
            ex_aluop_r               <=  `ysyx_22050058_ALU_NOP_OP;
            ex_alusel_r              <=  `ysyx_22050058_ALU_NOP_SEL;
            ex_op1_wdata_r           <=  `ysyx_22050058_ZeroWord;
            ex_op2_wdata_r           <=  `ysyx_22050058_ZeroWord;
            ex_op3_wdata_r           <=  `ysyx_22050058_ZeroWord;
            ex_reg_waddr_r           <=  `ysyx_22050058_NOP_REG_Addr;
            ex_we_r                  <=  `ysyx_22050058_WriteDisable;
            ex_instvalid_r           <=  `ysyx_22050058_InstnVaild;
        end else if(stall[2]==`ysyx_22050058_StallEnable
                &&stall[3]==`ysyx_22050058_StallDisable)begin

            ex_pc_r                  <=  `ysyx_22050058_ZeroWord;
            ex_dnpc_r                <=  `ysyx_22050058_ZeroWord;
            ex_dpicstop_r            <=  `ysyx_22050058_DPICNOSTOP;
            ex_aluop_r               <=  `ysyx_22050058_ALU_NOP_OP;
            ex_alusel_r              <=  `ysyx_22050058_ALU_NOP_SEL;
            ex_op1_wdata_r           <=  `ysyx_22050058_ZeroWord;
            ex_op2_wdata_r           <=  `ysyx_22050058_ZeroWord;
            ex_op3_wdata_r           <=  `ysyx_22050058_ZeroWord;
            ex_reg_waddr_r           <=  `ysyx_22050058_NOP_REG_Addr;
            ex_we_r                  <=  `ysyx_22050058_WriteDisable;
            ex_instvalid_r           <=  `ysyx_22050058_InstnVaild;
        end else if(stall[2]==`ysyx_22050058_StallEnable
                &&stall[3]==`ysyx_22050058_StallEnable)begin

            ex_pc_r                  <=  ex_pc_r;
            ex_dnpc_r                <=  ex_dnpc_r;
            ex_dpicstop_r            <=  ex_dpicstop_r;
            ex_aluop_r               <=  ex_aluop_r;
            ex_alusel_r              <=  ex_alusel_r;
            ex_op1_wdata_r           <=  ex_op1_wdata_r;
            ex_op2_wdata_r           <=  ex_op2_wdata_r;
            ex_op3_wdata_r           <=  ex_op3_wdata_r;
            ex_reg_waddr_r           <=  ex_reg_waddr_r;
            ex_we_r                  <=  ex_we_r;
            ex_instvalid_r           <=  ex_instvalid_r;
        
        end else if(flush[2]==`ysyx_22050058_FlushEnable)begin

            ex_pc_r                  <=  `ysyx_22050058_ZeroWord;
            ex_dnpc_r                <=  `ysyx_22050058_ZeroWord;
            ex_dpicstop_r            <=  `ysyx_22050058_DPICNOSTOP;
            ex_aluop_r               <=  `ysyx_22050058_ALU_NOP_OP;
            ex_alusel_r              <=  `ysyx_22050058_ALU_NOP_SEL;
            ex_op1_wdata_r           <=  `ysyx_22050058_ZeroWord;
            ex_op2_wdata_r           <=  `ysyx_22050058_ZeroWord;
            ex_op3_wdata_r           <=  `ysyx_22050058_ZeroWord;
            ex_reg_waddr_r           <=  `ysyx_22050058_NOP_REG_Addr;
            ex_we_r                  <=  `ysyx_22050058_WriteDisable;
            ex_instvalid_r           <=  `ysyx_22050058_InstnVaild;
        
        end else if (stall[2]==`ysyx_22050058_StallDisable)begin

            ex_pc_r                  <=  id_pc_w;
            ex_dnpc_r                <=  id_dnpc_w;
            ex_dpicstop_r            <=  id_dpicstop_w; 
            ex_aluop_r               <=  id_aluop_w;
            ex_alusel_r              <=  id_alusel_w;
            ex_op1_wdata_r           <=  id_op1_wdata_w;
            ex_op2_wdata_r           <=  id_op2_wdata_w;
            ex_op3_wdata_r           <=  id_op3_wdata_w;
            ex_reg_waddr_r           <=  id_reg_waddr_w;
            ex_we_r                  <=  id_we_w;
            ex_instvalid_r           <=  id_instvalid_w;
        end
    end

    

    ysyx_22050058_ex ysyx_22050058_ex_u0(
    //Interface with IDstage
    .clk                (clk),
    .rst                (rst),
    .ex_pc_i            (ex_pc_r),
    .ex_dnpc_i          (ex_dnpc_r),
    .ex_dpicstop_i      (ex_dpicstop_r),
    .ex_instvalid_i     (ex_instvalid_r),
    .ex_aluop_i         (ex_aluop_r),
    .ex_alusel_i        (ex_alusel_r),
    .ex_op1_wdata_i     (ex_op1_wdata_r),
    .ex_op2_wdata_i     (ex_op2_wdata_r),
    .ex_op3_wdata_i     (ex_op3_wdata_r),
    .ex_reg_waddr_i     (ex_reg_waddr_r),
    .ex_we_i            (ex_we_r),
    //Interface with CtrlBlock and PCreg
    .stall              (stall),
    .ex_stall_exreq_o   (stall_exreq_w),
    .ex_isjump_o        (isjump_w),
    .ex_jumpaddr_o      (jumpaddr_w),
    //Interface with MemStage
    .ex_pc_o            (ex_pc_w),
    .ex_dnpc_o          (ex_dnpc_w),
    .ex_dpicstop_o      (ex_dpicstop_w),
    .ex_aluop_o         (ex_aluop_w),
    .ex_instvalid_o     (ex_instvalid_w),
    .ex_reg_waddr_o     (ex_reg_waddr_w),
    .ex_we_o            (ex_we_w),
    .ex_wdata_o         (ex_wdata_w)
    );


    
//*********************EX_MEM*********************//

    always @(posedge clk ) begin
        if (rst == `ysyx_22050058_RstEnable) begin
            mem_pc_r                  <=   `ysyx_22050058_ZeroWord;
            mem_dnpc_r                <=   `ysyx_22050058_ZeroWord;
            mem_dnpc_r                <=   `ysyx_22050058_RstVector;
            mem_instvalid_r           <=   `ysyx_22050058_InstnVaild;
            mem_dpicstop_r            <=   `ysyx_22050058_DPICNOSTOP;
            mem_aluop_r               <=   `ysyx_22050058_ALU_NOP_OP;
            mem_reg_waddr_r           <=   `ysyx_22050058_NOP_REG_Addr;
            mem_we_r                  <=   `ysyx_22050058_WriteDisable;
            mem_wdata_r               <=   `ysyx_22050058_ZeroWord;
        end else if(stall[3]  == `ysyx_22050058_StallEnable &&
                    stall[4] == `ysyx_22050058_StallDisable )begin
            mem_pc_r                  <=   `ysyx_22050058_ZeroWord;
            mem_dnpc_r                <=   `ysyx_22050058_ZeroWord;
            mem_instvalid_r           <=   `ysyx_22050058_InstnVaild;
            mem_dpicstop_r            <=   `ysyx_22050058_DPICNOSTOP;
            mem_aluop_r               <=   `ysyx_22050058_ALU_NOP_OP;
            mem_reg_waddr_r           <=   `ysyx_22050058_NOP_REG_Addr;
            mem_we_r                  <=   `ysyx_22050058_WriteDisable;
            mem_wdata_r               <=   `ysyx_22050058_ZeroWord;
        end else if(stall[3]  == `ysyx_22050058_StallEnable &&
                    stall[4] == `ysyx_22050058_StallEnable )begin
            mem_pc_r                  <=   mem_pc_r;
            mem_dnpc_r                <=   mem_dnpc_r;
            mem_instvalid_r           <=   mem_instvalid_r;
            mem_dpicstop_r            <=   mem_dpicstop_r;
            mem_aluop_r               <=   mem_aluop_r;
            mem_reg_waddr_r           <=   mem_reg_waddr_r;
            mem_we_r                  <=   mem_we_r;
            mem_wdata_r               <=   mem_wdata_r;

        end else if (stall[3]  == `ysyx_22050058_StallDisable)begin
            mem_pc_r                  <=   ex_pc_w; 
            mem_dnpc_r                <=   ex_dnpc_w;
            mem_dpicstop_r            <=   ex_dpicstop_w;
            mem_aluop_r               <=   ex_aluop_w;
            mem_instvalid_r           <=   ex_instvalid_w;
            mem_reg_waddr_r           <=   ex_reg_waddr_w;
            mem_we_r                  <=   ex_we_w;
            mem_wdata_r               <=   ex_wdata_w;
        end
    end

    

    ysyx_22050058_mem ysyx_22050058_mem (
    //Interface with EXStage
    .mem_pc_i               (mem_pc_r),
    .mem_dnpc_i             (mem_dnpc_r),
    .mem_dpicstop_i         (mem_dpicstop_r),
    .mem_instvalid_i        (mem_instvalid_r),
    .mem_aluop_i            (mem_aluop_r),
    .mem_reg_waddr_i        (mem_reg_waddr_r),
    .mem_we_i               (mem_we_r),
    .mem_wdata_i            (mem_wdata_r),
    //Interface with CtrlBlock
    .mem_stall_memreq_o(mem_stall_memreq_w),
    //Interface with DataMem
    .mem_memrdata_i         (pipeline_memrdata_i),
    .mem_memrdatavaild_i    (pipeline_memrdatavaild_i),
    .mem_memwdatavaild_i    (pipeline_memwdatavaild_i),
    .mem_memre_o            (pipeline_memre_o),
    .mem_memwe_o            (pipeline_memwe_o),
    .mem_memaddr_o          (pipeline_memaddr_o),
    .mem_memwdata_o         (pipeline_memwdata_o),
    //Interface with WBStage
    .mem_pc_o               (mem_pc_w),
    .mem_dnpc_o             (mem_dnpc_w),
    .mem_dpicstop_o         (mem_dpicstop_w),
    .mem_instvalid_o        (mem_instvalid_w),
    .mem_reg_waddr_o        (mem_reg_waddr_w),
    .mem_we_o               (mem_we_w),
    .mem_wdata_o            (mem_wdata_w)
    );

    //*********************MEM_WB*********************//

    always @(posedge clk ) begin
        if (rst == `ysyx_22050058_RstEnable) begin
            wb_pc_r             <=  `ysyx_22050058_ZeroWord;
            wb_dnpc_r           <=  `ysyx_22050058_ZeroWord;
            wb_dpicstop_r       <=  `ysyx_22050058_DPICNOSTOP;
            wb_instvalid_r      <=  `ysyx_22050058_InstnVaild;
            wb_reg_waddr_r      <=  `ysyx_22050058_NOP_REG_Addr;
            wb_we_r             <=  `ysyx_22050058_WriteDisable;
            wb_wdata_r          <=  `ysyx_22050058_ZeroWord;
        end else if(stall[4]  == `ysyx_22050058_StallEnable &&
                    stall[5] == `ysyx_22050058_StallDisable )begin
            wb_pc_r             <=  `ysyx_22050058_ZeroWord;
            wb_dnpc_r           <=  `ysyx_22050058_ZeroWord;
            wb_dpicstop_r       <=  `ysyx_22050058_DPICNOSTOP;
            wb_instvalid_r      <=  `ysyx_22050058_InstnVaild;
            wb_reg_waddr_r      <=  `ysyx_22050058_NOP_REG_Addr;
            wb_we_r             <=  `ysyx_22050058_WriteDisable;
            wb_wdata_r          <=  `ysyx_22050058_ZeroWord;
        end else if (stall[4]  == `ysyx_22050058_StallDisable)begin
            wb_pc_r             <=  mem_pc_w;
            wb_dnpc_r           <=  mem_dnpc_w;
            wb_dpicstop_r       <=  mem_dpicstop_w;
            wb_instvalid_r      <=  mem_instvalid_w;
            wb_reg_waddr_r      <=  mem_reg_waddr_w;
            wb_we_r             <=  mem_we_w;
            wb_wdata_r          <=  mem_wdata_w;
        end
        
    end

//************************************************************//

endmodule
