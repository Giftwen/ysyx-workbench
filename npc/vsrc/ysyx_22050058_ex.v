/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-09-26 11:10:02
 * @LastEditTime: 2022-10-29 22:29:09
 * @Description: 
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */
`include "./vsrc/ysyx_22050058_define.v"
module  ysyx_22050058_ex(
    
    //Interface with IDstage
    input   wire                                    clk,
    input   wire                                    rst,
    input   wire    [`ysyx_22050058_InstAdderBus]   ex_pc_i,
    input   wire    [`ysyx_22050058_InstAdderBus]   ex_dnpc_i,
    input   wire                                    ex_dpicstop_i,
    input   wire                                    ex_instvalid_i,
    input   wire    [`ysyx_22050058_AluOpBus]       ex_aluop_i,
    input   wire    [`ysyx_22050058_AluSelBus]      ex_alusel_i,
    input   wire    [`ysyx_22050058_RegBUS]         ex_op1_wdata_i,
    input   wire    [`ysyx_22050058_RegBUS]         ex_op2_wdata_i,
    input   wire    [`ysyx_22050058_RegBUS]         ex_op3_wdata_i,//branch
    input   wire    [`ysyx_22050058_RegAddrBus]     ex_reg_waddr_i,
    input   wire                                    ex_we_i,
    //Interface with CtrlBlock
    input   wire    [5:0]                           stall,
    output  reg                                     ex_stall_exreq_o,
    output  reg                                     ex_isjump_o,
    output  reg     [`ysyx_22050058_InstAdderBus]   ex_jumpaddr_o,
    //Interface with MemStage
    output  reg     [`ysyx_22050058_InstAdderBus]   ex_pc_o,
    output  reg     [`ysyx_22050058_InstAdderBus]   ex_dnpc_o,
    output  reg                                     ex_dpicstop_o,
    output  reg     [`ysyx_22050058_AluOpBus]       ex_aluop_o,
    output  reg                                     ex_instvalid_o,
    output  reg     [`ysyx_22050058_RegAddrBus]     ex_reg_waddr_o,
    output  reg                                     ex_we_o,
    output  reg     [`ysyx_22050058_RegBUS]         ex_wdata_o
);

    reg     [`ysyx_22050058_RegBUS]       arithmeticres;
    reg     [`ysyx_22050058_RegBUS]       logices;
    reg     [`ysyx_22050058_RegBUS]       memaddr;
    reg     [`ysyx_22050058_RegBUS]       ex_wdata_r;

    always @(*) begin
        ex_pc_o             =   ex_pc_i;
        ex_dpicstop_o       =   ex_dpicstop_i;
        ex_instvalid_o      =   ex_instvalid_i;
        ex_aluop_o          =   ex_aluop_i;
        if(ex_isjump_o)begin
            ex_dnpc_o       =   ex_jumpaddr_o;
        end else begin
            ex_dnpc_o       =   ex_dnpc_i;
        end
        
    end
    reg [63:0] ex_op1_mul_r,ex_op1_divrem_r,ex_op2_mul_r,ex_op2_divrem_r;
    wire [127:0] arithmeticres_mul_w;
    assign arithmeticres_mul_w      = ex_op1_mul_r*ex_op2_mul_r;
    wire [63:0] arithmeticres_div_w;
    wire [63:0] arithmeticres_rem_w;
 
    
    wire ex_div_valid_w; 
    reg ex_is_divrem_r; 
    reg ex_div_doing_r;
    reg ex_div_qrvalid_r;
    assign ex_div_valid_w   =   ex_is_divrem_r && !ex_div_doing_r && !ex_div_qrvalid_r;
    assign ex_stall_exreq_o =   ex_is_divrem_r && !ex_div_qrvalid_r ;

ysyx_22050058_div #(.WIDTH(64)) ysyx_22050058_div_u0(
	.clk                    (clk),
	.rst                    (rst),
    .div_ready              (!stall[3]),
	.div_datavalid_i        (ex_div_valid_w),
	.div_dividend_i         (ex_op1_divrem_r),
	.div_divisor_i          (ex_op2_divrem_r),
    .div_doing_o            (ex_div_doing_r),
	.div_qrvalid_o          (ex_div_qrvalid_r),
	.div_quotient_o         (arithmeticres_div_w),
	.div_remainder_o        (arithmeticres_rem_w)
);


    always @(*) begin
        arithmeticres           =   `ysyx_22050058_ZeroWord;
        logices                 =   `ysyx_22050058_ZeroWord;
        memaddr                 =   `ysyx_22050058_ZeroWord;
        ex_isjump_o             =   `ysyx_22050058_NoJump;
        ex_is_divrem_r          =   0;
        ex_jumpaddr_o           =   ex_pc_i;
        ex_stall_exreq_o        =   `ysyx_22050058_StallDisable;
        ex_op1_mul_r            =   `ysyx_22050058_ZeroWord;
        ex_op2_mul_r            =   `ysyx_22050058_ZeroWord;
        ex_op1_divrem_r         =   `ysyx_22050058_ZeroWord;
        ex_op2_divrem_r         =   `ysyx_22050058_ZeroWord;
       
        case (ex_aluop_i) 
            `ysyx_22050058_ALU_MUL_OP : begin
                ex_op1_mul_r    =   ex_op1_wdata_i;
                ex_op2_mul_r    =   ex_op2_wdata_i;
                arithmeticres   =   arithmeticres_mul_w[63:0];
            end
            `ysyx_22050058_ALU_MULHU_OP : begin
                ex_op1_mul_r    =   ex_op1_wdata_i;
                ex_op2_mul_r    =   ex_op2_wdata_i;
                arithmeticres   =   arithmeticres_mul_w[127:64];
            end
            `ysyx_22050058_ALU_MULH_OP : begin
                ex_op1_mul_r    =   $signed(ex_op1_wdata_i);
                ex_op2_mul_r    =   $signed(ex_op2_wdata_i);
                arithmeticres   =   arithmeticres_mul_w[127:64];
            end
            `ysyx_22050058_ALU_MULHSU_OP : begin
                ex_op1_mul_r    =   $signed(ex_op2_wdata_i);
                ex_op2_mul_r    =   ex_op2_wdata_i;
                arithmeticres   =   arithmeticres_mul_w[127:64];
            end
            `ysyx_22050058_ALU_DIV_OP : begin
                ex_op1_divrem_r    =   $signed(ex_op1_wdata_i);
                ex_op2_divrem_r    =   $signed(ex_op2_wdata_i);
                arithmeticres   =   arithmeticres_div_w;
                //
                ex_is_divrem_r          =   1;
            end
            `ysyx_22050058_ALU_DIVU_OP : begin
                ex_op1_divrem_r    =   ex_op1_wdata_i;
                ex_op2_divrem_r    =   ex_op2_wdata_i;
                arithmeticres   =   arithmeticres_div_w;
                //
                ex_is_divrem_r          =   1;
            end
            `ysyx_22050058_ALU_DIVW_OP : begin
                ex_op1_divrem_r    =   $signed(ex_op1_wdata_i[31:0]);
                ex_op2_divrem_r    =   $signed(ex_op2_wdata_i[31:0]);
                arithmeticres   =   arithmeticres_div_w;
                //
                ex_is_divrem_r          =   1;
            end
            `ysyx_22050058_ALU_DIVUW_OP : begin
                ex_op1_divrem_r    =   ex_op1_wdata_i[31:0];
                ex_op2_divrem_r    =   ex_op2_wdata_i[31:0];
                arithmeticres   =   arithmeticres_div_w;
                //
                ex_is_divrem_r          =   1;
            end
            `ysyx_22050058_ALU_REM_OP : begin
                ex_op1_divrem_r    =   $signed(ex_op1_wdata_i);
                ex_op2_divrem_r    =   $signed(ex_op2_wdata_i);
                arithmeticres   =   arithmeticres_rem_w;
                //
                ex_is_divrem_r          =   1;
            end
            `ysyx_22050058_ALU_REMU_OP : begin
                ex_op1_divrem_r    =   ex_op1_wdata_i;
                ex_op2_divrem_r    =   ex_op2_wdata_i;
                arithmeticres   =   arithmeticres_rem_w;
                //
                ex_is_divrem_r          =   1;
            end
            `ysyx_22050058_ALU_REMW_OP : begin
                ex_op1_divrem_r    =   $signed(ex_op1_wdata_i[31:0]);
                ex_op2_divrem_r    =   $signed(ex_op2_wdata_i[31:0]);
                arithmeticres   =   arithmeticres_rem_w;
                //
                ex_is_divrem_r          =   1;
            end
            `ysyx_22050058_ALU_REMUW_OP : begin
                ex_op1_divrem_r    =   ex_op1_wdata_i[31:0];
                ex_op2_divrem_r    =   ex_op2_wdata_i[31:0];
                arithmeticres   =   arithmeticres_rem_w;
                //
                ex_is_divrem_r          =   1;
            end
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
                logices           =   ex_op1_wdata_i << ex_op2_wdata_i[5:0];
            end
            `ysyx_22050058_ALU_SLLW_OP :begin
                logices           =   ex_op1_wdata_i[31:0] << ex_op2_wdata_i[5:0];
            end
            `ysyx_22050058_ALU_SRL_OP :begin
                logices           =   ex_op1_wdata_i >> ex_op2_wdata_i[5:0];
            end
            `ysyx_22050058_ALU_SRLW_OP :begin
                logices           =   ex_op1_wdata_i[31:0] >> ex_op2_wdata_i[5:0];
            end
            `ysyx_22050058_ALU_SRA_OP :begin
                logices           =   $signed(ex_op1_wdata_i) >> ex_op2_wdata_i[5:0];
            end
            `ysyx_22050058_ALU_SRAW_OP :begin
                logices           =   $signed(ex_op1_wdata_i[31:0]) >> ex_op2_wdata_i[5:0];
            end
            
            `ysyx_22050058_ALU_BEQ_OP :begin
                ex_isjump_o           =   ex_op1_wdata_i == ex_op2_wdata_i;
                ex_jumpaddr_o         =   ex_pc_i+ex_op3_wdata_i;
            end
            `ysyx_22050058_ALU_BNE_OP :begin
                ex_isjump_o           =   ex_op1_wdata_i != ex_op2_wdata_i;
                ex_jumpaddr_o         =   ex_pc_i+ex_op3_wdata_i;
            end
            `ysyx_22050058_ALU_BLT_OP :begin
                ex_isjump_o           =   $signed(ex_op1_wdata_i) < $signed(ex_op2_wdata_i);
                ex_jumpaddr_o         =   ex_pc_i+ex_op3_wdata_i;
            end
            `ysyx_22050058_ALU_BGE_OP :begin
                ex_isjump_o           =   ~($signed(ex_op1_wdata_i) < $signed(ex_op2_wdata_i));
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
            `ysyx_22050058_ALU_LB_OP : begin
                    memaddr   =   ex_op1_wdata_i + ex_op2_wdata_i;
            end
            `ysyx_22050058_ALU_LH_OP : begin
                    memaddr   =   ex_op1_wdata_i + ex_op2_wdata_i;
            end
            `ysyx_22050058_ALU_LW_OP : begin
                    memaddr   =   ex_op1_wdata_i + ex_op2_wdata_i;
            end
            `ysyx_22050058_ALU_LD_OP : begin
                    memaddr   =   ex_op1_wdata_i + ex_op2_wdata_i;
            end
            `ysyx_22050058_ALU_LBU_OP : begin
                    memaddr   =   ex_op1_wdata_i + ex_op2_wdata_i;
            end
            `ysyx_22050058_ALU_LHU_OP : begin
                    memaddr   =   ex_op1_wdata_i + ex_op2_wdata_i;
            end
            `ysyx_22050058_ALU_LWU_OP : begin
                    memaddr   =   ex_op1_wdata_i + ex_op2_wdata_i;
            end
            `ysyx_22050058_ALU_SB_OP : begin
                    memaddr   =   ex_op1_wdata_i + ex_op3_wdata_i;
            end
            `ysyx_22050058_ALU_SH_OP : begin
                    memaddr   =   ex_op1_wdata_i + ex_op3_wdata_i;
            end
            `ysyx_22050058_ALU_SW_OP : begin
                    memaddr   =   ex_op1_wdata_i + ex_op3_wdata_i;
            end
            `ysyx_22050058_ALU_SD_OP : begin
                    memaddr   =   ex_op1_wdata_i + ex_op3_wdata_i;
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
            `ysyx_22050058_ALU_LOAD_SEL : begin
                ex_wdata_r  =   memaddr;
            end
            `ysyx_22050058_ALU_STORE_SEL : begin
                ex_wdata_r  =   ex_op2_wdata_i;
                ex_reg_waddr_o = memaddr;
            end
            default : begin
            end
        endcase
    end

    always @(*) begin
        if(ex_alusel_i==`ysyx_22050058_ALU_64W_SEL)begin
            ex_wdata_o     =    {{32{arithmeticres[31]}},arithmeticres[31:0]};
        end else if (ex_alusel_i==`ysyx_22050058_ALU_64LOGICW_SEL)begin
            ex_wdata_o     =    {{32{logices[31]}},logices[31:0]};
        end else begin
            ex_wdata_o     =    ex_wdata_r;
        end
    end




endmodule
