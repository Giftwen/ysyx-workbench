// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22050058_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22050058_TOP___024ROOT_H_
#define VERILATED_VYSYX_22050058_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22050058_top__Syms;
class Vysyx_22050058_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22050058_top___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ ysyx_22050058_top__DOT__ce;
        CData/*5:0*/ ysyx_22050058_top__DOT__stall;
        CData/*5:0*/ ysyx_22050058_top__DOT__flush;
        CData/*0:0*/ ysyx_22050058_top__DOT__memrdatavaild_w;
        CData/*0:0*/ ysyx_22050058_top__DOT__memwdatavaild_w;
        CData/*0:0*/ ysyx_22050058_top__DOT__memre_w;
        CData/*7:0*/ ysyx_22050058_top__DOT__memwe_w;
        CData/*7:0*/ ysyx_22050058_top__DOT__ysyx_22050058_data_rom_u0__DOT__data_mask;
        CData/*0:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__isjump_w;
        CData/*0:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_re_w;
        CData/*0:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_re_w;
        CData/*0:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_dpicstop_w;
        CData/*7:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_aluop_w;
        CData/*2:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_alusel_w;
        CData/*0:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_we_w;
        CData/*0:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_instvalid_w;
        CData/*0:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_dpicstop_r;
        CData/*7:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_aluop_r;
        CData/*2:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_alusel_r;
        CData/*0:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_we_r;
        CData/*0:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_instvalid_r;
        CData/*7:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_aluop_o_w;
        CData/*0:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_dpicstop_r;
        CData/*7:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_aluop_r;
        CData/*0:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_instvalid_r;
        CData/*0:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_we_r;
        CData/*0:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_stall_memreq_w;
        CData/*0:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_dpicstop_r;
        CData/*0:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_instvalid_r;
        CData/*0:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_we_r;
        IData/*31:0*/ ysyx_22050058_top__DOT__inst;
        IData/*31:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r;
        QData/*63:0*/ ysyx_22050058_top__DOT__pc;
        QData/*63:0*/ ysyx_22050058_top__DOT__thispc;
        QData/*63:0*/ ysyx_22050058_top__DOT__memrdata_w;
        QData/*63:0*/ ysyx_22050058_top__DOT__memaddr_w;
        QData/*63:0*/ ysyx_22050058_top__DOT__memwdata_o;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_inst_rom_u0__DOT__inst_line;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_data_rom_u0__DOT__data_line1;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_data_rom_u0__DOT__data_line2;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_data_rom_u0__DOT__data_addr;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__jumpaddr_w;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_pc_r;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_dnpc_r;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_raddr_w;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_raddr_w;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg_waddr_w;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_pc_r;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_dnpc_r;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_op1_wdata_r;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_op2_wdata_r;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_op3_wdata_r;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_reg_waddr_r;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_reg_waddr_w;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_wdata_w;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_pc_r;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_dnpc_r;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_reg_waddr_r;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_wdata_r;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_wdata_w;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_pc_r;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_dnpc_r;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_reg_waddr_r;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_wdata_r;
    };
    struct {
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_id_u0__DOT__id_Simm;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_id_u0__DOT__id_imm;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__arithmeticres;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__logices;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__memaddr;
        QData/*63:0*/ ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_wdata_r;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_22050058_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22050058_top___024root);  ///< Copying not allowed
  public:
    Vysyx_22050058_top___024root(const char* name);
    ~Vysyx_22050058_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22050058_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
