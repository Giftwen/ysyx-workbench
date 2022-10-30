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
            tracep->chgQData(oldp+3,(vlSelf->ysyx_22050058_top__DOT__thispc),64);
            tracep->chgIData(oldp+5,(vlSelf->ysyx_22050058_top__DOT__inst),32);
            tracep->chgBit(oldp+6,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_dpicstop_r));
            tracep->chgQData(oldp+7,(vlSelf->ysyx_22050058_top__DOT__memrdata_w),64);
            tracep->chgBit(oldp+9,(vlSelf->ysyx_22050058_top__DOT__memrdatavaild_w));
            tracep->chgBit(oldp+10,(vlSelf->ysyx_22050058_top__DOT__memwdatavaild_w));
            tracep->chgBit(oldp+11,(vlSelf->ysyx_22050058_top__DOT__memre_w));
            tracep->chgCData(oldp+12,(vlSelf->ysyx_22050058_top__DOT__memwe_w),8);
            tracep->chgQData(oldp+13,(vlSelf->ysyx_22050058_top__DOT__memaddr_w),64);
            tracep->chgQData(oldp+15,(vlSelf->ysyx_22050058_top__DOT__memwdata_o),64);
            tracep->chgQData(oldp+17,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_inst_rom_u0__DOT__inst_line),64);
            tracep->chgQData(oldp+19,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_data_rom_u0__DOT__data_line1),64);
            tracep->chgQData(oldp+21,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_data_rom_u0__DOT__data_line2),64);
            tracep->chgCData(oldp+23,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_data_rom_u0__DOT__data_mask),8);
            tracep->chgQData(oldp+24,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_data_rom_u0__DOT__data_addr),64);
            tracep->chgBit(oldp+26,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__stall_exreq_w));
            tracep->chgBit(oldp+27,(((((3U == (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_alusel_r)) 
                                       & ((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_reg_waddr_w 
                                           == vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_raddr_w) 
                                          | (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_reg_waddr_w 
                                             == vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_raddr_w))) 
                                      & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_re_w)) 
                                     & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_we_r))));
            tracep->chgBit(oldp+28,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__isjump_w));
            tracep->chgQData(oldp+29,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__jumpaddr_w),64);
            tracep->chgIData(oldp+31,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r),32);
            tracep->chgQData(oldp+32,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_pc_r),64);
            tracep->chgQData(oldp+34,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_dnpc_r),64);
            tracep->chgBit(oldp+36,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_re_w));
            tracep->chgBit(oldp+37,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_re_w));
            tracep->chgQData(oldp+38,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_raddr_w),64);
            tracep->chgQData(oldp+40,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_raddr_w),64);
            tracep->chgBit(oldp+42,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_dpicstop_w));
            tracep->chgCData(oldp+43,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_aluop_w),8);
            tracep->chgCData(oldp+44,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_alusel_w),3);
            tracep->chgQData(oldp+45,(((0x23U == (0x7fU 
                                                  & vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r))
                                        ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_id_u0__DOT__id_Simm
                                        : (((- (QData)((IData)(
                                                               (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                                >> 0x1fU)))) 
                                            << 0xcU) 
                                           | (QData)((IData)(
                                                             ((0x800U 
                                                               & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                                  << 4U)) 
                                                              | ((0x7e0U 
                                                                  & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                                     >> 0x14U)) 
                                                                 | (0x1eU 
                                                                    & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                                       >> 7U))))))))),64);
            tracep->chgQData(oldp+47,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg_waddr_w),64);
            tracep->chgBit(oldp+49,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_we_w));
            tracep->chgBit(oldp+50,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_instvalid_w));
            tracep->chgQData(oldp+51,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_pc_r),64);
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_dnpc_r),64);
            tracep->chgBit(oldp+55,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_dpicstop_r));
            tracep->chgCData(oldp+56,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_aluop_r),8);
            tracep->chgCData(oldp+57,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_alusel_r),3);
            tracep->chgQData(oldp+58,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_op1_wdata_r),64);
            tracep->chgQData(oldp+60,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_op2_wdata_r),64);
            tracep->chgQData(oldp+62,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_op3_wdata_r),64);
            tracep->chgQData(oldp+64,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_reg_waddr_r),64);
            tracep->chgBit(oldp+66,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_we_r));
            tracep->chgBit(oldp+67,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_instvalid_r));
            tracep->chgQData(oldp+68,(((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__isjump_w)
                                        ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__jumpaddr_w
                                        : vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_dnpc_r)),64);
            tracep->chgQData(oldp+70,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_reg_waddr_w),64);
            tracep->chgQData(oldp+72,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_wdata_w),64);
            tracep->chgQData(oldp+74,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_pc_r),64);
            tracep->chgQData(oldp+76,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_dnpc_r),64);
            tracep->chgBit(oldp+78,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_dpicstop_r));
            tracep->chgCData(oldp+79,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_aluop_r),8);
            tracep->chgBit(oldp+80,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_instvalid_r));
            tracep->chgQData(oldp+81,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_reg_waddr_r),64);
            tracep->chgBit(oldp+83,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_we_r));
            tracep->chgQData(oldp+84,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_wdata_r),64);
            tracep->chgBit(oldp+86,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_stall_memreq_w));
            tracep->chgQData(oldp+87,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_wdata_w),64);
            tracep->chgQData(oldp+89,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_pc_r),64);
            tracep->chgQData(oldp+91,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_dnpc_r),64);
            tracep->chgBit(oldp+93,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_instvalid_r));
            tracep->chgQData(oldp+94,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_reg_waddr_r),64);
            tracep->chgBit(oldp+96,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_we_r));
            tracep->chgQData(oldp+97,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_wdata_r),64);
            tracep->chgQData(oldp+99,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[0]),64);
            tracep->chgQData(oldp+101,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[1]),64);
            tracep->chgQData(oldp+103,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[2]),64);
            tracep->chgQData(oldp+105,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[3]),64);
            tracep->chgQData(oldp+107,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[4]),64);
            tracep->chgQData(oldp+109,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[5]),64);
            tracep->chgQData(oldp+111,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[6]),64);
            tracep->chgQData(oldp+113,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[7]),64);
            tracep->chgQData(oldp+115,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[8]),64);
            tracep->chgQData(oldp+117,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[9]),64);
            tracep->chgQData(oldp+119,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[10]),64);
            tracep->chgQData(oldp+121,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[11]),64);
            tracep->chgQData(oldp+123,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[12]),64);
            tracep->chgQData(oldp+125,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[13]),64);
            tracep->chgQData(oldp+127,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[14]),64);
            tracep->chgQData(oldp+129,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[15]),64);
            tracep->chgQData(oldp+131,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[16]),64);
            tracep->chgQData(oldp+133,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[17]),64);
            tracep->chgQData(oldp+135,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[18]),64);
            tracep->chgQData(oldp+137,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[19]),64);
            tracep->chgQData(oldp+139,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[20]),64);
            tracep->chgQData(oldp+141,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[21]),64);
            tracep->chgQData(oldp+143,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[22]),64);
            tracep->chgQData(oldp+145,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[23]),64);
            tracep->chgQData(oldp+147,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[24]),64);
            tracep->chgQData(oldp+149,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[25]),64);
            tracep->chgQData(oldp+151,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[26]),64);
            tracep->chgQData(oldp+153,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[27]),64);
            tracep->chgQData(oldp+155,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[28]),64);
            tracep->chgQData(oldp+157,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[29]),64);
            tracep->chgQData(oldp+159,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[30]),64);
            tracep->chgQData(oldp+161,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[31]),64);
            tracep->chgCData(oldp+163,((0x7fU & vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r)),7);
            tracep->chgCData(oldp+164,((7U & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+165,((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                        >> 0x1aU)),7);
            tracep->chgCData(oldp+166,((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+167,((0x7fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                 >> 0x14U))),7);
            tracep->chgCData(oldp+168,((0x1fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+169,((0x1fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+170,((0x1fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+171,((0x3fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                 >> 0x14U))),6);
            tracep->chgQData(oldp+172,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_id_u0__DOT__id_Simm),64);
            tracep->chgQData(oldp+174,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+176,((((- (QData)((IData)(
                                                            (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                             >> 0x1fU)))) 
                                         << 0x14U) 
                                        | (QData)((IData)(
                                                          ((0xff000U 
                                                            & vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r) 
                                                           | ((0x800U 
                                                               & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                                    >> 0x14U)))))))),64);
            tracep->chgQData(oldp+178,((((- (QData)((IData)(
                                                            (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+180,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_id_u0__DOT__id_imm),64);
            tracep->chgBit(oldp+182,((3U == (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_alusel_r))));
            tracep->chgQData(oldp+183,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__arithmeticres),64);
            tracep->chgQData(oldp+185,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__logices),64);
            tracep->chgQData(oldp+187,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__memaddr),64);
            tracep->chgQData(oldp+189,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_wdata_r),64);
            tracep->chgQData(oldp+191,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_op1_mul_r),64);
            tracep->chgQData(oldp+193,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_op1_divrem_r),64);
            tracep->chgQData(oldp+195,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_op2_mul_r),64);
            tracep->chgQData(oldp+197,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_op2_divrem_r),64);
            tracep->chgWData(oldp+199,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__arithmeticres_mul_w),128);
            tracep->chgQData(oldp+203,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__arithmeticres_div_w),64);
            tracep->chgQData(oldp+205,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__arithmeticres_rem_w),64);
            tracep->chgBit(oldp+207,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_div_valid_w));
            tracep->chgBit(oldp+208,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_is_divrem_r));
            tracep->chgBit(oldp+209,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_div_doing_r));
            tracep->chgBit(oldp+210,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_div_qrvalid_r));
            tracep->chgBit(oldp+211,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ysyx_22050058_div_u0__DOT__div_qrvalid_r));
            tracep->chgQData(oldp+212,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ysyx_22050058_div_u0__DOT__div_quotiento_r),64);
            tracep->chgQData(oldp+214,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ysyx_22050058_div_u0__DOT__div_remaindero_r),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+216,(vlSelf->ysyx_22050058_top__DOT__stall),6);
            tracep->chgCData(oldp+217,(vlSelf->ysyx_22050058_top__DOT__flush),6);
            tracep->chgBit(oldp+218,((1U & (~ ((IData)(vlSelf->ysyx_22050058_top__DOT__stall) 
                                               >> 3U)))));
        }
        tracep->chgBit(oldp+219,(vlSelf->clk));
        tracep->chgBit(oldp+220,(vlSelf->rst));
        tracep->chgQData(oldp+221,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((0ULL 
                                                == vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_raddr_w)
                                                ? 0ULL
                                                : (
                                                   (((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_raddr_w 
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
        tracep->chgQData(oldp+223,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((0ULL 
                                                == vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_raddr_w)
                                                ? 0ULL
                                                : (
                                                   (((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_raddr_w 
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
        tracep->chgQData(oldp+225,(((((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_reg_waddr_w 
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
        tracep->chgQData(oldp+227,(((((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_reg_waddr_w 
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
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
