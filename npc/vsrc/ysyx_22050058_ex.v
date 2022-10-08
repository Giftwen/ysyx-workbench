/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-09-26 11:10:02
 * @LastEditTime: 2022-10-08 20:31:47
 * @Description: 
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */
`include "./vsrc/ysyx_22050058_define.v"
module  ysyx_22050058_ex(
    
    //Interface with IDstage
    input   wire    [`ysyx_22050058_InstAdderBus]   ex_pc_i,
    input   wire                                    ex_dpicstop_i,
    input   wire    [`ysyx_22050058_AluOpBus]       ex_aluop_i,
    input   wire    [`ysyx_22050058_AluSelBus]      ex_alusel_i,
    input   wire    [`ysyx_22050058_RegBUS]         ex_op1_wdata_i,
    input   wire    [`ysyx_22050058_RegBUS]         ex_op2_wdata_i,
    input   wire    [`ysyx_22050058_RegBUS]         ex_op3_wdata_i,//branch
    input   wire    [`ysyx_22050058_RegAddrBus]     ex_reg_waddr_i,
    input   wire                                    ex_we_i,
    //Interface with CtrlBlock
    output  reg                                     ex_stall_exreq_o,
    output  reg                                     ex_isjump_o,
    output  reg     [`ysyx_22050058_InstAdderBus]   ex_jumpaddr_o,
    //Interface with MemStage
    output  reg     [`ysyx_22050058_InstAdderBus]   ex_pc_o,
    output  reg                                     ex_dpicstop_o,
    output  reg     [`ysyx_22050058_RegAddrBus]     ex_reg_waddr_o,
    output  reg                                     ex_we_o,
    output  reg     [`ysyx_22050058_RegBUS]         ex_wdata_o
);

    reg     [`ysyx_22050058_RegBUS]       arithmeticres;
    reg     [`ysyx_22050058_RegBUS]       logices;
    reg     [`ysyx_22050058_RegBUS]       ex_wdata_r;

    always @(*) begin
        ex_pc_o             =   ex_pc_i;
        ex_dpicstop_o       =   ex_dpicstop_i;
    end

    always @(*) begin
        arithmeticres           =   `ysyx_22050058_ZeroWord;
        logices                 =   `ysyx_22050058_ZeroWord;
        ex_isjump_o             =   `ysyx_22050058_NoJump;
        ex_jumpaddr_o           =   ex_pc_i;
        ex_stall_exreq_o        =   `ysyx_22050058_StallDisable;
        case (ex_aluop_i) 
            `ysyx_22050058_ALU_ADD_OP : begin
                arithmeticres   =   ex_op1_wdata_i + ex_op2_wdata_i;
            end
            `ysyx_22050058_ALU_SUB_OP :begin
                arithmeticres   =   ex_op1_wdata_i - ex_op2_wdata_i;
            end
            `ysyx_22050058_ALU_AND_OP :begin
                logices           =   ex_op1_wdata_i & ex_op2_wdata_i;
            end
            `ysyx_22050058_ALU_OR_OP :begin
                logices           =   ex_op1_wdata_i | ex_op2_wdata_i;
            end
            `ysyx_22050058_ALU_XOR_OP :begin
                logices           =   ex_op1_wdata_i ^ ex_op2_wdata_i;
            end
            `ysyx_22050058_ALU_COMP_OP :begin
                logices           =   {31'b0,$signed(ex_op1_wdata_i) < $signed(ex_op2_wdata_i)};
            end
            `ysyx_22050058_ALU_COMPU_OP :begin
                logices           =   {31'b0,ex_op1_wdata_i < ex_op2_wdata_i};
            end
            `ysyx_22050058_ALU_SLL_OP :begin
                logices           =   ex_op1_wdata_i << ex_op2_wdata_i;
            end
            `ysyx_22050058_ALU_SRL_OP :begin
                logices           =   ex_op1_wdata_i >> ex_op2_wdata_i;
            end
            `ysyx_22050058_ALU_SRA_OP :begin
                logices           =   $signed(ex_op1_wdata_i) >> ex_op2_wdata_i;
            end
            `ysyx_22050058_ALU_BEQ_OP :begin
                ex_isjump_o           =   ex_op1_wdata_i == ex_op2_wdata_i;
                ex_jumpaddr_o         =   ex_pc_i+ex_op3_wdata_i;
            end
            `ysyx_22050058_ALU_BLT_OP :begin
                ex_isjump_o           =   $signed(ex_op1_wdata_i) < $signed(ex_op2_wdata_i);
                ex_jumpaddr_o         =   ex_pc_i+ex_op3_wdata_i;
            end
            `ysyx_22050058_ALU_BGE_OP :begin
                ex_isjump_o           =   $signed(ex_op1_wdata_i) >= $signed(ex_op2_wdata_i);
                ex_jumpaddr_o         =   ex_pc_i+ex_op3_wdata_i;
            end
            `ysyx_22050058_ALU_BLTU_OP :begin
                ex_isjump_o           =   ex_op1_wdata_i < ex_op2_wdata_i;
                ex_jumpaddr_o         =   ex_pc_i+ex_op3_wdata_i;
            end
            `ysyx_22050058_ALU_BGEU_OP :begin
                ex_isjump_o           =   (ex_op1_wdata_i) >= ex_op2_wdata_i;
                ex_jumpaddr_o         =   ex_pc_i+ex_op3_wdata_i;
            end
            `ysyx_22050058_ALU_JAL_OP :begin
                arithmeticres         =    ex_pc_i+64'd4;
                ex_isjump_o           =   `ysyx_22050058_IsJump;
                ex_jumpaddr_o         =   ex_pc_i+ex_op2_wdata_i;
            end
            `ysyx_22050058_ALU_JALR_OP :begin
                arithmeticres         =    ex_pc_i+64'd4;
                ex_isjump_o           =   `ysyx_22050058_IsJump;
                ex_jumpaddr_o         =   (ex_op1_wdata_i + ex_op2_wdata_i)& 64'b11111111_11111111_11111111_11111111_11111111_11111111_11111111_11111110;
            end
            `ysyx_22050058_ALU_AUIPC_OP :begin
                arithmeticres         =    ex_pc_i+ex_op2_wdata_i;
                
            end
            `ysyx_22050058_ALU_LUI_OP :begin
                arithmeticres         =    ex_op1_wdata_i + ex_op2_wdata_i;
                
            end
            default: begin
            end
        endcase
    end

    always @(*) begin
        ex_we_o             =   ex_we_i;
        ex_reg_waddr_o      =   ex_reg_waddr_i;
        ex_wdata_r          =   `ysyx_22050058_ZeroWord;
        case (ex_alusel_i)
            `ysyx_22050058_ALU_ARITHMETIC_SEL : begin
                ex_wdata_r  =   arithmeticres;
            end
            `ysyx_22050058_ALU_LOGIC_SEL : begin
                ex_wdata_r  =   logices;
            end
            default : begin
            end
        endcase
    end

    always @(*) begin
        if(ex_alusel_i==`ysyx_22050058_ALU_64W_SEL)begin
            ex_wdata_o     =    {32'b0,ex_wdata_r[31:0]};
        end else begin
            ex_wdata_o     =    ex_wdata_r;
        end
    end
endmodule
