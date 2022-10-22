/*
 * @Author: WenJiaBao-2022E8020282071
 * @Date: 2022-09-26 11:10:28
 * @LastEditTime: 2022-10-22 09:14:34
 * @Description: 
 * 
 * Copyright (c) 2022 by WenJiaBao wenjiabao0919@163.com, All Rights Reserved. 
 */
`include "./vsrc/ysyx_22050058_define.v"
 module ysyx_22050058_mem (
    //Interface with EXStage
    input   wire     [`ysyx_22050058_InstAdderBus]  mem_pc_i,
    input   wire     [`ysyx_22050058_InstAdderBus]  mem_dnpc_i,
    input   wire                                    mem_dpicstop_i,
    input   wire                                    mem_instvalid_i,
    input   wire     [`ysyx_22050058_AluOpBus]      mem_aluop_i,
    input   wire     [`ysyx_22050058_RegAddrBus]    mem_reg_waddr_i,
    input   wire                                    mem_we_i,
    input   wire     [`ysyx_22050058_RegBUS]        mem_wdata_i,
    //Interface with CtrlBlock
    output  reg                                     mem_stall_memreq_o,
    //Interface with DataMem
    input   wire    [`ysyx_22050058_MemBUS]         mem_memrdata_i,
    input   wire                                    mem_memrdatavaild_i,
    input   wire                                    mem_memwdatavaild_i,
    output  reg                                     mem_memre_o,
    output  reg     [`ysyx_22050058_StoreSelBus]    mem_memwe_o,
    output  reg     [`ysyx_22050058_MemAddrBus]     mem_memaddr_o,
    output  reg     [`ysyx_22050058_MemBUS]         mem_memwdata_o,
    //Interface with WBStage
    output  reg      [`ysyx_22050058_InstAdderBus]  mem_pc_o,
    output  reg      [`ysyx_22050058_InstAdderBus]  mem_dnpc_o,
    output  reg                                     mem_dpicstop_o,
    output  reg                                     mem_instvalid_o,
    output  reg      [`ysyx_22050058_RegAddrBus]    mem_reg_waddr_o,
    output  reg                                     mem_we_o,
    output  reg      [`ysyx_22050058_RegBUS]        mem_wdata_o
 );
    always @(*) begin
        mem_pc_o            =       mem_pc_i;
        mem_dnpc_o          =       mem_dnpc_i;
        mem_dpicstop_o      =       mem_dpicstop_i;
        mem_instvalid_o     =       mem_instvalid_i;
    end

    always @(*) begin
        mem_reg_waddr_o     =       mem_reg_waddr_i;
        mem_we_o            =       mem_we_i;
        mem_wdata_o         =       mem_wdata_i;
        mem_memre_o         =       `ysyx_22050058_MemReadDisable;  
        mem_memwe_o         =       `ysyx_22050058_StoreSelBusNum'b0;
        mem_memaddr_o       =       `ysyx_22050058_ZeroWord;
        mem_stall_memreq_o  =       `ysyx_22050058_StallDisable;
        mem_memwdata_o      =       `ysyx_22050058_ZeroWord;
        // mem_memrdatavaild_i =       `ysyx_22050058_MemReadnVaild;
        // mem_memwdatavaild_i =       `ysyx_22050058_MemWritenVaild;
        case (mem_aluop_i)
            `ysyx_22050058_ALU_LB_OP : begin
                case(mem_wdata_i[2:0])
                    3'b000:begin
                        mem_wdata_o         =       {{48{mem_memrdata_i[8*(0+1)-1]}},mem_memrdata_i[8*(0+1)-1:8*0 ]};
                    end
                    3'b001:begin
                        mem_wdata_o         =       {{56{mem_memrdata_i[8*(1+1)-1]}},mem_memrdata_i[8*(1+1)-1:8*1 ]};
                    end
                    3'b010:begin
                        mem_wdata_o         =       {{56{mem_memrdata_i[8*(2+1)-1]}},mem_memrdata_i[8*(2+1)-1:8*2 ]};
                    end
                    3'b011:begin
                        mem_wdata_o         =       {{56{mem_memrdata_i[8*(3+1)-1]}},mem_memrdata_i[8*(3+1)-1:8*3 ]};
                    end
                    3'b100:begin
                        mem_wdata_o         =       {{56{mem_memrdata_i[8*(4+1)-1]}},mem_memrdata_i[8*(4+1)-1:8*4 ]};
                    end
                    3'b101:begin
                        mem_wdata_o         =       {{56{mem_memrdata_i[8*(5+1)-1]}},mem_memrdata_i[8*(5+1)-1:8*5 ]};
                    end
                    3'b110:begin
                        mem_wdata_o         =       {{56{mem_memrdata_i[8*(6+1)-1]}},mem_memrdata_i[8*(6+1)-1:8*6 ]};
                    end
                    3'b111:begin
                        mem_wdata_o         =       {{56{mem_memrdata_i[8*(7+1)-1]}},mem_memrdata_i[8*(6+1)-1:8*6 ]};
                    end
                    default:begin
                        mem_wdata_o         =       `ysyx_22050058_ZeroWord;
                    end
                endcase
                
                
                mem_memaddr_o       =       mem_wdata_i;
                if(mem_memrdatavaild_i==`ysyx_22050058_MemReadVaild)begin
                    mem_stall_memreq_o  =   `ysyx_22050058_StallDisable;
                    mem_memre_o         =       `ysyx_22050058_ReadDisable;
                end else begin
                    mem_stall_memreq_o  =   `ysyx_22050058_StallEnable;
                    mem_memre_o         =       `ysyx_22050058_ReadEnable;
                end
            end
            `ysyx_22050058_ALU_LH_OP : begin
                case(mem_wdata_i[2:0])
                    3'b000:begin
                        mem_wdata_o         =       {{48{mem_memrdata_i[8*(0+2)-1]}},mem_memrdata_i[8*(0+2)-1:8*0 ]};
                    end
                    3'b001:begin
                        mem_wdata_o         =       {{48{mem_memrdata_i[8*(1+2)-1]}},mem_memrdata_i[8*(1+2)-1:8*1 ]};
                    end
                    3'b010:begin
                        mem_wdata_o         =       {{48{mem_memrdata_i[8*(2+2)-1]}},mem_memrdata_i[8*(2+2)-1:8*2 ]};
                    end
                    3'b011:begin
                        mem_wdata_o         =       {{48{mem_memrdata_i[8*(3+2)-1]}},mem_memrdata_i[8*(3+2)-1:8*3 ]};
                    end
                    3'b100:begin
                        mem_wdata_o         =       {{48{mem_memrdata_i[8*(4+2)-1]}},mem_memrdata_i[8*(4+2)-1:8*4 ]};
                    end
                    3'b101:begin
                        mem_wdata_o         =       {{48{mem_memrdata_i[8*(5+2)-1]}},mem_memrdata_i[8*(5+2)-1:8*5 ]};
                    end
                    3'b110:begin
                        mem_wdata_o         =       {{48{mem_memrdata_i[8*(6+2)-1]}},mem_memrdata_i[8*(6+2)-1:8*6 ]};
                    end
                    default:begin
                        mem_wdata_o         =       `ysyx_22050058_ZeroWord;
                    end
                endcase
                
                mem_memaddr_o       =       mem_wdata_i;
                if(mem_memrdatavaild_i==`ysyx_22050058_MemReadVaild)begin
                    mem_stall_memreq_o  =   `ysyx_22050058_StallDisable;
                    mem_memre_o         =       `ysyx_22050058_ReadDisable;
                end else begin
                    mem_stall_memreq_o  =   `ysyx_22050058_StallEnable;
                    mem_memre_o         =       `ysyx_22050058_ReadEnable;
                end
            end
            `ysyx_22050058_ALU_LW_OP : begin
                case(mem_wdata_i[2:0])
                    3'b000:begin
                        mem_wdata_o         =       {{32{mem_memrdata_i[8*(0+4)-1]}},mem_memrdata_i[8*(0+4)-1:8*0 ]};
                    end
                    3'b001:begin
                        mem_wdata_o         =       {{32{mem_memrdata_i[8*(1+4)-1]}},mem_memrdata_i[8*(1+4)-1:8*1 ]};
                    end
                    3'b010:begin
                        mem_wdata_o         =       {{32{mem_memrdata_i[8*(2+4)-1]}},mem_memrdata_i[8*(2+4)-1:8*2 ]};
                    end
                    3'b011:begin
                        mem_wdata_o         =       {{32{mem_memrdata_i[8*(3+4)-1]}},mem_memrdata_i[8*(3+4)-1:8*3 ]};
                    end
                    3'b100:begin
                        mem_wdata_o         =       {{32{mem_memrdata_i[8*(4+4)-1]}},mem_memrdata_i[8*(4+4)-1:8*4 ]};
                    end
                    default:begin
                        mem_wdata_o         =       `ysyx_22050058_ZeroWord;
                    end
                endcase
                
                mem_memaddr_o       =       mem_wdata_i;
                if(mem_memrdatavaild_i==`ysyx_22050058_MemReadVaild)begin
                    mem_stall_memreq_o  =   `ysyx_22050058_StallDisable;
                    mem_memre_o         =       `ysyx_22050058_ReadDisable;
                end else begin
                    mem_stall_memreq_o  =   `ysyx_22050058_StallEnable;
                    mem_memre_o         =       `ysyx_22050058_ReadEnable;
                end
            end
            `ysyx_22050058_ALU_LD_OP : begin
                mem_wdata_o         =       mem_memrdata_i;
                
                mem_memaddr_o       =       mem_wdata_i;
                if(mem_memrdatavaild_i==`ysyx_22050058_MemReadVaild)begin
                    mem_stall_memreq_o  =   `ysyx_22050058_StallDisable;
                    mem_memre_o         =       `ysyx_22050058_ReadDisable;
                end else begin
                    mem_stall_memreq_o  =   `ysyx_22050058_StallEnable;
                    mem_memre_o         =       `ysyx_22050058_ReadEnable;
                end
            end
            `ysyx_22050058_ALU_LBU_OP : begin
                case(mem_wdata_i[2:0])
                    3'b000:begin
                        mem_wdata_o         =       {{48{1'b0}},mem_memrdata_i[8*(0+1)-1:8*0 ]};
                    end
                    3'b001:begin
                        mem_wdata_o         =       {{56{1'b0}},mem_memrdata_i[8*(1+1)-1:8*1 ]};
                    end
                    3'b010:begin
                        mem_wdata_o         =       {{56{1'b0}},mem_memrdata_i[8*(2+1)-1:8*2 ]};
                    end
                    3'b011:begin
                        mem_wdata_o         =       {{56{1'b0}},mem_memrdata_i[8*(3+1)-1:8*3 ]};
                    end
                    3'b100:begin
                        mem_wdata_o         =       {{56{1'b0}},mem_memrdata_i[8*(4+1)-1:8*4 ]};
                    end
                    3'b101:begin
                        mem_wdata_o         =       {{56{1'b0}},mem_memrdata_i[8*(5+1)-1:8*5 ]};
                    end
                    3'b110:begin
                        mem_wdata_o         =       {{56{1'b0}},mem_memrdata_i[8*(6+1)-1:8*6 ]};
                    end
                    3'b111:begin
                        mem_wdata_o         =       {{56{1'b0}},mem_memrdata_i[8*(7+1)-1:8*7 ]};
                    end
                    default:begin
                        mem_wdata_o         =       `ysyx_22050058_ZeroWord;
                    end
                endcase
                
                mem_memaddr_o       =       mem_wdata_i;
                if(mem_memrdatavaild_i==`ysyx_22050058_MemReadVaild)begin
                    mem_stall_memreq_o  =   `ysyx_22050058_StallDisable;
                    mem_memre_o         =       `ysyx_22050058_ReadDisable;
                end else begin
                    mem_stall_memreq_o  =   `ysyx_22050058_StallEnable;
                    mem_memre_o         =       `ysyx_22050058_ReadEnable;
                end
            end
            `ysyx_22050058_ALU_LHU_OP : begin
                case(mem_wdata_i[2:0])
                    3'b000:begin
                        mem_wdata_o         =       {{48{1'b0}},mem_memrdata_i[8*(0+2)-1:8*0 ]};
                    end
                    3'b001:begin
                        mem_wdata_o         =       {{48{1'b0}},mem_memrdata_i[8*(1+2)-1:8*1 ]};
                    end
                    3'b010:begin
                        mem_wdata_o         =       {{48{1'b0}},mem_memrdata_i[8*(2+2)-1:8*2 ]};
                    end
                    3'b011:begin
                        mem_wdata_o         =       {{48{1'b0}},mem_memrdata_i[8*(3+2)-1:8*3 ]};
                    end
                    3'b100:begin
                        mem_wdata_o         =       {{48{1'b0}},mem_memrdata_i[8*(4+2)-1:8*4 ]};
                    end
                    3'b101:begin
                        mem_wdata_o         =       {{48{1'b0}},mem_memrdata_i[8*(5+2)-1:8*5 ]};
                    end
                    3'b110:begin
                        mem_wdata_o         =       {{48{1'b0}},mem_memrdata_i[8*(6+2)-1:8*6 ]};
                    end
                    default:begin
                        mem_wdata_o         =       `ysyx_22050058_ZeroWord;
                    end
                endcase
               
                mem_memaddr_o       =       mem_wdata_i;
                if(mem_memrdatavaild_i==`ysyx_22050058_MemReadVaild)begin
                    mem_stall_memreq_o  =   `ysyx_22050058_StallDisable;
                    mem_memre_o         =       `ysyx_22050058_ReadDisable;
                end else begin
                    mem_stall_memreq_o  =   `ysyx_22050058_StallEnable;
                    mem_memre_o         =       `ysyx_22050058_ReadEnable;
                end
            end
            `ysyx_22050058_ALU_LWU_OP : begin
                case(mem_wdata_i[2:0])
                    3'b000:begin
                        mem_wdata_o         =       {{32{1'b0}},mem_memrdata_i[8*(0+4)-1:8*0 ]};
                    end
                    3'b001:begin
                        mem_wdata_o         =       {{32{1'b0}},mem_memrdata_i[8*(1+4)-1:8*1 ]};
                    end
                    3'b010:begin
                        mem_wdata_o         =       {{32{1'b0}},mem_memrdata_i[8*(2+4)-1:8*2 ]};
                    end
                    3'b011:begin
                        mem_wdata_o         =       {{32{1'b0}},mem_memrdata_i[8*(3+4)-1:8*3 ]};
                    end
                    3'b100:begin
                        mem_wdata_o         =       {{32{1'b0}},mem_memrdata_i[8*(4+4)-1:8*4 ]};
                    end
                    default:begin
                        mem_wdata_o         =       `ysyx_22050058_ZeroWord;
                    end
                endcase
                
                mem_memaddr_o       =       mem_wdata_i;
                if(mem_memrdatavaild_i==`ysyx_22050058_MemReadVaild)begin
                    mem_stall_memreq_o  =   `ysyx_22050058_StallDisable;
                    mem_memre_o         =       `ysyx_22050058_ReadDisable;
                end else begin
                    mem_stall_memreq_o  =   `ysyx_22050058_StallEnable;
                    mem_memre_o         =       `ysyx_22050058_ReadEnable;
                end
            end
            `ysyx_22050058_ALU_SB_OP : begin
                mem_memwdata_o      =       mem_wdata_i[7:0];
                //mem_memwe_o         =   `ysyx_22050058_StoreSelBusNum'b00000001;
                mem_memaddr_o       =       mem_reg_waddr_i;
                if(mem_memwdatavaild_i==`ysyx_22050058_MemWriteVaild)begin
                    mem_stall_memreq_o  =   `ysyx_22050058_StallDisable;
                    mem_memwe_o         =   `ysyx_22050058_StoreSelBusNum'b00000000;
                end else begin
                    mem_stall_memreq_o  =   `ysyx_22050058_StallEnable;
                    case(mem_memaddr_o[2:0])
                        3'b000:begin
                            mem_memwe_o         =       `ysyx_22050058_StoreSelBusNum'b00000001;
                        end
                        3'b001:begin
                            mem_memwe_o         =       `ysyx_22050058_StoreSelBusNum'b00000010;
                        end
                        3'b010:begin
                            mem_memwe_o         =       `ysyx_22050058_StoreSelBusNum'b00000100;
                        end
                        3'b011:begin
                            mem_memwe_o         =       `ysyx_22050058_StoreSelBusNum'b00001000;
                        end
                        3'b100:begin
                            mem_memwe_o         =       `ysyx_22050058_StoreSelBusNum'b00010000;
                        end
                        3'b101:begin
                            mem_memwe_o         =       `ysyx_22050058_StoreSelBusNum'b00100000;
                        end
                        3'b110:begin
                            mem_memwe_o         =       `ysyx_22050058_StoreSelBusNum'b01000000;
                        end
                        3'b111:begin
                            mem_memwe_o         =       `ysyx_22050058_StoreSelBusNum'b10000000;
                        end
                        default:begin
                        end
                    endcase
                end
            end
            `ysyx_22050058_ALU_SH_OP : begin
                mem_memwdata_o      =       mem_wdata_i[15:0];
                //mem_memwe_o         =       `ysyx_22050058_StoreSelBusNum'b00000011;
                mem_memaddr_o       =       mem_reg_waddr_i;
                if(mem_memwdatavaild_i==`ysyx_22050058_MemWriteVaild)begin
                    mem_stall_memreq_o  =   `ysyx_22050058_StallDisable;
                    mem_memwe_o         =   `ysyx_22050058_StoreSelBusNum'b00000000;
                end else begin
                    mem_stall_memreq_o  =   `ysyx_22050058_StallEnable;
                    case(mem_memaddr_o[2:0])
                        3'b000:begin
                            mem_memwe_o         =       `ysyx_22050058_StoreSelBusNum'b00000011;
                        end
                        3'b010:begin
                            mem_memwe_o         =       `ysyx_22050058_StoreSelBusNum'b00001100;
                        end
                        3'b100:begin
                            mem_memwe_o         =       `ysyx_22050058_StoreSelBusNum'b00110000;
                        end
                        3'b110:begin
                            mem_memwe_o         =       `ysyx_22050058_StoreSelBusNum'b11000000;
                        end
                        default:begin
                        end
                    endcase
                end
            end
            `ysyx_22050058_ALU_SW_OP : begin
                mem_memwdata_o      =       mem_wdata_i[31:0];
                //mem_memwe_o         =       `ysyx_22050058_StoreSelBusNum'b00001111;
                mem_memaddr_o       =       mem_reg_waddr_i;
                if(mem_memwdatavaild_i==`ysyx_22050058_MemWriteVaild)begin
                    mem_stall_memreq_o  =   `ysyx_22050058_StallDisable;
                    mem_memwe_o         =   `ysyx_22050058_StoreSelBusNum'b00000000;
                end else begin
                    mem_stall_memreq_o  =   `ysyx_22050058_StallEnable;
                    case(mem_memaddr_o[2:0])
                        3'b000:begin
                            mem_memwe_o         =       `ysyx_22050058_StoreSelBusNum'b00001111;
                        end
                        3'b100:begin
                            mem_memwe_o         =       `ysyx_22050058_StoreSelBusNum'b11110000;
                        end
                        default:begin
                        end
                    endcase
                    
                end
            end
            `ysyx_22050058_ALU_SD_OP : begin
                mem_memwdata_o      =       mem_wdata_i;
                //mem_memwe_o         =       `ysyx_22050058_StoreSelBusNum'b11111111;
                mem_memaddr_o       =       mem_reg_waddr_i;
                if(mem_memwdatavaild_i==`ysyx_22050058_MemWriteVaild)begin
                    mem_stall_memreq_o  =   `ysyx_22050058_StallDisable;
                    mem_memwe_o         =   `ysyx_22050058_StoreSelBusNum'b00000000;
                end else begin
                    mem_stall_memreq_o  =   `ysyx_22050058_StallEnable;
                    mem_memwe_o         =       `ysyx_22050058_StoreSelBusNum'b11111111;
                end
            end
            default:begin
            end
        endcase
    end

endmodule
