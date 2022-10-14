/*
 * @Author: ysyx_22050058_wenjiabao
 * @Date: 2022-09-26 11:11:53
 * @LastEditTime: 2022-10-14 21:10:19
 * @Description: define file for ysyx_22050058
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */




//*********************GLOABAL DEFINE*********************//

`define ysyx_22050058_RstEnable         1'b1
`define ysyx_22050058_RstDisable        1'b0
`define ysyx_22050058_WriteEnable       1'b1
`define ysyx_22050058_WriteDisable      1'b0
`define ysyx_22050058_ReadEnable        1'b1
`define ysyx_22050058_ReadDisable       1'b0
`define ysyx_22050058_InstValid         1'b1
`define ysyx_22050058_InstnVaild        1'b0
`define ysyx_22050058_True              1'b1
`define ysyx_22050058_False             1'b0
`define ysyx_22050058_ChipEnable        1'b1
`define ysyx_22050058_ChipDisable       1'b0
`define ysyx_22050058_AluOpBus          7:0
`define ysyx_22050058_AluOpBusNum       8
`define ysyx_22050058_AluSelBus         2:0
`define ysyx_22050058_AluSelBusNum      3
`define ysyx_22050058_StallEnable       1'b1
`define ysyx_22050058_StallDisable      1'b0
`define ysyx_22050058_FlushEnable       1'b1
`define ysyx_22050058_FlushDisable      1'b0
`define ysyx_22050058_IsJump            1'b1
`define ysyx_22050058_NoJump            1'b0
`define ysyx_22050058_RegBUS            63:0
`define ysyx_22050058_RegAddrBus        4:0
`define ysyx_22050058_RegBUSNum         6
`define ysyx_22050058_RegAddrBusNum     5

`define ysyx_22050058_InstAdderBus      63:0
`define ysyx_22050058_InstBus           31:0
`define ysyx_22050058_InstLen           32
`define ysyx_22050058_InstAdderBusNum   64
`define ysyx_22050058_RegNum            32
`define ysyx_22050058_RegNumLog2        5
`define ysyx_22050058_InstMemNum        4294
`define ysyx_22050058_InstMemNumLog2    31

`define ysyx_22050058_ZeroWord          `ysyx_22050058_RegBUSNum'b0
`define ysyx_22050058_RstVector         `ysyx_22050058_InstAdderBusNum'h80000000
`define ysyx_22050058_NOP_REG_Addr      `ysyx_22050058_RegBUSNum'b0

`define ysyx_22050058_DPICNOSTOP        1'b0
`define ysyx_22050058_DPICSTOP          1'b1


//***********************Instruction**********************//

//*******Instruction Opcode********//
`define ysyx_22050058_INST_TYPE_I                7'b0010011
`define ysyx_22050058_INST_TYPE_I64              7'b0011011
`define ysyx_22050058_INST_TYPE_R                7'b0110011
`define ysyx_22050058_INST_TYPE_R64              7'b0111011
`define ysyx_22050058_INST_TYPE_B                7'b1100011

`define ysyx_22050058_INST_JAL                   7'b1101111
`define ysyx_22050058_INST_JALR                  7'b1100111
`define ysyx_22050058_INST_AUIPC                 7'b0010111
`define ysyx_22050058_INST_LUI                   7'b0110111

`define ysyx_22050058_INST_CSR                   7'b1110011
//*******Instruction Funct3********//
`define ysyx_22050058_INST_ADDFUN3               3'b000
`define ysyx_22050058_INST_ADDI                  3'b000 
`define ysyx_22050058_INST_ADDIW                 3'b000
`define ysyx_22050058_INST_ADDWFUN3              3'b000
`define ysyx_22050058_INST_SUBFUN3               3'b000
`define ysyx_22050058_INST_SUBWFUN3              3'b000
`define ysyx_22050058_INST_ANDFUN3               3'b111
`define ysyx_22050058_INST_ORFUN3                3'b110
`define ysyx_22050058_INST_XORFUN3               3'b100
`define ysyx_22050058_INST_ANDI                  3'b111
`define ysyx_22050058_INST_ORI                   3'b110
`define ysyx_22050058_INST_XORI                  3'b100
`define ysyx_22050058_INST_SLTFUN3               3'b010
`define ysyx_22050058_INST_SLTI                  3'b010
`define ysyx_22050058_INST_SLTIU                 3'b011
`define ysyx_22050058_INST_SLTUFUN3              3'b011
`define ysyx_22050058_INST_SLLIFUN3              3'b001
`define ysyx_22050058_INST_SRAIFUN3              3'b101
`define ysyx_22050058_INST_SRLIFUN3              3'b101
`define ysyx_22050058_INST_SLLIWFUN3             3'b001
`define ysyx_22050058_INST_SRLIWFUN3             3'b101
`define ysyx_22050058_INST_SRAIWFUN3             3'b101
`define ysyx_22050058_INST_SLLFUN3               3'b001
`define ysyx_22050058_INST_SRAFUN3               3'b101
`define ysyx_22050058_INST_SRLFUN3               3'b101
`define ysyx_22050058_INST_SLLWFUN3              3'b001
`define ysyx_22050058_INST_SRLWFUN3              3'b101
`define ysyx_22050058_INST_SRAWFUN3              3'b101

