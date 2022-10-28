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
            tracep->chgBit(oldp+26,(((((3U == (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_alusel_r)) 
                                       & ((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_reg_waddr_w 
                                           == vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_raddr_w) 
                                          | (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_reg_waddr_w 
                                             == vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_raddr_w))) 
                                      & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_re_w)) 
                                     & (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_we_r))));
            tracep->chgBit(oldp+27,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__isjump_w));
            tracep->chgQData(oldp+28,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__jumpaddr_w),64);
            tracep->chgIData(oldp+30,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r),32);
            tracep->chgQData(oldp+31,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_pc_r),64);
            tracep->chgQData(oldp+33,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_dnpc_r),64);
            tracep->chgBit(oldp+35,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_re_w));
            tracep->chgBit(oldp+36,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_re_w));
            tracep->chgQData(oldp+37,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg1_raddr_w),64);
            tracep->chgQData(oldp+39,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg2_raddr_w),64);
            tracep->chgBit(oldp+41,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_dpicstop_w));
            tracep->chgCData(oldp+42,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_aluop_w),8);
            tracep->chgCData(oldp+43,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_alusel_w),3);
            tracep->chgQData(oldp+44,(((0x23U == (0x7fU 
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
            tracep->chgQData(oldp+46,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_reg_waddr_w),64);
            tracep->chgBit(oldp+48,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_we_w));
            tracep->chgBit(oldp+49,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_instvalid_w));
            tracep->chgQData(oldp+50,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_pc_r),64);
            tracep->chgQData(oldp+52,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_dnpc_r),64);
            tracep->chgBit(oldp+54,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_dpicstop_r));
            tracep->chgCData(oldp+55,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_aluop_r),8);
            tracep->chgCData(oldp+56,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_alusel_r),3);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_op1_wdata_r),64);
            tracep->chgQData(oldp+59,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_op2_wdata_r),64);
            tracep->chgQData(oldp+61,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_op3_wdata_r),64);
            tracep->chgQData(oldp+63,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_reg_waddr_r),64);
            tracep->chgBit(oldp+65,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_we_r));
            tracep->chgBit(oldp+66,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_instvalid_r));
            tracep->chgQData(oldp+67,(((IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__isjump_w)
                                        ? vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__jumpaddr_w
                                        : vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_dnpc_r)),64);
            tracep->chgQData(oldp+69,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_reg_waddr_w),64);
            tracep->chgQData(oldp+71,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_wdata_w),64);
            tracep->chgQData(oldp+73,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_pc_r),64);
            tracep->chgQData(oldp+75,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_dnpc_r),64);
            tracep->chgBit(oldp+77,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_dpicstop_r));
            tracep->chgCData(oldp+78,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_aluop_r),8);
            tracep->chgBit(oldp+79,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_instvalid_r));
            tracep->chgQData(oldp+80,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_reg_waddr_r),64);
            tracep->chgBit(oldp+82,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_we_r));
            tracep->chgQData(oldp+83,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_wdata_r),64);
            tracep->chgBit(oldp+85,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_stall_memreq_w));
            tracep->chgQData(oldp+86,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__mem_wdata_w),64);
            tracep->chgQData(oldp+88,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_pc_r),64);
            tracep->chgQData(oldp+90,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_dnpc_r),64);
            tracep->chgBit(oldp+92,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_instvalid_r));
            tracep->chgQData(oldp+93,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_reg_waddr_r),64);
            tracep->chgBit(oldp+95,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_we_r));
            tracep->chgQData(oldp+96,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__wb_wdata_r),64);
            tracep->chgQData(oldp+98,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[0]),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[1]),64);
            tracep->chgQData(oldp+102,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[2]),64);
            tracep->chgQData(oldp+104,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[3]),64);
            tracep->chgQData(oldp+106,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[4]),64);
            tracep->chgQData(oldp+108,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[5]),64);
            tracep->chgQData(oldp+110,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[6]),64);
            tracep->chgQData(oldp+112,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[7]),64);
            tracep->chgQData(oldp+114,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[8]),64);
            tracep->chgQData(oldp+116,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[9]),64);
            tracep->chgQData(oldp+118,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[10]),64);
            tracep->chgQData(oldp+120,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[11]),64);
            tracep->chgQData(oldp+122,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[12]),64);
            tracep->chgQData(oldp+124,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[13]),64);
            tracep->chgQData(oldp+126,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[14]),64);
            tracep->chgQData(oldp+128,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[15]),64);
            tracep->chgQData(oldp+130,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[16]),64);
            tracep->chgQData(oldp+132,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[17]),64);
            tracep->chgQData(oldp+134,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[18]),64);
            tracep->chgQData(oldp+136,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[19]),64);
            tracep->chgQData(oldp+138,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[20]),64);
            tracep->chgQData(oldp+140,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[21]),64);
            tracep->chgQData(oldp+142,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[22]),64);
            tracep->chgQData(oldp+144,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[23]),64);
            tracep->chgQData(oldp+146,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[24]),64);
            tracep->chgQData(oldp+148,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[25]),64);
            tracep->chgQData(oldp+150,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[26]),64);
            tracep->chgQData(oldp+152,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[27]),64);
            tracep->chgQData(oldp+154,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[28]),64);
            tracep->chgQData(oldp+156,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[29]),64);
            tracep->chgQData(oldp+158,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[30]),64);
            tracep->chgQData(oldp+160,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_regfile__DOT__gprs[31]),64);
            tracep->chgCData(oldp+162,((0x7fU & vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r)),7);
            tracep->chgCData(oldp+163,((7U & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+164,((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                        >> 0x1aU)),7);
            tracep->chgCData(oldp+165,((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+166,((0x7fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                 >> 0x14U))),7);
            tracep->chgCData(oldp+167,((0x1fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+168,((0x1fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+169,((0x1fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+170,((0x3fU & (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                 >> 0x14U))),6);
            tracep->chgQData(oldp+171,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_id_u0__DOT__id_Simm),64);
            tracep->chgQData(oldp+173,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+175,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+177,((((- (QData)((IData)(
                                                            (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__id_inst_r 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+179,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_id_u0__DOT__id_imm),64);
            tracep->chgBit(oldp+181,((3U == (IData)(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_alusel_r))));
            tracep->chgQData(oldp+182,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__arithmeticres),64);
            tracep->chgQData(oldp+184,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__logices),64);
            tracep->chgQData(oldp+186,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__memaddr),64);
            tracep->chgQData(oldp+188,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_wdata_r),64);
            tracep->chgQData(oldp+190,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_op1_mul_r),64);
            tracep->chgQData(oldp+192,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_op1_div_r),64);
            tracep->chgQData(oldp+194,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_op1_rem_r),64);
            tracep->chgQData(oldp+196,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_op2_mul_r),64);
            tracep->chgQData(oldp+198,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_op2_div_r),64);
            tracep->chgQData(oldp+200,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__ex_op2_rem_r),64);
            tracep->chgWData(oldp+202,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__arithmeticres_mul_w),128);
            tracep->chgQData(oldp+206,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__arithmeticres_div_w),64);
            tracep->chgQData(oldp+208,(vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ysyx_22050058_ex_u0__DOT__arithmeticres_rem_w),64);
        }
        tracep->chgBit(oldp+210,(vlSelf->clk));
        tracep->chgBit(oldp+211,(vlSelf->rst));
        tracep->chgCData(oldp+212,(vlSelf->ysyx_22050058_top__DOT__stall),6);
        tracep->chgCData(oldp+213,(vlSelf->ysyx_22050058_top__DOT__flush),6);
        tracep->chgQData(oldp+214,(((IData)(vlSelf->rst)
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
        tracep->chgQData(oldp+216,(((IData)(vlSelf->rst)
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
        tracep->chgQData(oldp+218,(((((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_reg_waddr_w 
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
        tracep->chgQData(oldp+220,(((((vlSelf->ysyx_22050058_top__DOT__ysyx_22050058_pipeline_u0__DOT__ex_reg_waddr_w 
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
    }
}
