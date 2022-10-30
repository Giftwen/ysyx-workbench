// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050058_top.h for the primary calling header

#include "Vysyx_22050058_top___024root.h"
#include "Vysyx_22050058_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vysyx_22050058_top___024root___combo__TOP__6(Vysyx_22050058_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050058_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050058_top___024root___combo__TOP__6\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_22050058_top__DOT__flush = 0U;
        vlSelf->ysyx_22050058_top__DOT__stall = 0U;
    } else {
        vlSelf->ysyx_22050058_top__DOT__flush = ((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__isjump_w)
                                                  ? 7U
                                                  : 0U);
        vlSelf->ysyx_22050058_top__DOT__stall = ((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_stall_memreq_w)
                                                  ? 0x1fU
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__stall_exreq_w)
                                                   ? 0xfU
                                                   : 
                                                  (((((3U 
                                                       == (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_alusel_r)) 
                                                      & ((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_reg_waddr_w 
                                                          == vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_raddr_w) 
                                                         | (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_reg_waddr_w 
                                                            == vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_raddr_w))) 
                                                     & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_re_w)) 
                                                    & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_we_r))
                                                    ? 7U
                                                    : 0U)));
    }
}

void Vysyx_22050058_top___024root___sequent__TOP__2(Vysyx_22050058_top___024root* vlSelf);
void Vysyx_22050058_top___024root___sequent__TOP__3(Vysyx_22050058_top___024root* vlSelf);
void Vysyx_22050058_top___024root___sequent__TOP__4(Vysyx_22050058_top___024root* vlSelf);

void Vysyx_22050058_top___024root___eval(Vysyx_22050058_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050058_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050058_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22050058_top___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vysyx_22050058_top___024root___sequent__TOP__3(vlSelf);
        Vysyx_22050058_top___024root___sequent__TOP__4(vlSelf);
    }
    Vysyx_22050058_top___024root___combo__TOP__6(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vysyx_22050058_top___024root___change_request_1(Vysyx_22050058_top___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22050058_top___024root___change_request(Vysyx_22050058_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050058_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050058_top___024root___change_request\n"); );
    // Body
    return (Vysyx_22050058_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22050058_top___024root___change_request_1(Vysyx_22050058_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050058_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050058_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22050058_top___024root___eval_debug_assertions(Vysyx_22050058_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050058_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050058_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
