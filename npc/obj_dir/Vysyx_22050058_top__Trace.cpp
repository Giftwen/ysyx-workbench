// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22050058_top__Syms.h"


void Vysyx_22050058_top___024root__traceChgSub0(Vysyx_22050058_top___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22050058_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22050058_top___024root* const __restrict vlSelf = static_cast<Vysyx_22050058_top___024root*>(voidSelf);
    Vysyx_22050058_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22050058_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22050058_top___024root__traceChgSub0(Vysyx_22050058_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050058_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->ysyx_22050058_top__DOT__ce));
            tracep->chgQData(oldp+1,(vlSelf->ysyx_22050058_top__DOT__pc),64);
            tracep->chgIData(oldp+3,(((IData)(vlSelf->ysyx_22050058_top__DOT__ce)
                                       ? ((0x10c5U 
                                           >= (0x1fffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22050058_top__DOT__pc 
                                                          >> 2U))))
                                           ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_inst_rom__DOT__inst_mem
                                          [(0x1fffU 
                                            & (IData)(
                                                      (vlSelf->ysyx_22050058_top__DOT__pc 
                                                       >> 2U)))]
                                           : 0U) : 0U)),32);
            tracep->chgBit(oldp+4,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_dpicstop_r));
            tracep->chgBit(oldp+5,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__isjump_w));
            tracep->chgQData(oldp+6,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__jumpaddr_w),64);
            tracep->chgIData(oldp+8,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r),32);
            tracep->chgQData(oldp+9,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_pc_r),64);
            tracep->chgBit(oldp+11,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg1_re_w));
            tracep->chgBit(oldp+12,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg2_re_w));
            tracep->chgCData(oldp+13,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg1_raddr_w),5);
            tracep->chgCData(oldp+14,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg2_raddr_w),5);
            tracep->chgBit(oldp+15,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_dpicstop_w));
            tracep->chgCData(oldp+16,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_aluop_w),8);
            tracep->chgCData(oldp+17,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_alusel_w),3);
            tracep->chgQData(oldp+18,((((- (QData)((IData)(
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
            tracep->chgCData(oldp+20,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg_waddr_w),5);
            tracep->chgBit(oldp+21,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_we_w));
            tracep->chgQData(oldp+22,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_pc_r),64);
            tracep->chgBit(oldp+24,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_dpicstop_r));
            tracep->chgCData(oldp+25,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_aluop_r),8);
            tracep->chgCData(oldp+26,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_alusel_r),3);
            tracep->chgQData(oldp+27,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_op1_wdata_r),64);
            tracep->chgQData(oldp+29,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_op2_wdata_r),64);
            tracep->chgQData(oldp+31,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_op3_wdata_r),64);
            tracep->chgCData(oldp+33,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_reg_waddr_r),5);
            tracep->chgBit(oldp+34,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_we_r));
            tracep->chgQData(oldp+35,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_wdata_w),64);
            tracep->chgQData(oldp+37,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__mem_pc_r),64);
            tracep->chgBit(oldp+39,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__mem_dpicstop_r));
            tracep->chgCData(oldp+40,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__mem_reg_waddr_r),5);
            tracep->chgBit(oldp+41,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__mem_we_r));
            tracep->chgQData(oldp+42,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__mem_wdata_r),64);
            tracep->chgQData(oldp+44,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_pc_r),64);
            tracep->chgCData(oldp+46,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_reg_waddr_r),5);
            tracep->chgBit(oldp+47,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_we_r));
            tracep->chgQData(oldp+48,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__wb_wdata_r),64);
            tracep->chgQData(oldp+50,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[0]),64);
            tracep->chgQData(oldp+52,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[1]),64);
            tracep->chgQData(oldp+54,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[2]),64);
            tracep->chgQData(oldp+56,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[3]),64);
            tracep->chgQData(oldp+58,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[4]),64);
            tracep->chgQData(oldp+60,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[5]),64);
            tracep->chgQData(oldp+62,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[6]),64);
            tracep->chgQData(oldp+64,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[7]),64);
            tracep->chgQData(oldp+66,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[8]),64);
            tracep->chgQData(oldp+68,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[9]),64);
            tracep->chgQData(oldp+70,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[10]),64);
            tracep->chgQData(oldp+72,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[11]),64);
            tracep->chgQData(oldp+74,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[12]),64);
            tracep->chgQData(oldp+76,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[13]),64);
            tracep->chgQData(oldp+78,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[14]),64);
            tracep->chgQData(oldp+80,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[15]),64);
            tracep->chgQData(oldp+82,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[16]),64);
            tracep->chgQData(oldp+84,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[17]),64);
            tracep->chgQData(oldp+86,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[18]),64);
            tracep->chgQData(oldp+88,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[19]),64);
            tracep->chgQData(oldp+90,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[20]),64);
            tracep->chgQData(oldp+92,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[21]),64);
            tracep->chgQData(oldp+94,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[22]),64);
            tracep->chgQData(oldp+96,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[23]),64);
            tracep->chgQData(oldp+98,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[24]),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[25]),64);
            tracep->chgQData(oldp+102,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[26]),64);
            tracep->chgQData(oldp+104,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[27]),64);
            tracep->chgQData(oldp+106,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[28]),64);
            tracep->chgQData(oldp+108,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[29]),64);
            tracep->chgQData(oldp+110,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[30]),64);
            tracep->chgQData(oldp+112,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_regfile__DOT__gprs[31]),64);
            tracep->chgCData(oldp+114,((0x7fU & vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r)),7);
            tracep->chgCData(oldp+115,((7U & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+116,((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                        >> 0x1aU)),7);
            tracep->chgCData(oldp+117,((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+118,((0x7fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                                 >> 0x14U))),7);
            tracep->chgCData(oldp+119,((0x1fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+120,((0x1fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+121,((0x1fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+122,((0x3fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                                 >> 0x14U))),6);
            tracep->chgQData(oldp+123,((((- (QData)((IData)(
                                                            (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                                             >> 0x1fU)))) 
                                         << 0x14U) 
                                        | (QData)((IData)(
                                                          ((0xff000U 
                                                            & vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r) 
                                                           | ((0x800U 
                                                               & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                                                    >> 0x14U)))))))),64);
            tracep->chgQData(oldp+125,((((- (QData)((IData)(
                                                            (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_inst_r 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+127,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_id_u0__DOT__id_imm),64);
            tracep->chgBit(oldp+129,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_id_u0__DOT__id_instvalid));
            tracep->chgQData(oldp+130,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_ex_u0__DOT__arithmeticres),64);
            tracep->chgQData(oldp+132,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_ex_u0__DOT__logices),64);
            tracep->chgQData(oldp+134,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ysyx_22050058_ex_u0__DOT__ex_wdata_r),64);
        }
        tracep->chgBit(oldp+136,(vlSelf->clk));
        tracep->chgBit(oldp+137,(vlSelf->rst));
        tracep->chgCData(oldp+138,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__stall),6);
        tracep->chgCData(oldp+139,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__flush),6);
        tracep->chgQData(oldp+140,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((0U 
                                                == (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg1_raddr_w))
                                                ? 0ULL
                                                : (
                                                   ((((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg1_raddr_w) 
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
        tracep->chgQData(oldp+142,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((0U 
                                                == (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg2_raddr_w))
                                                ? 0ULL
                                                : (
                                                   ((((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__id_reg2_raddr_w) 
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
        tracep->chgQData(oldp+144,((((((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_reg_waddr_r) 
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
        tracep->chgQData(oldp+146,((((((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline__DOT__ex_reg_waddr_r) 
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
    }
}

void Vysyx_22050058_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22050058_top___024root* const __restrict vlSelf = static_cast<Vysyx_22050058_top___024root*>(voidSelf);
    Vysyx_22050058_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
