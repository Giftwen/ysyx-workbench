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
        tracep->declBit(c+220,"clk", false,-1);
        tracep->declBit(c+221,"rst", false,-1);
        tracep->declBit(c+220,"ysyx_22050058_top clk", false,-1);
        tracep->declBit(c+221,"ysyx_22050058_top rst", false,-1);
        tracep->declBit(c+1,"ysyx_22050058_top ce", false,-1);
        tracep->declQuad(c+2,"ysyx_22050058_top pc", false,-1, 63,0);
        tracep->declQuad(c+4,"ysyx_22050058_top thispc", false,-1, 63,0);
        tracep->declBus(c+6,"ysyx_22050058_top inst", false,-1, 31,0);
        tracep->declBit(c+7,"ysyx_22050058_top dpic_stop", false,-1);
        tracep->declBus(c+217,"ysyx_22050058_top stall", false,-1, 5,0);
        tracep->declBus(c+218,"ysyx_22050058_top flush", false,-1, 5,0);
        tracep->declQuad(c+8,"ysyx_22050058_top memrdata_w", false,-1, 63,0);
        tracep->declBit(c+10,"ysyx_22050058_top memrdatavaild_w", false,-1);
        tracep->declBit(c+11,"ysyx_22050058_top memwdatavaild_w", false,-1);
        tracep->declBit(c+12,"ysyx_22050058_top memre_w", false,-1);
        tracep->declBus(c+13,"ysyx_22050058_top memwe_w", false,-1, 7,0);
        tracep->declQuad(c+14,"ysyx_22050058_top memaddr_w", false,-1, 63,0);
        tracep->declQuad(c+16,"ysyx_22050058_top memwdata_o", false,-1, 63,0);
        tracep->declBit(c+220,"ysyx_22050058_top ysyx_22050058_inst_rom_u0 clk", false,-1);
        tracep->declBit(c+221,"ysyx_22050058_top ysyx_22050058_inst_rom_u0 rst", false,-1);
        tracep->declBit(c+1,"ysyx_22050058_top ysyx_22050058_inst_rom_u0 ce", false,-1);
        tracep->declBus(c+217,"ysyx_22050058_top ysyx_22050058_inst_rom_u0 stall", false,-1, 5,0);
        tracep->declBus(c+218,"ysyx_22050058_top ysyx_22050058_inst_rom_u0 flush", false,-1, 5,0);
        tracep->declQuad(c+2,"ysyx_22050058_top ysyx_22050058_inst_rom_u0 addr", false,-1, 63,0);
        tracep->declQuad(c+4,"ysyx_22050058_top ysyx_22050058_inst_rom_u0 thispc", false,-1, 63,0);
        tracep->declBus(c+6,"ysyx_22050058_top ysyx_22050058_inst_rom_u0 inst", false,-1, 31,0);
        tracep->declQuad(c+18,"ysyx_22050058_top ysyx_22050058_inst_rom_u0 inst_line", false,-1, 63,0);
        tracep->declBit(c+220,"ysyx_22050058_top ysyx_22050058_data_rom_u0 clk", false,-1);
        tracep->declBit(c+221,"ysyx_22050058_top ysyx_22050058_data_rom_u0 rst", false,-1);
        tracep->declBit(c+1,"ysyx_22050058_top ysyx_22050058_data_rom_u0 ce", false,-1);
        tracep->declBit(c+12,"ysyx_22050058_top ysyx_22050058_data_rom_u0 memre_i", false,-1);
        tracep->declBus(c+13,"ysyx_22050058_top ysyx_22050058_data_rom_u0 memwe_i", false,-1, 7,0);
        tracep->declQuad(c+14,"ysyx_22050058_top ysyx_22050058_data_rom_u0 memaddr_i", false,-1, 63,0);
        tracep->declQuad(c+16,"ysyx_22050058_top ysyx_22050058_data_rom_u0 memwdata_i", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_22050058_top ysyx_22050058_data_rom_u0 memrdata_o", false,-1, 63,0);
        tracep->declBit(c+10,"ysyx_22050058_top ysyx_22050058_data_rom_u0 memrdatavaild_o", false,-1);
        tracep->declBit(c+11,"ysyx_22050058_top ysyx_22050058_data_rom_u0 memwdatavaild_o", false,-1);
        tracep->declQuad(c+20,"ysyx_22050058_top ysyx_22050058_data_rom_u0 data_line1", false,-1, 63,0);
        tracep->declQuad(c+22,"ysyx_22050058_top ysyx_22050058_data_rom_u0 data_line2", false,-1, 63,0);
        tracep->declBus(c+24,"ysyx_22050058_top ysyx_22050058_data_rom_u0 data_mask", false,-1, 7,0);
        tracep->declQuad(c+25,"ysyx_22050058_top ysyx_22050058_data_rom_u0 data_addr", false,-1, 63,0);
        tracep->declBit(c+220,"ysyx_22050058_top ysyx_22050058_pipeline_u0 clk", false,-1);
        tracep->declBit(c+221,"ysyx_22050058_top ysyx_22050058_pipeline_u0 rst", false,-1);
        tracep->declQuad(c+4,"ysyx_22050058_top ysyx_22050058_pipeline_u0 pipeline_thispc_i", false,-1, 63,0);
        tracep->declBus(c+6,"ysyx_22050058_top ysyx_22050058_pipeline_u0 pipeline_inst_i", false,-1, 31,0);
        tracep->declBit(c+1,"ysyx_22050058_top ysyx_22050058_pipeline_u0 pipeline_ce_o", false,-1);
        tracep->declQuad(c+2,"ysyx_22050058_top ysyx_22050058_pipeline_u0 pipeline_pc_o", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_22050058_top ysyx_22050058_pipeline_u0 pipeline_memrdata_i", false,-1, 63,0);
        tracep->declBit(c+10,"ysyx_22050058_top ysyx_22050058_pipeline_u0 pipeline_memrdatavaild_i", false,-1);
        tracep->declBit(c+11,"ysyx_22050058_top ysyx_22050058_pipeline_u0 pipeline_memwdatavaild_i", false,-1);
        tracep->declBit(c+12,"ysyx_22050058_top ysyx_22050058_pipeline_u0 pipeline_memre_o", false,-1);
        tracep->declBus(c+13,"ysyx_22050058_top ysyx_22050058_pipeline_u0 pipeline_memwe_o", false,-1, 7,0);
        tracep->declQuad(c+14,"ysyx_22050058_top ysyx_22050058_pipeline_u0 pipeline_memaddr_o", false,-1, 63,0);
        tracep->declQuad(c+16,"ysyx_22050058_top ysyx_22050058_pipeline_u0 pipeline_memwdata_o", false,-1, 63,0);
        tracep->declBus(c+217,"ysyx_22050058_top ysyx_22050058_pipeline_u0 stall", false,-1, 5,0);
        tracep->declBus(c+218,"ysyx_22050058_top ysyx_22050058_pipeline_u0 flush", false,-1, 5,0);
        tracep->declBit(c+7,"ysyx_22050058_top ysyx_22050058_pipeline_u0 pipeline_dpic_stop_o", false,-1);
        tracep->declBit(c+27,"ysyx_22050058_top ysyx_22050058_pipeline_u0 stall_exreq_w", false,-1);
        tracep->declBit(c+28,"ysyx_22050058_top ysyx_22050058_pipeline_u0 stall_idreq_w", false,-1);
        tracep->declBit(c+29,"ysyx_22050058_top ysyx_22050058_pipeline_u0 isjump_w", false,-1);
        tracep->declQuad(c+30,"ysyx_22050058_top ysyx_22050058_pipeline_u0 jumpaddr_w", false,-1, 63,0);
        tracep->declBus(c+32,"ysyx_22050058_top ysyx_22050058_pipeline_u0 id_inst_r", false,-1, 31,0);
        tracep->declQuad(c+33,"ysyx_22050058_top ysyx_22050058_pipeline_u0 id_pc_r", false,-1, 63,0);
        tracep->declQuad(c+35,"ysyx_22050058_top ysyx_22050058_pipeline_u0 id_dnpc_r", false,-1, 63,0);
        tracep->declQuad(c+222,"ysyx_22050058_top ysyx_22050058_pipeline_u0 id_reg1_rdata_r", false,-1, 63,0);
        tracep->declQuad(c+224,"ysyx_22050058_top ysyx_22050058_pipeline_u0 id_reg2_rdata_r", false,-1, 63,0);
        tracep->declBit(c+37,"ysyx_22050058_top ysyx_22050058_pipeline_u0 id_reg1_re_w", false,-1);
        tracep->declBit(c+38,"ysyx_22050058_top ysyx_22050058_pipeline_u0 id_reg2_re_w", false,-1);
        tracep->declQuad(c+39,"ysyx_22050058_top ysyx_22050058_pipeline_u0 id_reg1_raddr_w", false,-1, 63,0);
        tracep->declQuad(c+41,"ysyx_22050058_top ysyx_22050058_pipeline_u0 id_reg2_raddr_w", false,-1, 63,0);
        tracep->declQuad(c+33,"ysyx_22050058_top ysyx_22050058_pipeline_u0 id_pc_w", false,-1, 63,0);
        tracep->declQuad(c+35,"ysyx_22050058_top ysyx_22050058_pipeline_u0 id_dnpc_w", false,-1, 63,0);
        tracep->declBit(c+43,"ysyx_22050058_top ysyx_22050058_pipeline_u0 id_dpicstop_w", false,-1);
        tracep->declBus(c+44,"ysyx_22050058_top ysyx_22050058_pipeline_u0 id_aluop_w", false,-1, 7,0);
        tracep->declBus(c+45,"ysyx_22050058_top ysyx_22050058_pipeline_u0 id_alusel_w", false,-1, 2,0);
        tracep->declQuad(c+226,"ysyx_22050058_top ysyx_22050058_pipeline_u0 id_op1_wdata_w", false,-1, 63,0);
        tracep->declQuad(c+228,"ysyx_22050058_top ysyx_22050058_pipeline_u0 id_op2_wdata_w", false,-1, 63,0);
        tracep->declQuad(c+46,"ysyx_22050058_top ysyx_22050058_pipeline_u0 id_op3_wdata_w", false,-1, 63,0);
        tracep->declQuad(c+48,"ysyx_22050058_top ysyx_22050058_pipeline_u0 id_reg_waddr_w", false,-1, 63,0);
        tracep->declBit(c+50,"ysyx_22050058_top ysyx_22050058_pipeline_u0 id_we_w", false,-1);
        tracep->declBit(c+51,"ysyx_22050058_top ysyx_22050058_pipeline_u0 id_instvalid_w", false,-1);
        tracep->declQuad(c+52,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ex_pc_r", false,-1, 63,0);
        tracep->declQuad(c+54,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ex_dnpc_r", false,-1, 63,0);
        tracep->declBit(c+56,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ex_dpicstop_r", false,-1);
        tracep->declBus(c+57,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ex_aluop_r", false,-1, 7,0);
        tracep->declBus(c+58,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ex_alusel_r", false,-1, 2,0);
        tracep->declQuad(c+59,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ex_op1_wdata_r", false,-1, 63,0);
        tracep->declQuad(c+61,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ex_op2_wdata_r", false,-1, 63,0);
        tracep->declQuad(c+63,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ex_op3_wdata_r", false,-1, 63,0);
        tracep->declQuad(c+65,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ex_reg_waddr_r", false,-1, 63,0);
        tracep->declBit(c+67,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ex_we_r", false,-1);
        tracep->declBit(c+68,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ex_instvalid_r", false,-1);
        tracep->declBus(c+57,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ex_aluop_w", false,-1, 7,0);
        tracep->declQuad(c+52,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ex_pc_w", false,-1, 63,0);
        tracep->declQuad(c+69,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ex_dnpc_w", false,-1, 63,0);
        tracep->declBit(c+56,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ex_dpicstop_w", false,-1);
        tracep->declBit(c+68,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ex_instvalid_w", false,-1);
        tracep->declBus(c+230,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ex_aluop_o_w", false,-1, 7,0);
        tracep->declQuad(c+71,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ex_reg_waddr_w", false,-1, 63,0);
        tracep->declBit(c+67,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ex_we_w", false,-1);
        tracep->declQuad(c+73,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ex_wdata_w", false,-1, 63,0);
        tracep->declQuad(c+75,"ysyx_22050058_top ysyx_22050058_pipeline_u0 mem_pc_r", false,-1, 63,0);
        tracep->declQuad(c+77,"ysyx_22050058_top ysyx_22050058_pipeline_u0 mem_dnpc_r", false,-1, 63,0);
        tracep->declBit(c+79,"ysyx_22050058_top ysyx_22050058_pipeline_u0 mem_dpicstop_r", false,-1);
        tracep->declBus(c+80,"ysyx_22050058_top ysyx_22050058_pipeline_u0 mem_aluop_r", false,-1, 7,0);
        tracep->declBit(c+81,"ysyx_22050058_top ysyx_22050058_pipeline_u0 mem_instvalid_r", false,-1);
        tracep->declQuad(c+82,"ysyx_22050058_top ysyx_22050058_pipeline_u0 mem_reg_waddr_r", false,-1, 63,0);
        tracep->declBit(c+84,"ysyx_22050058_top ysyx_22050058_pipeline_u0 mem_we_r", false,-1);
        tracep->declQuad(c+85,"ysyx_22050058_top ysyx_22050058_pipeline_u0 mem_wdata_r", false,-1, 63,0);
        tracep->declBit(c+87,"ysyx_22050058_top ysyx_22050058_pipeline_u0 mem_stall_memreq_w", false,-1);
        tracep->declQuad(c+75,"ysyx_22050058_top ysyx_22050058_pipeline_u0 mem_pc_w", false,-1, 63,0);
        tracep->declQuad(c+77,"ysyx_22050058_top ysyx_22050058_pipeline_u0 mem_dnpc_w", false,-1, 63,0);
        tracep->declBit(c+79,"ysyx_22050058_top ysyx_22050058_pipeline_u0 mem_dpicstop_w", false,-1);
        tracep->declBit(c+81,"ysyx_22050058_top ysyx_22050058_pipeline_u0 mem_instvalid_w", false,-1);
        tracep->declQuad(c+82,"ysyx_22050058_top ysyx_22050058_pipeline_u0 mem_reg_waddr_w", false,-1, 63,0);
        tracep->declBit(c+84,"ysyx_22050058_top ysyx_22050058_pipeline_u0 mem_we_w", false,-1);
        tracep->declQuad(c+88,"ysyx_22050058_top ysyx_22050058_pipeline_u0 mem_wdata_w", false,-1, 63,0);
        tracep->declQuad(c+90,"ysyx_22050058_top ysyx_22050058_pipeline_u0 wb_pc_r", false,-1, 63,0);
        tracep->declQuad(c+92,"ysyx_22050058_top ysyx_22050058_pipeline_u0 wb_dnpc_r", false,-1, 63,0);
        tracep->declBit(c+7,"ysyx_22050058_top ysyx_22050058_pipeline_u0 wb_dpicstop_r", false,-1);
        tracep->declBit(c+94,"ysyx_22050058_top ysyx_22050058_pipeline_u0 wb_instvalid_r", false,-1);
        tracep->declQuad(c+95,"ysyx_22050058_top ysyx_22050058_pipeline_u0 wb_reg_waddr_r", false,-1, 63,0);
        tracep->declBit(c+97,"ysyx_22050058_top ysyx_22050058_pipeline_u0 wb_we_r", false,-1);
        tracep->declQuad(c+98,"ysyx_22050058_top ysyx_22050058_pipeline_u0 wb_wdata_r", false,-1, 63,0);
        tracep->declBit(c+220,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_pc_reg_u0 clk", false,-1);
        tracep->declBit(c+221,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_pc_reg_u0 rst", false,-1);
        tracep->declBit(c+29,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_pc_reg_u0 isjump", false,-1);
        tracep->declQuad(c+30,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_pc_reg_u0 jumpaddr", false,-1, 63,0);
        tracep->declBus(c+217,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_pc_reg_u0 stall", false,-1, 5,0);
        tracep->declQuad(c+2,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_pc_reg_u0 pc", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_pc_reg_u0 ce", false,-1);
        tracep->declBit(c+221,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ctrl_u0 rst", false,-1);
        tracep->declBit(c+28,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ctrl_u0 ctrl_stall_idreq_i", false,-1);
        tracep->declBit(c+27,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ctrl_u0 ctrl_stall_exreq_i", false,-1);
        tracep->declBit(c+87,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ctrl_u0 ctrl_stall_memreq_i", false,-1);
        tracep->declBit(c+29,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ctrl_u0 ctrl_ex_isjump", false,-1);
        tracep->declBus(c+217,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ctrl_u0 stall", false,-1, 5,0);
        tracep->declBus(c+218,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ctrl_u0 flush", false,-1, 5,0);
        tracep->declBit(c+220,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_if_id_u0 clk", false,-1);
        tracep->declBit(c+221,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_if_id_u0 rst", false,-1);
        tracep->declQuad(c+4,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_if_id_u0 if_pc_i", false,-1, 63,0);
        tracep->declQuad(c+2,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_if_id_u0 if_dnpc_i", false,-1, 63,0);
        tracep->declBus(c+6,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_if_id_u0 if_inst_i", false,-1, 31,0);
        tracep->declBus(c+217,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_if_id_u0 stall", false,-1, 5,0);
        tracep->declBus(c+218,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_if_id_u0 flush", false,-1, 5,0);
        tracep->declQuad(c+33,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_if_id_u0 id_pc_o", false,-1, 63,0);
        tracep->declQuad(c+35,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_if_id_u0 id_dnpc_o", false,-1, 63,0);
        tracep->declBus(c+32,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_if_id_u0 id_inst_o", false,-1, 31,0);
        tracep->declBit(c+220,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_regfile clk", false,-1);
        tracep->declBit(c+221,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_regfile rst", false,-1);
        tracep->declBit(c+97,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_regfile we_i", false,-1);
        tracep->declQuad(c+95,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_regfile waddr_i", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_regfile wdata_i", false,-1, 63,0);
        tracep->declBit(c+37,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_regfile re1_i", false,-1);
        tracep->declQuad(c+39,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_regfile raddr1_i", false,-1, 63,0);
        tracep->declQuad(c+222,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_regfile rdata1_o", false,-1, 63,0);
        tracep->declBit(c+38,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_regfile re2_i", false,-1);
        tracep->declQuad(c+41,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_regfile raddr2_i", false,-1, 63,0);
        tracep->declQuad(c+224,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_regfile rdata2_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+100+i*2,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_regfile gprs", true,(i+0), 63,0);}}
        tracep->declQuad(c+33,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_pc_i", false,-1, 63,0);
        tracep->declQuad(c+35,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_dnpc_i", false,-1, 63,0);
        tracep->declBus(c+32,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_inst_i", false,-1, 31,0);
        tracep->declQuad(c+222,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_reg1_rdata_i", false,-1, 63,0);
        tracep->declQuad(c+224,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_reg2_rdata_i", false,-1, 63,0);
        tracep->declBit(c+37,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_reg1_re_o", false,-1);
        tracep->declBit(c+38,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_reg2_re_o", false,-1);
        tracep->declQuad(c+39,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_reg1_raddr_o", false,-1, 63,0);
        tracep->declQuad(c+41,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_reg2_raddr_o", false,-1, 63,0);
        tracep->declBit(c+28,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_stall_idreq_o", false,-1);
        tracep->declQuad(c+33,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_pc_o", false,-1, 63,0);
        tracep->declQuad(c+35,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_dnpc_o", false,-1, 63,0);
        tracep->declBit(c+43,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_dpicstop_o", false,-1);
        tracep->declBus(c+44,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_aluop_o", false,-1, 7,0);
        tracep->declBus(c+45,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_alusel_o", false,-1, 2,0);
        tracep->declQuad(c+226,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_op1_wdata_o", false,-1, 63,0);
        tracep->declQuad(c+228,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_op2_wdata_o", false,-1, 63,0);
        tracep->declQuad(c+46,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_op3_wdata_o", false,-1, 63,0);
        tracep->declQuad(c+48,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_reg_waddr_o", false,-1, 63,0);
        tracep->declBit(c+50,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_we_o", false,-1);
        tracep->declBit(c+51,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_instvalid_o", false,-1);
        tracep->declBus(c+58,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_ex_alusel_i", false,-1, 2,0);
        tracep->declQuad(c+71,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_ex_reg_waddr_i", false,-1, 63,0);
        tracep->declBit(c+67,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_ex_we_i", false,-1);
        tracep->declQuad(c+73,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_ex_wdata_i", false,-1, 63,0);
        tracep->declQuad(c+82,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_mem_reg_waddr_i", false,-1, 63,0);
        tracep->declBit(c+84,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_mem_we_i", false,-1);
        tracep->declQuad(c+88,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_mem_wdata_i", false,-1, 63,0);
        tracep->declBus(c+164,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 opcode", false,-1, 6,0);
        tracep->declBus(c+165,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 funct3", false,-1, 2,0);
        tracep->declBus(c+166,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 funct6", false,-1, 6,0);
        tracep->declBus(c+167,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 funct7", false,-1, 6,0);
        tracep->declBus(c+168,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 funct12", false,-1, 6,0);
        tracep->declBus(c+169,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 rd", false,-1, 4,0);
        tracep->declBus(c+170,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 zimm", false,-1, 4,0);
        tracep->declBus(c+170,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 rs1", false,-1, 4,0);
        tracep->declBus(c+171,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 rs2", false,-1, 4,0);
        tracep->declBus(c+172,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 shamt", false,-1, 5,0);
        tracep->declQuad(c+173,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_Simm", false,-1, 63,0);
        tracep->declQuad(c+175,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_Bimm", false,-1, 63,0);
        tracep->declQuad(c+177,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_JALimm", false,-1, 63,0);
        tracep->declQuad(c+179,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_JALRimm", false,-1, 63,0);
        tracep->declQuad(c+181,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_imm", false,-1, 63,0);
        tracep->declBit(c+183,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_id_u0 id_preinstisload", false,-1);
        tracep->declBit(c+220,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 clk", false,-1);
        tracep->declBit(c+221,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 rst", false,-1);
        tracep->declQuad(c+52,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_pc_i", false,-1, 63,0);
        tracep->declQuad(c+54,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_dnpc_i", false,-1, 63,0);
        tracep->declBit(c+56,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_dpicstop_i", false,-1);
        tracep->declBit(c+68,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_instvalid_i", false,-1);
        tracep->declBus(c+57,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_aluop_i", false,-1, 7,0);
        tracep->declBus(c+58,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_alusel_i", false,-1, 2,0);
        tracep->declQuad(c+59,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_op1_wdata_i", false,-1, 63,0);
        tracep->declQuad(c+61,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_op2_wdata_i", false,-1, 63,0);
        tracep->declQuad(c+63,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_op3_wdata_i", false,-1, 63,0);
        tracep->declQuad(c+65,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_reg_waddr_i", false,-1, 63,0);
        tracep->declBit(c+67,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_we_i", false,-1);
        tracep->declBus(c+217,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 stall", false,-1, 5,0);
        tracep->declBit(c+27,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_stall_exreq_o", false,-1);
        tracep->declBit(c+29,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_isjump_o", false,-1);
        tracep->declQuad(c+30,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_jumpaddr_o", false,-1, 63,0);
        tracep->declQuad(c+52,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_pc_o", false,-1, 63,0);
        tracep->declQuad(c+69,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_dnpc_o", false,-1, 63,0);
        tracep->declBit(c+56,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_dpicstop_o", false,-1);
        tracep->declBus(c+57,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_aluop_o", false,-1, 7,0);
        tracep->declBit(c+68,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_instvalid_o", false,-1);
        tracep->declQuad(c+71,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_reg_waddr_o", false,-1, 63,0);
        tracep->declBit(c+67,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_we_o", false,-1);
        tracep->declQuad(c+73,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_wdata_o", false,-1, 63,0);
        tracep->declQuad(c+184,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 arithmeticres", false,-1, 63,0);
        tracep->declQuad(c+186,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 logices", false,-1, 63,0);
        tracep->declQuad(c+188,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 memaddr", false,-1, 63,0);
        tracep->declQuad(c+190,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_wdata_r", false,-1, 63,0);
        tracep->declQuad(c+192,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_op1_mul_r", false,-1, 63,0);
        tracep->declQuad(c+194,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_op1_divrem_r", false,-1, 63,0);
        tracep->declQuad(c+196,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_op2_mul_r", false,-1, 63,0);
        tracep->declQuad(c+198,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_op2_divrem_r", false,-1, 63,0);
        tracep->declArray(c+200,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 arithmeticres_mul_w", false,-1, 127,0);
        tracep->declQuad(c+204,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 arithmeticres_div_w", false,-1, 63,0);
        tracep->declQuad(c+206,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 arithmeticres_rem_w", false,-1, 63,0);
        tracep->declBit(c+208,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_div_valid_w", false,-1);
        tracep->declBit(c+209,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_is_divrem_r", false,-1);
        tracep->declBit(c+210,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_div_doing_r", false,-1);
        tracep->declBit(c+211,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ex_div_qrvalid_r", false,-1);
        tracep->declBus(c+231,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ysyx_22050058_div_u0 WIDTH", false,-1, 31,0);
        tracep->declBit(c+220,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ysyx_22050058_div_u0 clk", false,-1);
        tracep->declBit(c+221,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ysyx_22050058_div_u0 rst", false,-1);
        tracep->declBit(c+219,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ysyx_22050058_div_u0 div_ready", false,-1);
        tracep->declBit(c+208,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ysyx_22050058_div_u0 div_datavalid_i", false,-1);
        tracep->declQuad(c+194,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ysyx_22050058_div_u0 div_dividend_i", false,-1, 63,0);
        tracep->declQuad(c+198,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ysyx_22050058_div_u0 div_divisor_i", false,-1, 63,0);
        tracep->declBit(c+210,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ysyx_22050058_div_u0 div_doing_o", false,-1);
        tracep->declBit(c+211,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ysyx_22050058_div_u0 div_qrvalid_o", false,-1);
        tracep->declQuad(c+204,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ysyx_22050058_div_u0 div_quotient_o", false,-1, 63,0);
        tracep->declQuad(c+206,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ysyx_22050058_div_u0 div_remainder_o", false,-1, 63,0);
        tracep->declBit(c+212,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ysyx_22050058_div_u0 div_qrvalid_r", false,-1);
        tracep->declQuad(c+213,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ysyx_22050058_div_u0 div_quotiento_r", false,-1, 63,0);
        tracep->declQuad(c+215,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_ex_u0 ysyx_22050058_div_u0 div_remaindero_r", false,-1, 63,0);
        tracep->declQuad(c+75,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_pc_i", false,-1, 63,0);
        tracep->declQuad(c+77,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_dnpc_i", false,-1, 63,0);
        tracep->declBit(c+79,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_dpicstop_i", false,-1);
        tracep->declBit(c+81,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_instvalid_i", false,-1);
        tracep->declBus(c+80,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_aluop_i", false,-1, 7,0);
        tracep->declQuad(c+82,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_reg_waddr_i", false,-1, 63,0);
        tracep->declBit(c+84,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_we_i", false,-1);
        tracep->declQuad(c+85,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_wdata_i", false,-1, 63,0);
        tracep->declBit(c+87,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_stall_memreq_o", false,-1);
        tracep->declQuad(c+8,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_memrdata_i", false,-1, 63,0);
        tracep->declBit(c+10,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_memrdatavaild_i", false,-1);
        tracep->declBit(c+11,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_memwdatavaild_i", false,-1);
        tracep->declBit(c+12,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_memre_o", false,-1);
        tracep->declBus(c+13,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_memwe_o", false,-1, 7,0);
        tracep->declQuad(c+14,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_memaddr_o", false,-1, 63,0);
        tracep->declQuad(c+16,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_memwdata_o", false,-1, 63,0);
        tracep->declQuad(c+75,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_pc_o", false,-1, 63,0);
        tracep->declQuad(c+77,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_dnpc_o", false,-1, 63,0);
        tracep->declBit(c+79,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_dpicstop_o", false,-1);
        tracep->declBit(c+81,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_instvalid_o", false,-1);
        tracep->declQuad(c+82,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_reg_waddr_o", false,-1, 63,0);
        tracep->declBit(c+84,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_we_o", false,-1);
        tracep->declQuad(c+88,"ysyx_22050058_top ysyx_22050058_pipeline_u0 ysyx_22050058_mem mem_wdata_o", false,-1, 63,0);
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
        tracep->fullBit(oldp+7,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_dpicstop_r));
        tracep->fullQData(oldp+8,(vlSelf->ysyx_22050058_top__DOT__memrdata_w),64);
        tracep->fullBit(oldp+10,(vlSelf->ysyx_22050058_top__DOT__memrdatavaild_w));
        tracep->fullBit(oldp+11,(vlSelf->ysyx_22050058_top__DOT__memwdatavaild_w));
        tracep->fullBit(oldp+12,(vlSelf->ysyx_22050058_top__DOT__memre_w));
        tracep->fullCData(oldp+13,(vlSelf->ysyx_22050058_top__DOT__memwe_w),8);
        tracep->fullQData(oldp+14,(vlSelf->ysyx_22050058_top__DOT__memaddr_w),64);
        tracep->fullQData(oldp+16,(vlSelf->ysyx_22050058_top__DOT__memwdata_o),64);
        tracep->fullQData(oldp+18,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_inst_rom_u0__DOT__inst_line),64);
        tracep->fullQData(oldp+20,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_data_rom_u0__DOT__data_line1),64);
        tracep->fullQData(oldp+22,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_data_rom_u0__DOT__data_line2),64);
        tracep->fullCData(oldp+24,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_data_rom_u0__DOT__data_mask),8);
        tracep->fullQData(oldp+25,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_data_rom_u0__DOT__data_addr),64);
        tracep->fullBit(oldp+27,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__stall_exreq_w));
        tracep->fullBit(oldp+28,(((((3U == (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_alusel_r)) 
                                    & ((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_reg_waddr_w 
                                        == vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_raddr_w) 
                                       | (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_reg_waddr_w 
                                          == vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_raddr_w))) 
                                   & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_re_w)) 
                                  & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_we_r))));
        tracep->fullBit(oldp+29,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__isjump_w));
        tracep->fullQData(oldp+30,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__jumpaddr_w),64);
        tracep->fullIData(oldp+32,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r),32);
        tracep->fullQData(oldp+33,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_pc_r),64);
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_dnpc_r),64);
        tracep->fullBit(oldp+37,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_re_w));
        tracep->fullBit(oldp+38,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_re_w));
        tracep->fullQData(oldp+39,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_raddr_w),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_raddr_w),64);
        tracep->fullBit(oldp+43,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_dpicstop_w));
        tracep->fullCData(oldp+44,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_aluop_w),8);
        tracep->fullCData(oldp+45,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_alusel_w),3);
        tracep->fullQData(oldp+46,(((0x23U == (0x7fU 
                                               & vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r))
                                     ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_id_u0__DOT__id_Simm
                                     : (((- (QData)((IData)(
                                                            (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0x800U 
                                                                      & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                                              >> 7U))))))))),64);
        tracep->fullQData(oldp+48,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg_waddr_w),64);
        tracep->fullBit(oldp+50,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_we_w));
        tracep->fullBit(oldp+51,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_instvalid_w));
        tracep->fullQData(oldp+52,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_pc_r),64);
        tracep->fullQData(oldp+54,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_dnpc_r),64);
        tracep->fullBit(oldp+56,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_dpicstop_r));
        tracep->fullCData(oldp+57,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_aluop_r),8);
        tracep->fullCData(oldp+58,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_alusel_r),3);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_op1_wdata_r),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_op2_wdata_r),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_op3_wdata_r),64);
        tracep->fullQData(oldp+65,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_reg_waddr_r),64);
        tracep->fullBit(oldp+67,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_we_r));
        tracep->fullBit(oldp+68,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_instvalid_r));
        tracep->fullQData(oldp+69,(((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__isjump_w)
                                     ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__jumpaddr_w
                                     : vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_dnpc_r)),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_reg_waddr_w),64);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_wdata_w),64);
        tracep->fullQData(oldp+75,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_pc_r),64);
        tracep->fullQData(oldp+77,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_dnpc_r),64);
        tracep->fullBit(oldp+79,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_dpicstop_r));
        tracep->fullCData(oldp+80,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_aluop_r),8);
        tracep->fullBit(oldp+81,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_instvalid_r));
        tracep->fullQData(oldp+82,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_reg_waddr_r),64);
        tracep->fullBit(oldp+84,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_we_r));
        tracep->fullQData(oldp+85,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_wdata_r),64);
        tracep->fullBit(oldp+87,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_stall_memreq_w));
        tracep->fullQData(oldp+88,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_wdata_w),64);
        tracep->fullQData(oldp+90,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_pc_r),64);
        tracep->fullQData(oldp+92,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_dnpc_r),64);
        tracep->fullBit(oldp+94,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_instvalid_r));
        tracep->fullQData(oldp+95,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_reg_waddr_r),64);
        tracep->fullBit(oldp+97,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_we_r));
        tracep->fullQData(oldp+98,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_wdata_r),64);
        tracep->fullQData(oldp+100,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[0]),64);
        tracep->fullQData(oldp+102,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[1]),64);
        tracep->fullQData(oldp+104,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[2]),64);
        tracep->fullQData(oldp+106,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[3]),64);
        tracep->fullQData(oldp+108,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[4]),64);
        tracep->fullQData(oldp+110,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[5]),64);
        tracep->fullQData(oldp+112,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[6]),64);
        tracep->fullQData(oldp+114,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[7]),64);
        tracep->fullQData(oldp+116,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[8]),64);
        tracep->fullQData(oldp+118,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[9]),64);
        tracep->fullQData(oldp+120,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[10]),64);
        tracep->fullQData(oldp+122,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[11]),64);
        tracep->fullQData(oldp+124,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[12]),64);
        tracep->fullQData(oldp+126,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[13]),64);
        tracep->fullQData(oldp+128,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[14]),64);
        tracep->fullQData(oldp+130,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[15]),64);
        tracep->fullQData(oldp+132,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[16]),64);
        tracep->fullQData(oldp+134,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[17]),64);
        tracep->fullQData(oldp+136,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[18]),64);
        tracep->fullQData(oldp+138,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[19]),64);
        tracep->fullQData(oldp+140,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[20]),64);
        tracep->fullQData(oldp+142,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[21]),64);
        tracep->fullQData(oldp+144,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[22]),64);
        tracep->fullQData(oldp+146,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[23]),64);
        tracep->fullQData(oldp+148,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[24]),64);
        tracep->fullQData(oldp+150,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[25]),64);
        tracep->fullQData(oldp+152,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[26]),64);
        tracep->fullQData(oldp+154,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[27]),64);
        tracep->fullQData(oldp+156,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[28]),64);
        tracep->fullQData(oldp+158,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[29]),64);
        tracep->fullQData(oldp+160,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[30]),64);
        tracep->fullQData(oldp+162,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[31]),64);
        tracep->fullCData(oldp+164,((0x7fU & vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r)),7);
        tracep->fullCData(oldp+165,((7U & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+166,((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                     >> 0x1aU)),7);
        tracep->fullCData(oldp+167,((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+168,((0x7fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                              >> 0x14U))),7);
        tracep->fullCData(oldp+169,((0x1fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                              >> 7U))),5);
        tracep->fullCData(oldp+170,((0x1fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+171,((0x1fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+172,((0x3fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                              >> 0x14U))),6);
        tracep->fullQData(oldp+173,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_id_u0__DOT__id_Simm),64);
        tracep->fullQData(oldp+175,((((- (QData)((IData)(
                                                         (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0x800U 
                                                                   & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                                      << 4U)) 
                                                                  | ((0x7e0U 
                                                                      & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                                         >> 0x14U)) 
                                                                     | (0x1eU 
                                                                        & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                                           >> 7U)))))))),64);
        tracep->fullQData(oldp+177,((((- (QData)((IData)(
                                                         (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                          >> 0x1fU)))) 
                                      << 0x14U) | (QData)((IData)(
                                                                  ((0xff000U 
                                                                    & vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                                            >> 0x14U)))))))),64);
        tracep->fullQData(oldp+179,((((- (QData)((IData)(
                                                         (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+181,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_id_u0__DOT__id_imm),64);
        tracep->fullBit(oldp+183,((3U == (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_alusel_r))));
        tracep->fullQData(oldp+184,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__arithmeticres),64);
        tracep->fullQData(oldp+186,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__logices),64);
        tracep->fullQData(oldp+188,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__memaddr),64);
        tracep->fullQData(oldp+190,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_wdata_r),64);
        tracep->fullQData(oldp+192,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_op1_mul_r),64);
        tracep->fullQData(oldp+194,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_op1_divrem_r),64);
        tracep->fullQData(oldp+196,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_op2_mul_r),64);
        tracep->fullQData(oldp+198,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_op2_divrem_r),64);
        tracep->fullWData(oldp+200,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__arithmeticres_mul_w),128);
        tracep->fullQData(oldp+204,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__arithmeticres_div_w),64);
        tracep->fullQData(oldp+206,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__arithmeticres_rem_w),64);
        tracep->fullBit(oldp+208,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_div_valid_w));
        tracep->fullBit(oldp+209,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_is_divrem_r));
        tracep->fullBit(oldp+210,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_div_doing_r));
        tracep->fullBit(oldp+211,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_div_qrvalid_r));
        tracep->fullBit(oldp+212,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ysyx_22050058_div_u0__DOT__div_qrvalid_r));
        tracep->fullQData(oldp+213,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ysyx_22050058_div_u0__DOT__div_quotiento_r),64);
        tracep->fullQData(oldp+215,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ysyx_22050058_div_u0__DOT__div_remaindero_r),64);
        tracep->fullCData(oldp+217,(vlSelf->ysyx_22050058_top__DOT__stall),6);
        tracep->fullCData(oldp+218,(vlSelf->ysyx_22050058_top__DOT__flush),6);
        tracep->fullBit(oldp+219,((1U & (~ ((IData)(vlSelf->ysyx_22050058_top__DOT__stall) 
                                            >> 3U)))));
        tracep->fullBit(oldp+220,(vlSelf->clk));
        tracep->fullBit(oldp+221,(vlSelf->rst));
        tracep->fullQData(oldp+222,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((0ULL 
                                                 == vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_raddr_w)
                                                 ? 0ULL
                                                 : 
                                                ((((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_raddr_w 
                                                    == vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_reg_waddr_r) 
                                                   & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_we_r)) 
                                                  & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_re_w))
                                                  ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_wdata_r
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_re_w)
                                                   ? 
                                                  vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs
                                                  [
                                                  (0x1fU 
                                                   & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_raddr_w))]
                                                   : 0ULL))))),64);
        tracep->fullQData(oldp+224,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((0ULL 
                                                 == vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_raddr_w)
                                                 ? 0ULL
                                                 : 
                                                ((((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_raddr_w 
                                                    == vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_reg_waddr_r) 
                                                   & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_we_r)) 
                                                  & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_re_w))
                                                  ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_wdata_r
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_re_w)
                                                   ? 
                                                  vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs
                                                  [
                                                  (0x1fU 
                                                   & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_raddr_w))]
                                                   : 0ULL))))),64);
        tracep->fullQData(oldp+226,(((((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_reg_waddr_w 
                                        == vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_raddr_w) 
                                       & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_re_w)) 
                                      & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_we_r))
                                      ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_wdata_w
                                      : ((((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_reg_waddr_r 
                                            == vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_raddr_w) 
                                           & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_re_w)) 
                                          & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_we_r))
                                          ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_wdata_w
                                          : ((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_re_w)
                                              ? ((IData)(vlSelf->rst)
                                                  ? 0ULL
                                                  : 
                                                 ((0ULL 
                                                   == vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_raddr_w)
                                                   ? 0ULL
                                                   : 
                                                  ((((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_raddr_w 
                                                      == vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_reg_waddr_r) 
                                                     & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_we_r)) 
                                                    & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_re_w))
                                                    ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_wdata_r
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_re_w)
                                                     ? 
                                                    vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs
                                                    [
                                                    (0x1fU 
                                                     & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_raddr_w))]
                                                     : 0ULL))))
                                              : ((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_re_w)
                                                  ? 0ULL
                                                  : vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_id_u0__DOT__id_imm))))),64);
        tracep->fullQData(oldp+228,(((((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_reg_waddr_w 
                                        == vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_raddr_w) 
                                       & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_re_w)) 
                                      & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_we_r))
                                      ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_wdata_w
                                      : ((((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_reg_waddr_r 
                                            == vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_raddr_w) 
                                           & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_re_w)) 
                                          & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_we_r))
                                          ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_wdata_w
                                          : ((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_re_w)
                                              ? ((IData)(vlSelf->rst)
                                                  ? 0ULL
                                                  : 
                                                 ((0ULL 
                                                   == vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_raddr_w)
                                                   ? 0ULL
                                                   : 
                                                  ((((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_raddr_w 
                                                      == vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_reg_waddr_r) 
                                                     & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_we_r)) 
                                                    & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_re_w))
                                                    ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_wdata_r
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_re_w)
                                                     ? 
                                                    vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs
                                                    [
                                                    (0x1fU 
                                                     & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_raddr_w))]
                                                     : 0ULL))))
                                              : ((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_re_w)
                                                  ? 0ULL
                                                  : vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_id_u0__DOT__id_imm))))),64);
        tracep->fullCData(oldp+230,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_aluop_o_w),8);
        tracep->fullIData(oldp+231,(0x40U),32);
    }
}
