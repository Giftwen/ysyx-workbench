/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-09-26 11:09:44
 * @LastEditTime: 2022-10-15 02:09:00
 * @Description: 
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */
`include "./vsrc/ysyx_22050058_define.v"
 module ysyx_22050058_id (

    //Interface with IFstage
    input   wire    [`ysyx_22050058_InstAdderBus]   id_pc_i,
    input   wire    [`ysyx_22050058_InstBus]        id_inst_i,

    //Interface with Regfile
    input   wire    [`ysyx_22050058_RegBUS]         id_reg1_rdata_i,
    input   wire    [`ysyx_22050058_RegBUS]         id_reg2_rdata_i,
    output  reg                                     id_reg1_re_o,
    output  reg                                     id_reg2_re_o,
    output  reg     [`ysyx_22050058_RegAddrBus]     id_reg1_raddr_o,
    output  reg     [`ysyx_22050058_RegAddrBus]     id_reg2_raddr_o,
    //Interface with CtrlBlock
    output  reg                                     id_stall_idreq_o,
    //Interface with EXstage
    output  reg     [`ysyx_22050058_InstAdderBus]   id_pc_o,   
    output  reg                                     id_dpicstop_o,                                 
    output  reg     [`ysyx_22050058_AluOpBus]       id_aluop_o,
    output  reg     [`ysyx_22050058_AluSelBus]      id_alusel_o,
    output  reg     [`ysyx_22050058_RegBUS]         id_op1_wdata_o,
    output  reg     [`ysyx_22050058_RegBUS]         id_op2_wdata_o,
    output  reg     [`ysyx_22050058_RegBUS]         id_op3_wdata_o,
    output  reg     [`ysyx_22050058_RegAddrBus]     id_reg_waddr_o,
    output  reg                                     id_we_o,
    input   wire    [`ysyx_22050058_RegAddrBus]     id_ex_reg_waddr_i,  //fix data harzard
    input   wire                                    id_ex_we_i,         //fix data harzard
    input   wire    [`ysyx_22050058_RegBUS]         id_ex_wdata_i,      //fix data harzard

    //Interface with Memstage
    input   wire    [`ysyx_22050058_RegAddrBus]     id_mem_reg_waddr_i, //fix data harzard
    input   wire                                    id_mem_we_i,        //fix data harzard
    input   wire    [`ysyx_22050058_RegBUS]         id_mem_wdata_i      //fix data harzard
 );



    wire[6:0] opcode    =       id_inst_i[6:0];
    wire[2:0] funct3    =       id_inst_i[14:12];
    wire[6:0] funct6    =       id_inst_i[31:26];
    wire[6:0] funct7    =       id_inst_i[31:25];
    wire[6:0] funct12   =       id_inst_i[31:20];
    
    wire[4:0] rd        =       id_inst_i[11:7];
    wire[4:0] zimm      =       id_inst_i[19:15];
    wire[4:0] rs1       =       id_inst_i[19:15];
    wire[4:0] rs2       =       id_inst_i[24:20];
    wire[5:0] shamt     =       id_inst_i[25:20];
    wire[`ysyx_22050058_RegBUS]	id_Bimm       =   {{52{id_inst_i[31]}}, id_inst_i[7], id_inst_i[30:25], id_inst_i[11:8], 1'b0};
    wire[`ysyx_22050058_RegBUS]	id_JALimm     =   {{44{id_inst_i[31]}}, id_inst_i[19:12], id_inst_i[20], id_inst_i[30:21], 1'b0};
    wire[`ysyx_22050058_RegBUS]	id_JALRimm    =   {{52{id_inst_i[31]}}, id_inst_i[31:20]};
    reg [`ysyx_22050058_RegBUS]	id_imm;
    reg                         id_instvalid;

    always @(*) begin
        id_pc_o             =   id_pc_i;
        id_op3_wdata_o      =   id_Bimm;
    end

    always @(*) begin
        id_aluop_o          =       `ysyx_22050058_ALU_NOP_OP;
        id_alusel_o         =       `ysyx_22050058_ALU_NOP_SEL;
        id_reg_waddr_o      =       `ysyx_22050058_NOP_REG_Addr;
        id_we_o             =       `ysyx_22050058_WriteDisable;
        id_instvalid        =       `ysyx_22050058_InstValid;
        id_reg1_re_o        =       `ysyx_22050058_ReadDisable;
        id_reg2_re_o        =       `ysyx_22050058_ReadDisable;
        id_reg1_raddr_o     =       `ysyx_22050058_NOP_REG_Addr;
        id_reg2_raddr_o     =       `ysyx_22050058_NOP_REG_Addr;
        id_imm              =       `ysyx_22050058_ZeroWord;
        id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
        case(opcode)
            `ysyx_22050058_INST_TYPE_I: begin
                case(funct3) 
                    `ysyx_22050058_INST_ADDI: begin
                        id_aluop_o          =       `ysyx_22050058_ALU_ADD_OP;
                        id_alusel_o         =       `ysyx_22050058_ALU_ARITHMETIC_SEL;
                        id_we_o             =       `ysyx_22050058_WriteEnable;
                        id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22050058_ReadDisable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       {{52{id_inst_i[31]}}, id_inst_i[31:20]};
                        id_instvalid        =       `ysyx_22050058_InstValid;
                        id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                    end
                    `ysyx_22050058_INST_XORI: begin
                        id_aluop_o          =       `ysyx_22050058_ALU_XOR_OP;
                        id_alusel_o         =       `ysyx_22050058_ALU_LOGIC_SEL;
                        id_we_o             =       `ysyx_22050058_WriteEnable;
                        id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22050058_ReadDisable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       {{52{id_inst_i[31]}}, id_inst_i[31:20]};
                        id_instvalid        =       `ysyx_22050058_InstValid;
                        id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                    end
                    `ysyx_22050058_INST_ORI : begin
                        id_aluop_o          =       `ysyx_22050058_ALU_OR_OP;
                        id_alusel_o         =       `ysyx_22050058_ALU_LOGIC_SEL;
                        id_we_o             =       `ysyx_22050058_WriteEnable;
                        id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22050058_ReadDisable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       {{52{id_inst_i[31]}}, id_inst_i[31:20]};
                        id_instvalid        =       `ysyx_22050058_InstValid;
                        id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                    end
                    `ysyx_22050058_INST_ANDI: begin
                        id_aluop_o          =       `ysyx_22050058_ALU_AND_OP;
                        id_alusel_o         =       `ysyx_22050058_ALU_LOGIC_SEL;
                        id_we_o             =       `ysyx_22050058_WriteEnable;
                        id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22050058_ReadDisable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       {{52{id_inst_i[31]}}, id_inst_i[31:20]};
                        id_instvalid        =       `ysyx_22050058_InstValid;
                        id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                    end
                    `ysyx_22050058_INST_SLTI: begin
                        id_aluop_o          =       `ysyx_22050058_ALU_COMP_OP;
                        id_alusel_o         =       `ysyx_22050058_ALU_LOGIC_SEL;
                        id_we_o             =       `ysyx_22050058_WriteEnable;
                        id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22050058_ReadDisable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       {{52{id_inst_i[31]}}, id_inst_i[31:20]};
                        id_instvalid        =       `ysyx_22050058_InstValid;
                        id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                    end
                    `ysyx_22050058_INST_SLTIU: begin
                        id_aluop_o          =       `ysyx_22050058_ALU_COMPU_OP;
                        id_alusel_o         =       `ysyx_22050058_ALU_LOGIC_SEL;
                        id_we_o             =       `ysyx_22050058_WriteEnable;
                        id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22050058_ReadDisable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       {{52{id_inst_i[31]}}, id_inst_i[31:20]};
                        id_instvalid        =       `ysyx_22050058_InstValid;
                        id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                    end
                    `ysyx_22050058_INST_SLLIFUN3:begin
                        case(funct6)
                            `ysyx_22050058_INST_SLLI:begin
                                id_aluop_o          =       `ysyx_22050058_ALU_SLL_OP;
                                id_alusel_o         =       `ysyx_22050058_ALU_ARITHMETIC_SEL;
                                id_we_o             =       `ysyx_22050058_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22050058_ReadDisable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       shamt;
                                id_instvalid        =       `ysyx_22050058_InstValid;
                                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                            end
                        default:begin
                        end
                        
                        endcase
                    end
                    `ysyx_22050058_INST_SRLIFUN3:begin
                        case(funct6)
                            `ysyx_22050058_INST_SRLI:begin
                                id_aluop_o          =       `ysyx_22050058_ALU_SRL_OP;
                                id_alusel_o         =       `ysyx_22050058_ALU_LOGIC_SEL;
                                id_we_o             =       `ysyx_22050058_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22050058_ReadDisable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       shamt;
                                id_instvalid        =       `ysyx_22050058_InstValid;
                                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                            end
                            `ysyx_22050058_INST_SRAI:begin
                                id_aluop_o          =       `ysyx_22050058_ALU_SRA_OP;
                                id_alusel_o         =       `ysyx_22050058_ALU_LOGIC_SEL;
                                id_we_o             =       `ysyx_22050058_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22050058_ReadDisable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       shamt;
                                id_instvalid        =       `ysyx_22050058_InstValid;
                                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    
                    default:begin
                    end   
                endcase
            end
            `ysyx_22050058_INST_TYPE_I64:begin
                case(funct3) 
                    `ysyx_22050058_INST_ADDIW: begin
                        id_aluop_o          =       `ysyx_22050058_ALU_ADD_OP;
                        id_alusel_o         =       `ysyx_22050058_ALU_64W_SEL;
                        id_we_o             =       `ysyx_22050058_WriteEnable;
                        id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22050058_ReadDisable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       {{52{id_inst_i[31]}}, id_inst_i[31:20]};
                        id_instvalid        =       `ysyx_22050058_InstValid;
                        id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                    end
                    `ysyx_22050058_INST_SLLIWFUN3:begin
                        case(funct6)
                            `ysyx_22050058_INST_SLLIW:begin
                                id_aluop_o          =       `ysyx_22050058_ALU_SLL_OP;
                                id_alusel_o         =       `ysyx_22050058_ALU_64W_SEL;
                                id_we_o             =       `ysyx_22050058_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22050058_ReadDisable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       shamt;
                                id_instvalid        =       `ysyx_22050058_InstValid;
                                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                            end
                        default:begin
                        end
                        
                        endcase
                    end
                    `ysyx_22050058_INST_SRLIWFUN3:begin
                        case(funct6)
                            `ysyx_22050058_INST_SRLIW:begin
                                id_aluop_o          =       `ysyx_22050058_ALU_SRL_OP;
                                id_alusel_o         =       `ysyx_22050058_ALU_64W_SEL;
                                id_we_o             =       `ysyx_22050058_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22050058_ReadDisable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22050058_ZeroWord;
                                id_instvalid        =       `ysyx_22050058_InstValid;
                                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                            end
                            `ysyx_22050058_INST_SRAIW:begin
                                id_aluop_o          =       `ysyx_22050058_ALU_SRA_OP;
                                id_alusel_o         =       `ysyx_22050058_ALU_64W_SEL;
                                id_we_o             =       `ysyx_22050058_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22050058_ReadDisable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22050058_ZeroWord;
                                id_instvalid        =       `ysyx_22050058_InstValid;
                                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    
                    default:begin
                    end   
                endcase
            end
            `ysyx_22050058_INST_TYPE_R  : begin
                case (funct3)
                    `ysyx_22050058_INST_ADDFUN3: begin
                        case(funct7)
                            `ysyx_22050058_INST_ADD:begin
                                id_aluop_o          =       `ysyx_22050058_ALU_ADD_OP;
                                id_alusel_o         =       `ysyx_22050058_ALU_ARITHMETIC_SEL;
                                id_we_o             =       `ysyx_22050058_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22050058_ZeroWord;
                                id_instvalid        =       `ysyx_22050058_InstValid;
                                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                            end
                            `ysyx_22050058_INST_SUB:begin
                                id_aluop_o          =       `ysyx_22050058_ALU_SUB_OP;
                                id_alusel_o         =       `ysyx_22050058_ALU_ARITHMETIC_SEL;
                                id_we_o             =       `ysyx_22050058_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22050058_ZeroWord;
                                id_instvalid        =       `ysyx_22050058_InstValid;
                                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    `ysyx_22050058_INST_ANDFUN3:begin
                        case(funct7)
                            `ysyx_22050058_INST_AND:begin
                                id_aluop_o          =       `ysyx_22050058_ALU_AND_OP;
                                id_alusel_o         =       `ysyx_22050058_ALU_LOGIC_SEL;
                                id_we_o             =       `ysyx_22050058_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22050058_ZeroWord;
                                id_instvalid        =       `ysyx_22050058_InstValid;
                                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    `ysyx_22050058_INST_ORFUN3:begin
                        case(funct7)
                            `ysyx_22050058_INST_OR:begin
                                id_aluop_o          =       `ysyx_22050058_ALU_OR_OP;
                                id_alusel_o         =       `ysyx_22050058_ALU_LOGIC_SEL;
                                id_we_o             =       `ysyx_22050058_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22050058_ZeroWord;
                                id_instvalid        =       `ysyx_22050058_InstValid;
                                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    `ysyx_22050058_INST_XORFUN3:begin
                        case(funct7)
                            `ysyx_22050058_INST_XOR:begin
                                id_aluop_o          =       `ysyx_22050058_ALU_XOR_OP;
                                id_alusel_o         =       `ysyx_22050058_ALU_LOGIC_SEL;
                                id_we_o             =       `ysyx_22050058_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22050058_ZeroWord;
                                id_instvalid        =       `ysyx_22050058_InstValid;
                                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    `ysyx_22050058_INST_SLTFUN3:begin
                        case(funct7)
                            `ysyx_22050058_INST_SLT:begin
                                id_aluop_o          =       `ysyx_22050058_ALU_COMP_OP;
                                id_alusel_o         =       `ysyx_22050058_ALU_LOGIC_SEL;
                                id_we_o             =       `ysyx_22050058_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22050058_ZeroWord;
                                id_instvalid        =       `ysyx_22050058_InstValid;
                                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    `ysyx_22050058_INST_SLTUFUN3:begin
                        case(funct7)
                            `ysyx_22050058_INST_SLTU:begin
                                id_aluop_o          =       `ysyx_22050058_ALU_COMPU_OP;
                                id_alusel_o         =       `ysyx_22050058_ALU_LOGIC_SEL;
                                id_we_o             =       `ysyx_22050058_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22050058_ZeroWord;
                                id_instvalid        =       `ysyx_22050058_InstValid;
                                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    `ysyx_22050058_INST_SLLFUN3:begin
                        case(funct7)
                            `ysyx_22050058_INST_SLL:begin
                                id_aluop_o          =       `ysyx_22050058_ALU_SLL_OP;
                                id_alusel_o         =       `ysyx_22050058_ALU_LOGIC_SEL;
                                id_we_o             =       `ysyx_22050058_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22050058_ZeroWord;
                                id_instvalid        =       `ysyx_22050058_InstValid;
                                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    `ysyx_22050058_INST_SRAFUN3:begin
                        case(funct7)
                            `ysyx_22050058_INST_SRA:begin
                                id_aluop_o          =       `ysyx_22050058_ALU_SRA_OP;
                                id_alusel_o         =       `ysyx_22050058_ALU_LOGIC_SEL;
                                id_we_o             =       `ysyx_22050058_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22050058_ZeroWord;
                                id_instvalid        =       `ysyx_22050058_InstValid;
                                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                            end
                            `ysyx_22050058_INST_SRL:begin
                                id_aluop_o          =       `ysyx_22050058_ALU_SRL_OP;
                                id_alusel_o         =       `ysyx_22050058_ALU_LOGIC_SEL;
                                id_we_o             =       `ysyx_22050058_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22050058_ZeroWord;
                                id_instvalid        =       `ysyx_22050058_InstValid;
                                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    default: begin
                    end
                endcase
            end
            `ysyx_22050058_INST_TYPE_R64 : begin
                case (funct3)
                    `ysyx_22050058_INST_ADDWFUN3: begin
                        case(funct7)
                            `ysyx_22050058_INST_ADDW:begin
                                id_aluop_o          =       `ysyx_22050058_ALU_ADD_OP;
                                id_alusel_o         =       `ysyx_22050058_ALU_64W_SEL;
                                id_we_o             =       `ysyx_22050058_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22050058_ZeroWord;
                                id_instvalid        =       `ysyx_22050058_InstValid;
                                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                            end
                            `ysyx_22050058_INST_SUBW:begin
                                id_aluop_o          =       `ysyx_22050058_ALU_SUB_OP;
                                id_alusel_o         =       `ysyx_22050058_ALU_64W_SEL;
                                id_we_o             =       `ysyx_22050058_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22050058_ZeroWord;
                                id_instvalid        =       `ysyx_22050058_InstValid;
                                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    `ysyx_22050058_INST_SLLWFUN3:begin
                        case(funct7)
                            `ysyx_22050058_INST_SLLW:begin
                                id_aluop_o          =       `ysyx_22050058_ALU_SLL_OP;
                                id_alusel_o         =       `ysyx_22050058_ALU_64W_SEL;
                                id_we_o             =       `ysyx_22050058_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22050058_ZeroWord;
                                id_instvalid        =       `ysyx_22050058_InstValid;
                                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    `ysyx_22050058_INST_SRAWFUN3:begin
                        case(funct7)
                            `ysyx_22050058_INST_SRAW:begin
                                id_aluop_o          =       `ysyx_22050058_ALU_SRA_OP;
                                id_alusel_o         =       `ysyx_22050058_ALU_64W_SEL;
                                id_we_o             =       `ysyx_22050058_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22050058_ZeroWord;
                                id_instvalid        =       `ysyx_22050058_InstValid;
                                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                            end
                            `ysyx_22050058_INST_SRLW:begin
                                id_aluop_o          =       `ysyx_22050058_ALU_SRL_OP;
                                id_alusel_o         =       `ysyx_22050058_ALU_64W_SEL;
                                id_we_o             =       `ysyx_22050058_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22050058_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22050058_ZeroWord;
                                id_instvalid        =       `ysyx_22050058_InstValid;
                                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    default: begin
                    end
                endcase
            end
            `ysyx_22050058_INST_TYPE_B : begin
                case (funct3)
                    `ysyx_22050058_INST_BEQ: begin
                        id_aluop_o          =       `ysyx_22050058_ALU_BEQ_OP;
                        id_alusel_o         =       `ysyx_22050058_ALU_NOP_SEL;
                        id_we_o             =       `ysyx_22050058_WriteDisable;
                        id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22050058_ReadEnable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       `ysyx_22050058_ZeroWord;
                        id_instvalid        =       `ysyx_22050058_InstValid;
                        id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                    end
                    `ysyx_22050058_INST_BNE:begin
                        id_aluop_o          =       `ysyx_22050058_ALU_BNE_OP;
                        id_alusel_o         =       `ysyx_22050058_ALU_NOP_SEL;
                        id_we_o             =       `ysyx_22050058_WriteDisable;
                        id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22050058_ReadEnable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       `ysyx_22050058_ZeroWord;
                        id_instvalid        =       `ysyx_22050058_InstValid;
                        id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                    end
                    `ysyx_22050058_INST_BLT:begin
                        id_aluop_o          =       `ysyx_22050058_ALU_BLT_OP;
                        id_alusel_o         =       `ysyx_22050058_ALU_NOP_SEL;
                        id_we_o             =       `ysyx_22050058_WriteDisable;
                        id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22050058_ReadEnable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       `ysyx_22050058_ZeroWord;
                        id_instvalid        =       `ysyx_22050058_InstValid;
                        id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                    end
                    `ysyx_22050058_INST_BGE:begin
                        id_aluop_o          =       `ysyx_22050058_ALU_BGE_OP;
                        id_alusel_o         =       `ysyx_22050058_ALU_NOP_SEL;
                        id_we_o             =       `ysyx_22050058_WriteDisable;
                        id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22050058_ReadEnable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       `ysyx_22050058_ZeroWord;
                        id_instvalid        =       `ysyx_22050058_InstValid;
                        id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                    end
                    `ysyx_22050058_INST_BLTU:begin
                        id_aluop_o          =       `ysyx_22050058_ALU_BLTU_OP;
                        id_alusel_o         =       `ysyx_22050058_ALU_NOP_SEL;
                        id_we_o             =       `ysyx_22050058_WriteDisable;
                        id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22050058_ReadEnable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       `ysyx_22050058_ZeroWord;
                        id_instvalid        =       `ysyx_22050058_InstValid;
                        id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                    end
                    `ysyx_22050058_INST_BGEU:begin
                        id_aluop_o          =       `ysyx_22050058_ALU_BGEU_OP;
                        id_alusel_o         =       `ysyx_22050058_ALU_NOP_SEL;
                        id_we_o             =       `ysyx_22050058_WriteDisable;
                        id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22050058_ReadEnable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       `ysyx_22050058_ZeroWord;
                        id_instvalid        =       `ysyx_22050058_InstValid;
                        id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;
                    end
                    default: begin
                    end
                endcase
            end
            `ysyx_22050058_INST_JAL   : begin//xxx
                id_aluop_o          =       `ysyx_22050058_ALU_JAL_OP;
                id_alusel_o         =       `ysyx_22050058_ALU_ARITHMETIC_SEL;
                id_we_o             =       `ysyx_22050058_WriteEnable;
                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                id_reg2_re_o        =       `ysyx_22050058_ReadDisable;
                id_reg_waddr_o      =       rd;
                id_reg1_raddr_o     =       rs1;//pc?
                id_reg2_raddr_o     =       rs2;
                id_imm              =       id_JALimm;
                id_instvalid        =       `ysyx_22050058_InstValid;
                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP; 
            end
            `ysyx_22050058_INST_JALR   : begin//xxx
                id_aluop_o          =       `ysyx_22050058_ALU_JALR_OP;
                id_alusel_o         =       `ysyx_22050058_ALU_ARITHMETIC_SEL;
                id_we_o             =       `ysyx_22050058_WriteEnable;
                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                id_reg2_re_o        =       `ysyx_22050058_ReadDisable;
                id_reg_waddr_o      =       rd;
                id_reg1_raddr_o     =       rs1;//pc?
                id_reg2_raddr_o     =       rs2;
                id_imm              =       id_JALRimm;
                id_instvalid        =       `ysyx_22050058_InstValid;
                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP; 
            end
            `ysyx_22050058_INST_AUIPC   : begin//xxx
                id_aluop_o          =       `ysyx_22050058_ALU_AUIPC_OP;
                id_alusel_o         =       `ysyx_22050058_ALU_ARITHMETIC_SEL;
                id_we_o             =       `ysyx_22050058_WriteEnable;
                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                id_reg2_re_o        =       `ysyx_22050058_ReadDisable;
                id_reg_waddr_o      =       rd;
                id_reg1_raddr_o     =       rs1;//pc?
                id_reg2_raddr_o     =       rs2;
                id_imm              =       {{44{id_inst_i[31]}}, id_inst_i[31:12]}<<4'd12;
                id_instvalid        =       `ysyx_22050058_InstValid;
                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP; 
            end
            `ysyx_22050058_INST_LUI :   begin
                id_aluop_o          =       `ysyx_22050058_ALU_LUI_OP;
                id_alusel_o         =       `ysyx_22050058_ALU_ARITHMETIC_SEL;
                id_we_o             =       `ysyx_22050058_WriteEnable;
                id_reg1_re_o        =       `ysyx_22050058_ReadEnable;
                id_reg2_re_o        =       `ysyx_22050058_ReadDisable;
                id_reg_waddr_o      =       rd;
                id_reg1_raddr_o     =       `ysyx_22050058_RegAddrBusNum'b0;//gpr0
                id_reg2_raddr_o     =       rs2;
                id_imm              =       {{44{id_inst_i[31]}}, id_inst_i[31:12]}<<4'd12;
                id_instvalid        =       `ysyx_22050058_InstValid;
                id_dpicstop_o       =       `ysyx_22050058_DPICNOSTOP;                
            end
            `ysyx_22050058_INST_CSR: begin
                case(funct3)
                    `ysyx_22050058_INST_ENVIRONMENT: begin
                        case(funct12)
                            `ysyx_22050058_INST_EBREAK:begin
                                id_aluop_o          =       `ysyx_22050058_ALU_NOP_OP;
                                id_alusel_o         =       `ysyx_22050058_ALU_NOP_SEL;
                                id_reg_waddr_o      =       `ysyx_22050058_NOP_REG_Addr;
                                id_we_o             =       `ysyx_22050058_WriteDisable;
                                id_instvalid        =       `ysyx_22050058_InstValid;
                                id_reg1_re_o        =       `ysyx_22050058_ReadDisable;
                                id_reg2_re_o        =       `ysyx_22050058_ReadDisable;
                                id_reg1_raddr_o     =       `ysyx_22050058_NOP_REG_Addr;
                                id_reg2_raddr_o     =       `ysyx_22050058_NOP_REG_Addr;
                                id_imm              =       `ysyx_22050058_ZeroWord;
                                id_dpicstop_o       =       `ysyx_22050058_DPICSTOP;
                            end
                            default:begin
                            end
                        endcase
                    end

                    default:begin
                    end
                endcase
            end
            default:begin
            end
        endcase
    end
        
  

	always @ (*) begin
		if((id_ex_reg_waddr_i==id_reg1_raddr_o)&&(id_reg1_re_o == `ysyx_22050058_ReadEnable)&&(id_ex_we_i == `ysyx_22050058_WriteEnable)) begin
	  	    id_op1_wdata_o = id_ex_wdata_i;
        end else if((id_mem_reg_waddr_i==id_reg1_raddr_o)&&(id_reg1_re_o == `ysyx_22050058_ReadEnable)&&(id_mem_we_i == `ysyx_22050058_WriteEnable))begin
            id_op1_wdata_o = id_mem_wdata_i;
        end else if(id_reg1_re_o == `ysyx_22050058_ReadEnable)begin
            id_op1_wdata_o = id_reg1_rdata_i;
	    end else if(id_reg1_re_o == `ysyx_22050058_ReadDisable) begin
	  	    id_op1_wdata_o = id_imm;
	    end else begin
	        id_op1_wdata_o = `ysyx_22050058_ZeroWord;
	    end
	end

	always @ (*) begin
		if((id_ex_reg_waddr_i==id_reg2_raddr_o)&&(id_reg2_re_o == `ysyx_22050058_ReadEnable)&&(id_ex_we_i == `ysyx_22050058_WriteEnable)) begin
	  	    id_op2_wdata_o = id_ex_wdata_i;
        end else if((id_mem_reg_waddr_i==id_reg2_raddr_o)&&(id_reg2_re_o == `ysyx_22050058_ReadEnable)&&(id_mem_we_i == `ysyx_22050058_WriteEnable))begin
            id_op2_wdata_o = id_mem_wdata_i;
        end else if(id_reg2_re_o == `ysyx_22050058_ReadEnable)begin
            id_op2_wdata_o = id_reg2_rdata_i;
	    end else if(id_reg2_re_o == `ysyx_22050058_ReadDisable) begin
	  	    id_op2_wdata_o = id_imm;
	    end else begin
	        id_op2_wdata_o = `ysyx_22050058_ZeroWord;
	    end
	end


endmodule