`define ysyx_22050058_INST_BEQ                   3'b000
`define ysyx_22050058_INST_BNE                   3'b001
`define ysyx_22050058_INST_BLT                   3'b100
`define ysyx_22050058_INST_BGE                   3'b101
`define ysyx_22050058_INST_BLTU                  3'b110
`define ysyx_22050058_INST_BGEU                  3'b111

`define ysyx_22050058_INST_NOP                   3'b000
`define ysyx_22050058_INST_ENVIRONMENT           3'b000
//*******Instruction Funct6********//
`define ysyx_22050058_INST_SLLI                  6'b000000
`define ysyx_22050058_INST_SRAI                  6'b010000
`define ysyx_22050058_INST_SRLI                  6'b000000
`define ysyx_22050058_INST_SLLIW                 6'b000000
`define ysyx_22050058_INST_SRLIW                 6'b000000
`define ysyx_22050058_INST_SRAIW                 6'b010000
//*******Instruction Funct7********//
`define ysyx_22050058_INST_ADD                   7'b0000000
`define ysyx_22050058_INST_ADDW                  7'b0000000
`define ysyx_22050058_INST_SUB                   7'b0100000
`define ysyx_22050058_INST_SUBW                  7'b0100000
`define ysyx_22050058_INST_AND                   7'b0000000
`define ysyx_22050058_INST_OR                    7'b0000000
`define ysyx_22050058_INST_XOR                   7'b0000000
`define ysyx_22050058_INST_SLT                   7'b0000000
`define ysyx_22050058_INST_SLTU                  7'b0000000
`define ysyx_22050058_INST_SLL                   7'b0000000
`define ysyx_22050058_INST_SRA                   7'b0100000
`define ysyx_22050058_INST_SRL                   7'b0000000
`define ysyx_22050058_INST_SLLW                  7'b0000000
`define ysyx_22050058_INST_SRLW                  7'b0000000
`define ysyx_22050058_INST_SRAW                  7'b0100000
//*******Instruction Funct12********//
`define ysyx_22050058_INST_EBREAK                12'b000000000001


//***********************AluOpcode***********************//
`define ysyx_22050058_ALU_NOP_OP                 `ysyx_22050058_AluOpBusNum'd0
`define ysyx_22050058_ALU_ADD_OP                 `ysyx_22050058_AluOpBusNum'd0
`define ysyx_22050058_ALU_SUB_OP                 `ysyx_22050058_AluOpBusNum'd1
`define ysyx_22050058_ALU_AND_OP                 `ysyx_22050058_AluOpBusNum'd2
`define ysyx_22050058_ALU_OR_OP                  `ysyx_22050058_AluOpBusNum'd3
`define ysyx_22050058_ALU_XOR_OP                 `ysyx_22050058_AluOpBusNum'd4
`define ysyx_22050058_ALU_COMP_OP                `ysyx_22050058_AluOpBusNum'd5
`define ysyx_22050058_ALU_COMPU_OP               `ysyx_22050058_AluOpBusNum'd6
`define ysyx_22050058_ALU_SLL_OP                 `ysyx_22050058_AluOpBusNum'd7
`define ysyx_22050058_ALU_SRL_OP                 `ysyx_22050058_AluOpBusNum'd8
`define ysyx_22050058_ALU_SRA_OP                 `ysyx_22050058_AluOpBusNum'd9
`define ysyx_22050058_ALU_BEQ_OP                 `ysyx_22050058_AluOpBusNum'd10
`define ysyx_22050058_ALU_BNE_OP                 `ysyx_22050058_AluOpBusNum'd11
`define ysyx_22050058_ALU_BLT_OP                 `ysyx_22050058_AluOpBusNum'd12
`define ysyx_22050058_ALU_BGE_OP                 `ysyx_22050058_AluOpBusNum'd13
`define ysyx_22050058_ALU_BLTU_OP                `ysyx_22050058_AluOpBusNum'd14
`define ysyx_22050058_ALU_BGEU_OP                `ysyx_22050058_AluOpBusNum'd15
`define ysyx_22050058_ALU_JAL_OP                 `ysyx_22050058_AluOpBusNum'd16
`define ysyx_22050058_ALU_JALR_OP                `ysyx_22050058_AluOpBusNum'd17
`define ysyx_22050058_ALU_AUIPC_OP               `ysyx_22050058_AluOpBusNum'd18
`define ysyx_22050058_ALU_LUI_OP                 `ysyx_22050058_AluOpBusNum'd19
//*************************AluSel*************************//
`define ysyx_22050058_ALU_NOP_SEL                `ysyx_22050058_AluSelBusNum'd0
`define ysyx_22050058_ALU_ARITHMETIC_SEL         `ysyx_22050058_AluSelBusNum'd0
`define ysyx_22050058_ALU_LOGIC_SEL              `ysyx_22050058_AluSelBusNum'd1
`define ysyx_22050058_ALU_64W_SEL                `ysyx_22050058_AluSelBusNum'd2
