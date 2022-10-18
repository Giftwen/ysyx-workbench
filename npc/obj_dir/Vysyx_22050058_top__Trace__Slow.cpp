// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22050058_top__Syms.h"


void Vysyx_22050058_top___024root__traceInitSub0(Vysyx_22050058_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22050058_top___024root__traceInitTop(Vysyx_22050058_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050058_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22050058_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22050058_top___024root__traceInitSub0(Vysyx_22050058_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050058_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+154,"clk", false,-1);
        tracep->declBit(c+155,"rst", false,-1);
        tracep->declBit(c+154,"ysyx_22050058_top clk", false,-1);
        tracep->declBit(c+155,"ysyx_22050058_top rst", false,-1);
        tracep->declBit(c+1,"ysyx_22050058_top ce", false,-1);
        tracep->declQuad(c+2,"ysyx_22050058_top pc", false,-1, 63,0);
        tracep->declQuad(c+4,"ysyx_22050058_top thispc", false,-1, 63,0);
        tracep->declBus(c+6,"ysyx_22050058_top inst", false,-1, 31,0);
        tracep->declBit(c+7,"ysyx_22050058_top dpic_stop", false,-1);
        tracep->declBus(c+156,"ysyx_22050058_top stall", false,-1, 5,0);
        tracep->declBus(c+157,"ysyx_22050058_top flush", false,-1, 5,0);
        tracep->declBit(c+154,"ysyx_22050058_top ysyx_22050058_inst_rom clk", false,-1);
        tracep->declBit(c+155,"ysyx_22050058_top ysyx_22050058_inst_rom rst", false,-1);
        tracep->declBit(c+1,"ysyx_22050058_top ysyx_22050058_inst_rom ce", false,-1);
        tracep->declBus(c+156,"ysyx_22050058_top ysyx_22050058_inst_rom stall", false,-1, 5,0);
        tracep->declBus(c+157,"ysyx_22050058_top ysyx_22050058_inst_rom flush", false,-1, 5,0);
        tracep->declQuad(c+2,"ysyx_22050058_top ysyx_22050058_inst_rom addr", false,-1, 63,0);
        tracep->declQuad(c+4,"ysyx_22050058_top ysyx_22050058_inst_rom thispc", false,-1, 63,0);
        tracep->declBus(c+6,"ysyx_22050058_top ysyx_22050058_inst_rom inst", false,-1, 31,0);
        tracep->declQuad(c+8,"ysyx_22050058_top ysyx_22050058_inst_rom inst_line", false,-1, 63,0);
        tracep->declBit(c+154,"ysyx_22050058_top ysyx_22050058_pipeline clk", false,-1);
        tracep->declBit(c+155,"ysyx_22050058_top ysyx_22050058_pipeline rst", false,-1);
        tracep->declQuad(c+4,"ysyx_22050058_top ysyx_22050058_pipeline pipeline_thispc_i", false,-1, 63,0);
        tracep->declBus(c+6,"ysyx_22050058_top ysyx_22050058_pipeline pipeline_inst_i", false,-1, 31,0);
        tracep->declBit(c+1,"ysyx_22050058_top ysyx_22050058_pipeline pipeline_ce_o", false,-1);
        tracep->declQuad(c+2,"ysyx_22050058_top ysyx_22050058_pipeline pipeline_pc_o", false,-1, 63,0);
        tracep->declBus(c+156,"ysyx_22050058_top ysyx_22050058_pipeline stall", false,-1, 5,0);
        tracep->declBus(c+157,"ysyx_22050058_top ysyx_22050058_pipeline flush", false,-1, 5,0);
        tracep->declBit(c+7,"ysyx_22050058_top ysyx_22050058_pipeline pipeline_dpic_stop_o", false,-1);
        tracep->declBit(c+166,"ysyx_22050058_top ysyx_22050058_pipeline stall_exreq_w", false,-1);
        tracep->declBit(c+167,"ysyx_22050058_top ysyx_22050058_pipeline stall_idreq_w", false,-1);
        tracep->declBit(c+10,"ysyx_22050058_top ysyx_22050058_pipeline isjump_w", false,-1);
        tracep->declQuad(c+11,"ysyx_22050058_top ysyx_22050058_pipeline jumpaddr_w", false,-1, 63,0);
        tracep->declBus(c+13,"ysyx_22050058_top ysyx_22050058_pipeline id_inst_r", false,-1, 31,0);
        tracep->declQuad(c+14,"ysyx_22050058_top ysyx_22050058_pipeline id_pc_r", false,-1, 63,0);
        tracep->declQuad(c+16,"ysyx_22050058_top ysyx_22050058_pipeline id_dnpc_r", false,-1, 63,0);
        tracep->declQuad(c+158,"ysyx_22050058_top ysyx_22050058_pipeline id_reg1_rdata_r", false,-1, 63,0);
        tracep->declQuad(c+160,"ysyx_22050058_top ysyx_22050058_pipeline id_reg2_rdata_r", false,-1, 63,0);
        tracep->declBit(c+18,"ysyx_22050058_top ysyx_22050058_pipeline id_reg1_re_w", false,-1);
        tracep->declBit(c+19,"ysyx_22050058_top ysyx_22050058_pipeline id_reg2_re_w", false,-1);
        tracep->declBus(c+20,"ysyx_22050058_top ysyx_22050058_pipeline id_reg1_raddr_w", false,-1, 4,0);
        tracep->declBus(c+21,"ysyx_22050058_top ysyx_22050058_pipeline id_reg2_raddr_w", false,-1, 4,0);
        tracep->declQuad(c+14,"ysyx_22050058_top ysyx_22050058_pipeline id_pc_w", false,-1, 63,0);
        tracep->declQuad(c+16,"ysyx_22050058_top ysyx_22050058_pipeline id_dnpc_w", false,-1, 63,0);
        tracep->declBit(c+22,"ysyx_22050058_top ysyx_22050058_pipeline id_dpicstop_w", false,-1);
        tracep->declBus(c+23,"ysyx_22050058_top ysyx_22050058_pipeline id_aluop_w", false,-1, 7,0);
        tracep->declBus(c+24,"ysyx_22050058_top ysyx_22050058_pipeline id_alusel_w", false,-1, 2,0);
        tracep->declQuad(c+162,"ysyx_22050058_top ysyx_22050058_pipeline id_op1_wdata_w", false,-1, 63,0);
        tracep->declQuad(c+164,"ysyx_22050058_top ysyx_22050058_pipeline id_op2_wdata_w", false,-1, 63,0);
        tracep->declQuad(c+25,"ysyx_22050058_top ysyx_22050058_pipeline id_op3_wdata_w", false,-1, 63,0);
        tracep->declBus(c+27,"ysyx_22050058_top ysyx_22050058_pipeline id_reg_waddr_w", false,-1, 4,0);
        tracep->declBit(c+28,"ysyx_22050058_top ysyx_22050058_pipeline id_we_w", false,-1);
        tracep->declBit(c+29,"ysyx_22050058_top ysyx_22050058_pipeline id_instvalid_w", false,-1);
        tracep->declQuad(c+30,"ysyx_22050058_top ysyx_22050058_pipeline ex_pc_r", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22050058_top ysyx_22050058_pipeline ex_dnpc_r", false,-1, 63,0);
        tracep->declBit(c+34,"ysyx_22050058_top ysyx_22050058_pipeline ex_dpicstop_r", false,-1);
        tracep->declBus(c+35,"ysyx_22050058_top ysyx_22050058_pipeline ex_aluop_r", false,-1, 7,0);
        tracep->declBus(c+36,"ysyx_22050058_top ysyx_22050058_pipeline ex_alusel_r", false,-1, 2,0);
        tracep->declQuad(c+37,"ysyx_22050058_top ysyx_22050058_pipeline ex_op1_wdata_r", false,-1, 63,0);
        tracep->declQuad(c+39,"ysyx_22050058_top ysyx_22050058_pipeline ex_op2_wdata_r", false,-1, 63,0);
        tracep->declQuad(c+41,"ysyx_22050058_top ysyx_22050058_pipeline ex_op3_wdata_r", false,-1, 63,0);
        tracep->declBus(c+43,"ysyx_22050058_top ysyx_22050058_pipeline ex_reg_waddr_r", false,-1, 4,0);
        tracep->declBit(c+44,"ysyx_22050058_top ysyx_22050058_pipeline ex_we_r", false,-1);
        tracep->declBit(c+45,"ysyx_22050058_top ysyx_22050058_pipeline ex_instvalid_r", false,-1);
        tracep->declQuad(c+30,"ysyx_22050058_top ysyx_22050058_pipeline ex_pc_w", false,-1, 63,0);
        tracep->declQuad(c+46,"ysyx_22050058_top ysyx_22050058_pipeline ex_dnpc_w", false,-1, 63,0);
        tracep->declBit(c+34,"ysyx_22050058_top ysyx_22050058_pipeline ex_dpicstop_w", false,-1);
        tracep->declBit(c+45,"ysyx_22050058_top ysyx_22050058_pipeline ex_instvalid_w", false,-1);
        tracep->declBus(c+43,"ysyx_22050058_top ysyx_22050058_pipeline ex_reg_waddr_w", false,-1, 4,0);
        tracep->declBit(c+44,"ysyx_22050058_top ysyx_22050058_pipeline ex_we_w", false,-1);
        tracep->declQuad(c+48,"ysyx_22050058_top ysyx_22050058_pipeline ex_wdata_w", false,-1, 63,0);
        tracep->declQuad(c+50,"ysyx_22050058_top ysyx_22050058_pipeline mem_pc_r", false,-1, 63,0);
        tracep->declQuad(c+52,"ysyx_22050058_top ysyx_22050058_pipeline mem_dnpc_r", false,-1, 63,0);
        tracep->declBit(c+54,"ysyx_22050058_top ysyx_22050058_pipeline mem_dpicstop_r", false,-1);
        tracep->declBit(c+55,"ysyx_22050058_top ysyx_22050058_pipeline mem_instvalid_r", false,-1);
        tracep->declBus(c+56,"ysyx_22050058_top ysyx_22050058_pipeline mem_reg_waddr_r", false,-1, 4,0);
        tracep->declBit(c+57,"ysyx_22050058_top ysyx_22050058_pipeline mem_we_r", false,-1);
        tracep->declQuad(c+58,"ysyx_22050058_top ysyx_22050058_pipeline mem_wdata_r", false,-1, 63,0);
        tracep->declQuad(c+50,"ysyx_22050058_top ysyx_22050058_pipeline mem_pc_w", false,-1, 63,0);
        tracep->declQuad(c+52,"ysyx_22050058_top ysyx_22050058_pipeline mem_dnpc_w", false,-1, 63,0);
        tracep->declBit(c+54,"ysyx_22050058_top ysyx_22050058_pipeline mem_dpicstop_w", false,-1);
        tracep->declBit(c+55,"ysyx_22050058_top ysyx_22050058_pipeline mem_instvalid_w", false,-1);
        tracep->declBus(c+56,"ysyx_22050058_top ysyx_22050058_pipeline mem_reg_waddr_w", false,-1, 4,0);
        tracep->declBit(c+57,"ysyx_22050058_top ysyx_22050058_pipeline mem_we_w", false,-1);
        tracep->declQuad(c+58,"ysyx_22050058_top ysyx_22050058_pipeline mem_wdata_w", false,-1, 63,0);
        tracep->declQuad(c+60,"ysyx_22050058_top ysyx_22050058_pipeline wb_pc_r", false,-1, 63,0);
        tracep->declQuad(c+62,"ysyx_22050058_top ysyx_22050058_pipeline wb_dnpc_r", false,-1, 63,0);
        tracep->declBit(c+7,"ysyx_22050058_top ysyx_22050058_pipeline wb_dpicstop_r", false,-1);
        tracep->declBit(c+64,"ysyx_22050058_top ysyx_22050058_pipeline wb_instvalid_r", false,-1);
        tracep->declBus(c+65,"ysyx_22050058_top ysyx_22050058_pipeline wb_reg_waddr_r", false,-1, 4,0);
        tracep->declBit(c+66,"ysyx_22050058_top ysyx_22050058_pipeline wb_we_r", false,-1);
        tracep->declQuad(c+67,"ysyx_22050058_top ysyx_22050058_pipeline wb_wdata_r", false,-1, 63,0);
        tracep->declBit(c+154,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_pc_reg_u0 clk", false,-1);
        tracep->declBit(c+155,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_pc_reg_u0 rst", false,-1);
        tracep->declBit(c+10,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_pc_reg_u0 isjump", false,-1);
        tracep->declQuad(c+11,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_pc_reg_u0 jumpaddr", false,-1, 63,0);
        tracep->declBus(c+156,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_pc_reg_u0 stall", false,-1, 5,0);
        tracep->declQuad(c+2,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_pc_reg_u0 pc", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_pc_reg_u0 ce", false,-1);
        tracep->declBit(c+155,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ctrl_u0 rst", false,-1);
        tracep->declBit(c+167,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ctrl_u0 ctrl_stall_idreq_i", false,-1);
        tracep->declBit(c+166,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ctrl_u0 ctrl_stall_exreq_i", false,-1);
        tracep->declBit(c+10,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ctrl_u0 ctrl_ex_isjump", false,-1);
        tracep->declBus(c+156,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ctrl_u0 stall", false,-1, 5,0);
        tracep->declBus(c+157,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ctrl_u0 flush", false,-1, 5,0);
        tracep->declBit(c+154,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_if_id_u0 clk", false,-1);
        tracep->declBit(c+155,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_if_id_u0 rst", false,-1);
        tracep->declQuad(c+4,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_if_id_u0 if_pc_i", false,-1, 63,0);
        tracep->declQuad(c+2,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_if_id_u0 if_dnpc_i", false,-1, 63,0);
        tracep->declBus(c+6,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_if_id_u0 if_inst_i", false,-1, 31,0);
        tracep->declBus(c+156,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_if_id_u0 stall", false,-1, 5,0);
        tracep->declBus(c+157,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_if_id_u0 flush", false,-1, 5,0);
        tracep->declQuad(c+14,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_if_id_u0 id_pc_o", false,-1, 63,0);
        tracep->declQuad(c+16,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_if_id_u0 id_dnpc_o", false,-1, 63,0);
        tracep->declBus(c+13,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_if_id_u0 id_inst_o", false,-1, 31,0);
        tracep->declBit(c+154,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_regfile clk", false,-1);
        tracep->declBit(c+155,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_regfile rst", false,-1);
        tracep->declBit(c+66,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_regfile we_i", false,-1);
        tracep->declBus(c+65,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_regfile waddr_i", false,-1, 4,0);
        tracep->declQuad(c+67,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_regfile wdata_i", false,-1, 63,0);
        tracep->declBit(c+18,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_regfile re1_i", false,-1);
        tracep->declBus(c+20,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_regfile raddr1_i", false,-1, 4,0);
        tracep->declQuad(c+158,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_regfile rdata1_o", false,-1, 63,0);
        tracep->declBit(c+19,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_regfile re2_i", false,-1);
        tracep->declBus(c+21,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_regfile raddr2_i", false,-1, 4,0);
        tracep->declQuad(c+160,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_regfile rdata2_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+69+i*2,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_regfile gprs", true,(i+0), 63,0);}}
        tracep->declQuad(c+14,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_pc_i", false,-1, 63,0);
        tracep->declQuad(c+16,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_dnpc_i", false,-1, 63,0);
        tracep->declBus(c+13,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_inst_i", false,-1, 31,0);
        tracep->declQuad(c+158,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_reg1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+160,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_reg2_rdata_i", false,-1, 63,0);
        tracep->declBit(c+18,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_reg1_re_o", false,-1);
        tracep->declBit(c+19,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_reg2_re_o", false,-1);
        tracep->declBus(c+20,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+21,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+167,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_stall_idreq_o", false,-1);
        tracep->declQuad(c+14,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_pc_o", false,-1, 63,0);
        tracep->declQuad(c+16,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_dnpc_o", false,-1, 63,0);
        tracep->declBit(c+22,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_dpicstop_o", false,-1);
        tracep->declBus(c+23,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_aluop_o", false,-1, 7,0);
        tracep->declBus(c+24,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_alusel_o", false,-1, 2,0);
        tracep->declQuad(c+162,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_op1_wdata_o", false,-1, 63,0);
        tracep->declQuad(c+164,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_op2_wdata_o", false,-1, 63,0);
        tracep->declQuad(c+25,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_op3_wdata_o", false,-1, 63,0);
        tracep->declBus(c+27,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+28,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_we_o", false,-1);
        tracep->declBit(c+29,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_instvalid_o", false,-1);
        tracep->declBus(c+43,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_ex_reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+44,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_ex_we_i", false,-1);
        tracep->declQuad(c+48,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_ex_wdata_i", false,-1, 63,0);
        tracep->declBus(c+56,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_mem_reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+57,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_mem_we_i", false,-1);
        tracep->declQuad(c+58,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_mem_wdata_i", false,-1, 63,0);
        tracep->declBus(c+133,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 opcode", false,-1, 6,0);
        tracep->declBus(c+134,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 funct3", false,-1, 2,0);
        tracep->declBus(c+135,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 funct6", false,-1, 6,0);
        tracep->declBus(c+136,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 funct7", false,-1, 6,0);
        tracep->declBus(c+137,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 funct12", false,-1, 6,0);
        tracep->declBus(c+138,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 rd", false,-1, 4,0);
        tracep->declBus(c+139,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 zimm", false,-1, 4,0);
        tracep->declBus(c+139,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 rs1", false,-1, 4,0);
        tracep->declBus(c+140,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 rs2", false,-1, 4,0);
        tracep->declBus(c+141,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 shamt", false,-1, 5,0);
        tracep->declQuad(c+25,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_Bimm", false,-1, 63,0);
        tracep->declQuad(c+142,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_JALimm", false,-1, 63,0);
        tracep->declQuad(c+144,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_JALRimm", false,-1, 63,0);
        tracep->declQuad(c+146,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_id_u0 id_imm", false,-1, 63,0);
        tracep->declQuad(c+30,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 ex_pc_i", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 ex_dnpc_i", false,-1, 63,0);
        tracep->declBit(c+34,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 ex_dpicstop_i", false,-1);
        tracep->declBit(c+45,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 ex_instvalid_i", false,-1);
        tracep->declBus(c+35,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 ex_aluop_i", false,-1, 7,0);
        tracep->declBus(c+36,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 ex_alusel_i", false,-1, 2,0);
        tracep->declQuad(c+37,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 ex_op1_wdata_i", false,-1, 63,0);
        tracep->declQuad(c+39,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 ex_op2_wdata_i", false,-1, 63,0);
        tracep->declQuad(c+41,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 ex_op3_wdata_i", false,-1, 63,0);
        tracep->declBus(c+43,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 ex_reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+44,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 ex_we_i", false,-1);
        tracep->declBit(c+166,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 ex_stall_exreq_o", false,-1);
        tracep->declBit(c+10,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 ex_isjump_o", false,-1);
        tracep->declQuad(c+11,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 ex_jumpaddr_o", false,-1, 63,0);
        tracep->declQuad(c+30,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 ex_pc_o", false,-1, 63,0);
        tracep->declQuad(c+46,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 ex_dnpc_o", false,-1, 63,0);
        tracep->declBit(c+34,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 ex_dpicstop_o", false,-1);
        tracep->declBit(c+45,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 ex_instvalid_o", false,-1);
        tracep->declBus(c+43,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 ex_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+44,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 ex_we_o", false,-1);
        tracep->declQuad(c+48,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 ex_wdata_o", false,-1, 63,0);
        tracep->declQuad(c+148,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 arithmeticres", false,-1, 63,0);
        tracep->declQuad(c+150,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 logices", false,-1, 63,0);
        tracep->declQuad(c+152,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_ex_u0 ex_wdata_r", false,-1, 63,0);
        tracep->declQuad(c+50,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_mem mem_pc_i", false,-1, 63,0);
        tracep->declQuad(c+52,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_mem mem_dnpc_i", false,-1, 63,0);
        tracep->declBit(c+54,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_mem mem_dpicstop_i", false,-1);
        tracep->declBit(c+55,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_mem mem_instvalid_i", false,-1);
        tracep->declBus(c+56,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_mem mem_reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+57,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_mem mem_we_i", false,-1);
        tracep->declQuad(c+58,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_mem mem_wdata_i", false,-1, 63,0);
        tracep->declQuad(c+50,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_mem mem_pc_o", false,-1, 63,0);
        tracep->declQuad(c+52,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_mem mem_dnpc_o", false,-1, 63,0);
        tracep->declBit(c+54,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_mem mem_dpicstop_o", false,-1);
        tracep->declBit(c+55,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_mem mem_instvalid_o", false,-1);
        tracep->declBus(c+56,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_mem mem_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+57,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_mem mem_we_o", false,-1);
        tracep->declQuad(c+58,"ysyx_22050058_top ysyx_22050058_pipeline ysyx_22050058_mem mem_wdata_o", false,-1, 63,0);
    }
}

void Vysyx_22050058_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22050058_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22050058_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22050058_top___024root__traceRegister(Vysyx_22050058_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050058_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22050058_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22050058_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22050058_top___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22050058_top___024root__traceFullSub0(Vysyx_22050058_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22050058_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22050058_top___024root* const __restrict vlSelf = static_cast<Vysyx_22050058_top___024root*>(voidSelf);
    Vysyx_22050058_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22050058_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22050058_top___024root__traceFullSub0(Vysyx_22050058_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050058_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->ysyx_22050058_top__DOT__ce));
        tracep->fullQData(oldp+2,(vlSelf->ysyx_22050058_top__DOT__pc),64);
        tracep->fullQData(oldp+4,(vlSelf->ysyx_22050058_top__DOT__thispc),64);
        tracep->fullIData(oldp+6,(vlSelf->ysyx_22050058_top__DOT__inst),32);
        tracep->fullBit(oldp+7,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_dpicstop_r));
        tracep->fullQData(oldp+8,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_inst_rom__DOT__inst_line),64);
        tracep->fullBit(oldp+10,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__isjump_w));
        tracep->fullQData(oldp+11,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__jumpaddr_w),64);
        tracep->fullIData(oldp+13,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r),32);
        tracep->fullQData(oldp+14,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_pc_r),64);
        tracep->fullQData(oldp+16,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_dnpc_r),64);
        tracep->fullBit(oldp+18,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg1_re_w));
        tracep->fullBit(oldp+19,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg2_re_w));
        tracep->fullCData(oldp+20,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg1_raddr_w),5);
        tracep->fullCData(oldp+21,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg2_raddr_w),5);
        tracep->fullBit(oldp+22,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_dpicstop_w));
        tracep->fullCData(oldp+23,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_aluop_w),8);
        tracep->fullCData(oldp+24,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_alusel_w),3);
        tracep->fullQData(oldp+25,((((- (QData)((IData)(
                                                        (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0x800U 
                                                                  & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                                                          >> 7U)))))))),64);
        tracep->fullCData(oldp+27,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg_waddr_w),5);
        tracep->fullBit(oldp+28,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_we_w));
        tracep->fullBit(oldp+29,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_instvalid_w));
        tracep->fullQData(oldp+30,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_pc_r),64);
        tracep->fullQData(oldp+32,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_dnpc_r),64);
        tracep->fullBit(oldp+34,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_dpicstop_r));
        tracep->fullCData(oldp+35,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_aluop_r),8);
        tracep->fullCData(oldp+36,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_alusel_r),3);
        tracep->fullQData(oldp+37,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_op1_wdata_r),64);
        tracep->fullQData(oldp+39,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_op2_wdata_r),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_op3_wdata_r),64);
        tracep->fullCData(oldp+43,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_reg_waddr_r),5);
        tracep->fullBit(oldp+44,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_we_r));
        tracep->fullBit(oldp+45,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_instvalid_r));
        tracep->fullQData(oldp+46,(((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__isjump_w)
                                     ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__jumpaddr_w
                                     : vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_dnpc_r)),64);
        tracep->fullQData(oldp+48,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_wdata_w),64);
        tracep->fullQData(oldp+50,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__mem_pc_r),64);
        tracep->fullQData(oldp+52,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__mem_dnpc_r),64);
        tracep->fullBit(oldp+54,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__mem_dpicstop_r));
        tracep->fullBit(oldp+55,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__mem_instvalid_r));
        tracep->fullCData(oldp+56,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__mem_reg_waddr_r),5);
        tracep->fullBit(oldp+57,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__mem_we_r));
        tracep->fullQData(oldp+58,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__mem_wdata_r),64);
        tracep->fullQData(oldp+60,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_pc_r),64);
        tracep->fullQData(oldp+62,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_dnpc_r),64);
        tracep->fullBit(oldp+64,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_instvalid_r));
        tracep->fullCData(oldp+65,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_reg_waddr_r),5);
        tracep->fullBit(oldp+66,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_we_r));
        tracep->fullQData(oldp+67,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_wdata_r),64);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[0]),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[1]),64);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[2]),64);
        tracep->fullQData(oldp+75,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[3]),64);
        tracep->fullQData(oldp+77,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[4]),64);
        tracep->fullQData(oldp+79,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[5]),64);
        tracep->fullQData(oldp+81,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[6]),64);
        tracep->fullQData(oldp+83,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[7]),64);
        tracep->fullQData(oldp+85,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[8]),64);
        tracep->fullQData(oldp+87,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[9]),64);
        tracep->fullQData(oldp+89,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[10]),64);
        tracep->fullQData(oldp+91,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[11]),64);
        tracep->fullQData(oldp+93,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[12]),64);
        tracep->fullQData(oldp+95,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[13]),64);
        tracep->fullQData(oldp+97,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[14]),64);
        tracep->fullQData(oldp+99,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[15]),64);
        tracep->fullQData(oldp+101,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[16]),64);
        tracep->fullQData(oldp+103,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[17]),64);
        tracep->fullQData(oldp+105,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[18]),64);
        tracep->fullQData(oldp+107,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[19]),64);
        tracep->fullQData(oldp+109,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[20]),64);
        tracep->fullQData(oldp+111,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[21]),64);
        tracep->fullQData(oldp+113,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[22]),64);
        tracep->fullQData(oldp+115,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[23]),64);
        tracep->fullQData(oldp+117,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[24]),64);
        tracep->fullQData(oldp+119,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[25]),64);
        tracep->fullQData(oldp+121,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[26]),64);
        tracep->fullQData(oldp+123,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[27]),64);
        tracep->fullQData(oldp+125,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[28]),64);
        tracep->fullQData(oldp+127,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[29]),64);
        tracep->fullQData(oldp+129,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[30]),64);
        tracep->fullQData(oldp+131,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[31]),64);
        tracep->fullCData(oldp+133,((0x7fU & vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r)),7);
        tracep->fullCData(oldp+134,((7U & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+135,((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                     >> 0x1aU)),7);
        tracep->fullCData(oldp+136,((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+137,((0x7fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                              >> 0x14U))),7);
        tracep->fullCData(oldp+138,((0x1fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                              >> 7U))),5);
        tracep->fullCData(oldp+139,((0x1fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+140,((0x1fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+141,((0x3fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                              >> 0x14U))),6);
        tracep->fullQData(oldp+142,((((- (QData)((IData)(
                                                         (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                                          >> 0x1fU)))) 
                                      << 0x14U) | (QData)((IData)(
                                                                  ((0xff000U 
                                                                    & vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                                                            >> 0x14U)))))))),64);
        tracep->fullQData(oldp+144,((((- (QData)((IData)(
                                                         (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+146,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_id_u0__DOT__id_imm),64);
        tracep->fullQData(oldp+148,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_ex_u0__DOT__arithmeticres),64);
        tracep->fullQData(oldp+150,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_ex_u0__DOT__logices),64);
        tracep->fullQData(oldp+152,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_ex_u0__DOT__ex_wdata_r),64);
        tracep->fullBit(oldp+154,(vlSelf->clk));
        tracep->fullBit(oldp+155,(vlSelf->rst));
        tracep->fullCData(oldp+156,(vlSelf->ysyx_22050058_top__DOT__stall),6);
        tracep->fullCData(oldp+157,(vlSelf->ysyx_22050058_top__DOT__flush),6);
        tracep->fullQData(oldp+158,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((0U 
                                                 == (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg1_raddr_w))
                                                 ? 0ULL
                                                 : 
                                                (((((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg1_raddr_w) 
                                                    == (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_reg_waddr_r)) 
                                                   & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_we_r)) 
                                                  & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg1_re_w))
                                                  ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_wdata_r
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg1_re_w)
                                                   ? 
                                                  vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs
                                                  [vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg1_raddr_w]
                                                   : 0ULL))))),64);
        tracep->fullQData(oldp+160,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((0U 
                                                 == (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg2_raddr_w))
                                                 ? 0ULL
                                                 : 
                                                (((((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg2_raddr_w) 
                                                    == (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_reg_waddr_r)) 
                                                   & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_we_r)) 
                                                  & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg2_re_w))
                                                  ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_wdata_r
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg2_re_w)
                                                   ? 
                                                  vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs
                                                  [vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg2_raddr_w]
                                                   : 0ULL))))),64);
        tracep->fullQData(oldp+162,((((((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_reg_waddr_r) 
                                        == (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg1_raddr_w)) 
                                       & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg1_re_w)) 
                                      & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_we_r))
                                      ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_wdata_w
                                      : (((((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__mem_reg_waddr_r) 
                                            == (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg1_raddr_w)) 
                                           & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg1_re_w)) 
                                          & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__mem_we_r))
                                          ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__mem_wdata_r
                                          : ((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg1_re_w)
                                              ? ((IData)(vlSelf->rst)
                                                  ? 0ULL
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg1_raddr_w))
                                                   ? 0ULL
                                                   : 
                                                  (((((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg1_raddr_w) 
                                                      == (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_reg_waddr_r)) 
                                                     & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_we_r)) 
                                                    & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg1_re_w))
                                                    ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_wdata_r
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg1_re_w)
                                                     ? 
                                                    vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs
                                                    [vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg1_raddr_w]
                                                     : 0ULL))))
                                              : ((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg1_re_w)
                                                  ? 0ULL
                                                  : vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_id_u0__DOT__id_imm))))),64);
        tracep->fullQData(oldp+164,((((((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_reg_waddr_r) 
                                        == (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg2_raddr_w)) 
                                       & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg2_re_w)) 
                                      & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_we_r))
                                      ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_wdata_w
                                      : (((((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__mem_reg_waddr_r) 
                                            == (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg2_raddr_w)) 
                                           & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg2_re_w)) 
                                          & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__mem_we_r))
                                          ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__mem_wdata_r
                                          : ((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg2_re_w)
                                              ? ((IData)(vlSelf->rst)
                                                  ? 0ULL
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg2_raddr_w))
                                                   ? 0ULL
                                                   : 
                                                  (((((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg2_raddr_w) 
                                                      == (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_reg_waddr_r)) 
                                                     & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_we_r)) 
                                                    & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg2_re_w))
                                                    ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_wdata_r
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg2_re_w)
                                                     ? 
                                                    vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs
                                                    [vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg2_raddr_w]
                                                     : 0ULL))))
                                              : ((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg2_re_w)
                                                  ? 0ULL
                                                  : vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_id_u0__DOT__id_imm))))),64);
        tracep->fullBit(oldp+166,(0U));
        tracep->fullBit(oldp+167,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__stall_idreq_w));
    }
}
