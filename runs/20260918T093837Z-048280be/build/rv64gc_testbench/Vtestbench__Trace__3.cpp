// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


void Vtestbench___024root__trace_chg_0_sub_3(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_0_sub_3\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 27081);
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1fU]))) {
        bufp->chgBit(oldp+0,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                    >> 0x15U))));
        bufp->chgQData(oldp+1,(((0x200000U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                 ? (((QData)((IData)(
                                                     (0xfU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__21__KET____DOT__genblk1__DOT__ptereg 
                                                                 >> 0x36U))))) 
                                     << 0x3cU) | (0x3fffffffffffffULL 
                                                  & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__21__KET____DOT__genblk1__DOT__ptereg))
                                 : 0ULL)),64);
        bufp->chgBit(oldp+3,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__21__KET____DOT__genblk1__DOT__ptereg 
                                            >> 5U)))));
        bufp->chgBit(oldp+4,((IData)((0x200000000002000ULL 
                                      == (0x200000000003c00ULL 
                                          & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__21__KET____DOT__genblk1__DOT__ptereg)))));
        bufp->chgQData(oldp+5,((((QData)((IData)((0xfU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__21__KET____DOT__genblk1__DOT__ptereg 
                                                             >> 0x36U))))) 
                                 << 0x3cU) | (0x3fffffffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__21__KET____DOT__genblk1__DOT__ptereg))),64);
        bufp->chgQData(oldp+7,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__21__KET____DOT__genblk1__DOT__ptereg),58);
        bufp->chgBit(oldp+9,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                    >> 0x16U))));
        bufp->chgBit(oldp+10,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 0x16U))));
        bufp->chgQData(oldp+11,(((0x400000U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__22__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__22__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
        bufp->chgBit(oldp+13,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__22__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
        bufp->chgBit(oldp+14,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__22__KET____DOT__genblk1__DOT__ptereg)))));
        bufp->chgQData(oldp+15,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__22__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__22__KET____DOT__genblk1__DOT__ptereg))),64);
        bufp->chgQData(oldp+17,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__22__KET____DOT__genblk1__DOT__ptereg),58);
        bufp->chgBit(oldp+19,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 0x17U))));
        bufp->chgBit(oldp+20,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 0x17U))));
        bufp->chgQData(oldp+21,(((0x800000U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__23__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__23__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
        bufp->chgBit(oldp+23,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__23__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
        bufp->chgBit(oldp+24,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__23__KET____DOT__genblk1__DOT__ptereg)))));
        bufp->chgQData(oldp+25,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__23__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__23__KET____DOT__genblk1__DOT__ptereg))),64);
        bufp->chgQData(oldp+27,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__23__KET____DOT__genblk1__DOT__ptereg),58);
        bufp->chgBit(oldp+29,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 0x18U))));
        bufp->chgBit(oldp+30,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 0x18U))));
        bufp->chgQData(oldp+31,(((0x1000000U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__24__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__24__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
        bufp->chgBit(oldp+33,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__24__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
        bufp->chgBit(oldp+34,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__24__KET____DOT__genblk1__DOT__ptereg)))));
        bufp->chgQData(oldp+35,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__24__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__24__KET____DOT__genblk1__DOT__ptereg))),64);
        bufp->chgQData(oldp+37,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__24__KET____DOT__genblk1__DOT__ptereg),58);
        bufp->chgBit(oldp+39,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 0x19U))));
        bufp->chgBit(oldp+40,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 0x19U))));
        bufp->chgQData(oldp+41,(((0x2000000U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__25__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__25__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
        bufp->chgBit(oldp+43,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__25__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
        bufp->chgBit(oldp+44,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__25__KET____DOT__genblk1__DOT__ptereg)))));
        bufp->chgQData(oldp+45,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__25__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__25__KET____DOT__genblk1__DOT__ptereg))),64);
        bufp->chgQData(oldp+47,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__25__KET____DOT__genblk1__DOT__ptereg),58);
        bufp->chgBit(oldp+49,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+50,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 0x1aU))));
        bufp->chgQData(oldp+51,(((0x4000000U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__26__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__26__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
        bufp->chgBit(oldp+53,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__26__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
        bufp->chgBit(oldp+54,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__26__KET____DOT__genblk1__DOT__ptereg)))));
        bufp->chgQData(oldp+55,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__26__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__26__KET____DOT__genblk1__DOT__ptereg))),64);
        bufp->chgQData(oldp+57,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__26__KET____DOT__genblk1__DOT__ptereg),58);
        bufp->chgBit(oldp+59,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+60,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 0x1bU))));
        bufp->chgQData(oldp+61,(((0x8000000U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__27__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__27__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
        bufp->chgBit(oldp+63,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__27__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
        bufp->chgBit(oldp+64,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__27__KET____DOT__genblk1__DOT__ptereg)))));
        bufp->chgQData(oldp+65,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__27__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__27__KET____DOT__genblk1__DOT__ptereg))),64);
        bufp->chgQData(oldp+67,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__27__KET____DOT__genblk1__DOT__ptereg),58);
        bufp->chgBit(oldp+69,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+70,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 0x1cU))));
        bufp->chgQData(oldp+71,(((0x10000000U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__28__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__28__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
        bufp->chgBit(oldp+73,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__28__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
        bufp->chgBit(oldp+74,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__28__KET____DOT__genblk1__DOT__ptereg)))));
        bufp->chgQData(oldp+75,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__28__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__28__KET____DOT__genblk1__DOT__ptereg))),64);
        bufp->chgQData(oldp+77,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__28__KET____DOT__genblk1__DOT__ptereg),58);
        bufp->chgBit(oldp+79,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+80,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 0x1dU))));
        bufp->chgQData(oldp+81,(((0x20000000U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__29__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__29__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
        bufp->chgBit(oldp+83,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__29__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
        bufp->chgBit(oldp+84,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__29__KET____DOT__genblk1__DOT__ptereg)))));
        bufp->chgQData(oldp+85,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__29__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__29__KET____DOT__genblk1__DOT__ptereg))),64);
        bufp->chgQData(oldp+87,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__29__KET____DOT__genblk1__DOT__ptereg),58);
        bufp->chgBit(oldp+89,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 2U))));
        bufp->chgBit(oldp+90,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 2U))));
        bufp->chgQData(oldp+91,(((4U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__2__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__2__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
        bufp->chgBit(oldp+93,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__2__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
        bufp->chgBit(oldp+94,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__2__KET____DOT__genblk1__DOT__ptereg)))));
        bufp->chgQData(oldp+95,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__2__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__2__KET____DOT__genblk1__DOT__ptereg))),64);
        bufp->chgQData(oldp+97,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__2__KET____DOT__genblk1__DOT__ptereg),58);
        bufp->chgBit(oldp+99,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+100,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x1eU))));
        bufp->chgQData(oldp+101,(((0x40000000U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                   ? (((QData)((IData)(
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__30__KET____DOT__genblk1__DOT__ptereg 
                                                                   >> 0x36U))))) 
                                       << 0x3cU) | 
                                      (0x3fffffffffffffULL 
                                       & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__30__KET____DOT__genblk1__DOT__ptereg))
                                   : 0ULL)),64);
        bufp->chgBit(oldp+103,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__30__KET____DOT__genblk1__DOT__ptereg 
                                              >> 5U)))));
        bufp->chgBit(oldp+104,((IData)((0x200000000002000ULL 
                                        == (0x200000000003c00ULL 
                                            & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__30__KET____DOT__genblk1__DOT__ptereg)))));
        bufp->chgQData(oldp+105,((((QData)((IData)(
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__30__KET____DOT__genblk1__DOT__ptereg 
                                                               >> 0x36U))))) 
                                   << 0x3cU) | (0x3fffffffffffffULL 
                                                & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__30__KET____DOT__genblk1__DOT__ptereg))),64);
        bufp->chgQData(oldp+107,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__30__KET____DOT__genblk1__DOT__ptereg),58);
        bufp->chgBit(oldp+109,((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                >> 0x1fU)));
        bufp->chgBit(oldp+110,((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                >> 0x1fU)));
        bufp->chgQData(oldp+111,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                   >> 0x1fU) ? (((QData)((IData)(
                                                                 (0xfU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__31__KET____DOT__genblk1__DOT__ptereg 
                                                                             >> 0x36U))))) 
                                                 << 0x3cU) 
                                                | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__31__KET____DOT__genblk1__DOT__ptereg))
                                   : 0ULL)),64);
        bufp->chgBit(oldp+113,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__31__KET____DOT__genblk1__DOT__ptereg 
                                              >> 5U)))));
        bufp->chgBit(oldp+114,((IData)((0x200000000002000ULL 
                                        == (0x200000000003c00ULL 
                                            & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__31__KET____DOT__genblk1__DOT__ptereg)))));
        bufp->chgQData(oldp+115,((((QData)((IData)(
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__31__KET____DOT__genblk1__DOT__ptereg 
                                                               >> 0x36U))))) 
                                   << 0x3cU) | (0x3fffffffffffffULL 
                                                & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__31__KET____DOT__genblk1__DOT__ptereg))),64);
        bufp->chgQData(oldp+117,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__31__KET____DOT__genblk1__DOT__ptereg),58);
        bufp->chgBit(oldp+119,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                      >> 3U))));
        bufp->chgBit(oldp+120,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 3U))));
        bufp->chgQData(oldp+121,(((8U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                   ? (((QData)((IData)(
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__3__KET____DOT__genblk1__DOT__ptereg 
                                                                   >> 0x36U))))) 
                                       << 0x3cU) | 
                                      (0x3fffffffffffffULL 
                                       & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__3__KET____DOT__genblk1__DOT__ptereg))
                                   : 0ULL)),64);
        bufp->chgBit(oldp+123,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__3__KET____DOT__genblk1__DOT__ptereg 
                                              >> 5U)))));
        bufp->chgBit(oldp+124,((IData)((0x200000000002000ULL 
                                        == (0x200000000003c00ULL 
                                            & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__3__KET____DOT__genblk1__DOT__ptereg)))));
        bufp->chgQData(oldp+125,((((QData)((IData)(
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__3__KET____DOT__genblk1__DOT__ptereg 
                                                               >> 0x36U))))) 
                                   << 0x3cU) | (0x3fffffffffffffULL 
                                                & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__3__KET____DOT__genblk1__DOT__ptereg))),64);
        bufp->chgQData(oldp+127,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__3__KET____DOT__genblk1__DOT__ptereg),58);
        bufp->chgBit(oldp+129,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                      >> 4U))));
        bufp->chgBit(oldp+130,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 4U))));
        bufp->chgQData(oldp+131,(((0x10U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                   ? (((QData)((IData)(
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__4__KET____DOT__genblk1__DOT__ptereg 
                                                                   >> 0x36U))))) 
                                       << 0x3cU) | 
                                      (0x3fffffffffffffULL 
                                       & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__4__KET____DOT__genblk1__DOT__ptereg))
                                   : 0ULL)),64);
        bufp->chgBit(oldp+133,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__4__KET____DOT__genblk1__DOT__ptereg 
                                              >> 5U)))));
        bufp->chgBit(oldp+134,((IData)((0x200000000002000ULL 
                                        == (0x200000000003c00ULL 
                                            & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__4__KET____DOT__genblk1__DOT__ptereg)))));
        bufp->chgQData(oldp+135,((((QData)((IData)(
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__4__KET____DOT__genblk1__DOT__ptereg 
                                                               >> 0x36U))))) 
                                   << 0x3cU) | (0x3fffffffffffffULL 
                                                & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__4__KET____DOT__genblk1__DOT__ptereg))),64);
        bufp->chgQData(oldp+137,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__4__KET____DOT__genblk1__DOT__ptereg),58);
        bufp->chgBit(oldp+139,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                      >> 5U))));
        bufp->chgBit(oldp+140,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 5U))));
        bufp->chgQData(oldp+141,(((0x20U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                   ? (((QData)((IData)(
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__5__KET____DOT__genblk1__DOT__ptereg 
                                                                   >> 0x36U))))) 
                                       << 0x3cU) | 
                                      (0x3fffffffffffffULL 
                                       & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__5__KET____DOT__genblk1__DOT__ptereg))
                                   : 0ULL)),64);
        bufp->chgBit(oldp+143,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__5__KET____DOT__genblk1__DOT__ptereg 
                                              >> 5U)))));
        bufp->chgBit(oldp+144,((IData)((0x200000000002000ULL 
                                        == (0x200000000003c00ULL 
                                            & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__5__KET____DOT__genblk1__DOT__ptereg)))));
        bufp->chgQData(oldp+145,((((QData)((IData)(
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__5__KET____DOT__genblk1__DOT__ptereg 
                                                               >> 0x36U))))) 
                                   << 0x3cU) | (0x3fffffffffffffULL 
                                                & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__5__KET____DOT__genblk1__DOT__ptereg))),64);
        bufp->chgQData(oldp+147,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__5__KET____DOT__genblk1__DOT__ptereg),58);
        bufp->chgBit(oldp+149,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                      >> 6U))));
        bufp->chgBit(oldp+150,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 6U))));
        bufp->chgQData(oldp+151,(((0x40U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                   ? (((QData)((IData)(
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__6__KET____DOT__genblk1__DOT__ptereg 
                                                                   >> 0x36U))))) 
                                       << 0x3cU) | 
                                      (0x3fffffffffffffULL 
                                       & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__6__KET____DOT__genblk1__DOT__ptereg))
                                   : 0ULL)),64);
        bufp->chgBit(oldp+153,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__6__KET____DOT__genblk1__DOT__ptereg 
                                              >> 5U)))));
        bufp->chgBit(oldp+154,((IData)((0x200000000002000ULL 
                                        == (0x200000000003c00ULL 
                                            & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__6__KET____DOT__genblk1__DOT__ptereg)))));
        bufp->chgQData(oldp+155,((((QData)((IData)(
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__6__KET____DOT__genblk1__DOT__ptereg 
                                                               >> 0x36U))))) 
                                   << 0x3cU) | (0x3fffffffffffffULL 
                                                & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__6__KET____DOT__genblk1__DOT__ptereg))),64);
        bufp->chgQData(oldp+157,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__6__KET____DOT__genblk1__DOT__ptereg),58);
        bufp->chgBit(oldp+159,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                      >> 7U))));
        bufp->chgBit(oldp+160,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 7U))));
        bufp->chgQData(oldp+161,(((0x80U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                   ? (((QData)((IData)(
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__7__KET____DOT__genblk1__DOT__ptereg 
                                                                   >> 0x36U))))) 
                                       << 0x3cU) | 
                                      (0x3fffffffffffffULL 
                                       & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__7__KET____DOT__genblk1__DOT__ptereg))
                                   : 0ULL)),64);
        bufp->chgBit(oldp+163,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__7__KET____DOT__genblk1__DOT__ptereg 
                                              >> 5U)))));
        bufp->chgBit(oldp+164,((IData)((0x200000000002000ULL 
                                        == (0x200000000003c00ULL 
                                            & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__7__KET____DOT__genblk1__DOT__ptereg)))));
        bufp->chgQData(oldp+165,((((QData)((IData)(
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__7__KET____DOT__genblk1__DOT__ptereg 
                                                               >> 0x36U))))) 
                                   << 0x3cU) | (0x3fffffffffffffULL 
                                                & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__7__KET____DOT__genblk1__DOT__ptereg))),64);
        bufp->chgQData(oldp+167,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__7__KET____DOT__genblk1__DOT__ptereg),58);
        bufp->chgBit(oldp+169,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                      >> 8U))));
        bufp->chgBit(oldp+170,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 8U))));
        bufp->chgQData(oldp+171,(((0x100U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                   ? (((QData)((IData)(
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__8__KET____DOT__genblk1__DOT__ptereg 
                                                                   >> 0x36U))))) 
                                       << 0x3cU) | 
                                      (0x3fffffffffffffULL 
                                       & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__8__KET____DOT__genblk1__DOT__ptereg))
                                   : 0ULL)),64);
        bufp->chgBit(oldp+173,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__8__KET____DOT__genblk1__DOT__ptereg 
                                              >> 5U)))));
        bufp->chgBit(oldp+174,((IData)((0x200000000002000ULL 
                                        == (0x200000000003c00ULL 
                                            & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__8__KET____DOT__genblk1__DOT__ptereg)))));
        bufp->chgQData(oldp+175,((((QData)((IData)(
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__8__KET____DOT__genblk1__DOT__ptereg 
                                                               >> 0x36U))))) 
                                   << 0x3cU) | (0x3fffffffffffffULL 
                                                & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__8__KET____DOT__genblk1__DOT__ptereg))),64);
        bufp->chgQData(oldp+177,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__8__KET____DOT__genblk1__DOT__ptereg),58);
        bufp->chgBit(oldp+179,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                      >> 9U))));
        bufp->chgBit(oldp+180,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 9U))));
        bufp->chgQData(oldp+181,(((0x200U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                   ? (((QData)((IData)(
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__9__KET____DOT__genblk1__DOT__ptereg 
                                                                   >> 0x36U))))) 
                                       << 0x3cU) | 
                                      (0x3fffffffffffffULL 
                                       & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__9__KET____DOT__genblk1__DOT__ptereg))
                                   : 0ULL)),64);
        bufp->chgBit(oldp+183,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__9__KET____DOT__genblk1__DOT__ptereg 
                                              >> 5U)))));
        bufp->chgBit(oldp+184,((IData)((0x200000000002000ULL 
                                        == (0x200000000003c00ULL 
                                            & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__9__KET____DOT__genblk1__DOT__ptereg)))));
        bufp->chgQData(oldp+185,((((QData)((IData)(
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__9__KET____DOT__genblk1__DOT__ptereg 
                                                               >> 0x36U))))) 
                                   << 0x3cU) | (0x3fffffffffffffULL 
                                                & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__9__KET____DOT__genblk1__DOT__ptereg))),64);
        bufp->chgQData(oldp+187,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__9__KET____DOT__genblk1__DOT__ptereg),58);
        bufp->chgBit(oldp+189,((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                >> 0x1fU)));
        bufp->chgBit(oldp+190,((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x1fU)));
        bufp->chgCData(oldp+191,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+192,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Match));
        bufp->chgBit(oldp+193,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Valid));
        bufp->chgQData(oldp+194,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+196,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+197,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+198,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+199,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgSData(oldp+200,((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU)))),9);
        bufp->chgSData(oldp+201,((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U)))),9);
        bufp->chgBit(oldp+202,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                 >> 0x1fU) | ((0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                              == (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                             >> 0x2dU)))))));
        bufp->chgBit(oldp+203,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x1fU) & ((0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+204,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x1fU) & 
                                      ((0x1fU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+205,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+206,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+207,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+208,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+209,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__ShouldFlush));
        bufp->chgQData(oldp+210,((((QData)((IData)(
                                                   (0xffffU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                               >> 0x2cU))))) 
                                   << 0x2dU) | (0x1fffffffffffULL 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU)))),61);
        bufp->chgSData(oldp+212,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+213,((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU)))),9);
        bufp->chgSData(oldp+214,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+215,((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U)))),9);
        bufp->chgSData(oldp+216,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgSData(oldp+217,((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U)))),9);
        bufp->chgBit(oldp+218,(((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                 >> 0x1fU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__ShouldFlush))));
        bufp->chgBit(oldp+219,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+220,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+221,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+222,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+223,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Match));
        bufp->chgBit(oldp+224,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Valid));
        bufp->chgQData(oldp+225,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+227,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+228,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+229,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+230,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+231,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+232,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x1eU) & ((0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+233,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x1eU) & 
                                      ((0x1fU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+234,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+235,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+236,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+237,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+238,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+239,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+240,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+241,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+242,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 0x1eU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+243,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+244,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+245,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1dU))));
        bufp->chgCData(oldp+246,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+247,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Match));
        bufp->chgBit(oldp+248,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Valid));
        bufp->chgQData(oldp+249,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+251,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+252,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+253,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+254,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+255,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+256,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x1dU) & ((0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+257,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x1dU) & 
                                      ((0x1fU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+258,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+259,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+260,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+261,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+262,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+263,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+264,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+265,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+266,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 0x1dU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+267,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+268,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+269,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1cU))));
        bufp->chgCData(oldp+270,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+271,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Match));
        bufp->chgBit(oldp+272,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Valid));
        bufp->chgQData(oldp+273,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+275,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+276,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+277,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+278,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+279,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+280,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x1cU) & ((0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+281,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x1cU) & 
                                      ((0x1fU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+282,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+283,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+284,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+285,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+286,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+287,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+288,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+289,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+290,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 0x1cU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+291,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+292,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+293,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+294,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+295,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Match));
        bufp->chgBit(oldp+296,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Valid));
        bufp->chgQData(oldp+297,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+299,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+300,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+301,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+302,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+303,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+304,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x1bU) & ((0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+305,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x1bU) & 
                                      ((0x1fU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+306,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+307,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+308,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+309,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+310,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+311,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+312,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+313,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+314,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 0x1bU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+315,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+316,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+317,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1aU))));
        bufp->chgCData(oldp+318,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+319,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Match));
        bufp->chgBit(oldp+320,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Valid));
        bufp->chgQData(oldp+321,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+323,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+324,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+325,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+326,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+327,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+328,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x1aU) & ((0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+329,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x1aU) & 
                                      ((0x1fU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+330,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+331,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+332,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+333,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+334,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+335,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+336,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+337,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+338,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 0x1aU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+339,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+340,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x19U))));
        bufp->chgBit(oldp+341,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x19U))));
        bufp->chgCData(oldp+342,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+343,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Match));
        bufp->chgBit(oldp+344,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Valid));
        bufp->chgQData(oldp+345,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+347,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+348,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+349,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+350,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+351,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+352,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x19U) & ((0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+353,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x19U) & 
                                      ((0x1fU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+354,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+355,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+356,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+357,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+358,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+359,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+360,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+361,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+362,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 0x19U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+363,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+364,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x18U))));
        bufp->chgBit(oldp+365,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x18U))));
        bufp->chgCData(oldp+366,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+367,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Match));
        bufp->chgBit(oldp+368,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Valid));
        bufp->chgQData(oldp+369,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+371,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+372,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+373,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+374,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+375,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+376,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x18U) & ((0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+377,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x18U) & 
                                      ((0x1fU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+378,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+379,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+380,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+381,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+382,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+383,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+384,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+385,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+386,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 0x18U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+387,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+388,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x17U))));
        bufp->chgBit(oldp+389,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x17U))));
        bufp->chgCData(oldp+390,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+391,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Match));
        bufp->chgBit(oldp+392,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Valid));
        bufp->chgQData(oldp+393,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+395,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+396,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+397,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+398,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+399,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+400,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x17U) & ((0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+401,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x17U) & 
                                      ((0x1fU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+402,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+403,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+404,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+405,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+406,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+407,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+408,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+409,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+410,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 0x17U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+411,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+412,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x16U))));
        bufp->chgBit(oldp+413,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x16U))));
        bufp->chgCData(oldp+414,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+415,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Match));
        bufp->chgBit(oldp+416,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Valid));
        bufp->chgQData(oldp+417,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+419,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+420,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+421,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+422,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+423,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+424,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x16U) & ((0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+425,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x16U) & 
                                      ((0x1fU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+426,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+427,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+428,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+429,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+430,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+431,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+432,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+433,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+434,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 0x16U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+435,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+436,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x15U))));
        bufp->chgBit(oldp+437,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x15U))));
        bufp->chgCData(oldp+438,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+439,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Match));
        bufp->chgBit(oldp+440,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Valid));
        bufp->chgQData(oldp+441,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+443,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+444,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+445,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+446,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+447,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+448,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x15U) & ((0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+449,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x15U) & 
                                      ((0x1fU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+450,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+451,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+452,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+453,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+454,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+455,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+456,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+457,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+458,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 0x15U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+459,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+460,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x14U))));
        bufp->chgBit(oldp+461,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x14U))));
        bufp->chgCData(oldp+462,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+463,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Match));
        bufp->chgBit(oldp+464,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Valid));
        bufp->chgQData(oldp+465,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+467,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+468,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+469,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+470,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+471,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+472,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x14U) & ((0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+473,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x14U) & 
                                      ((0x1fU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+474,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+475,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+476,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+477,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+478,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+479,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+480,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+481,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+482,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 0x14U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+483,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+484,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x13U))));
        bufp->chgBit(oldp+485,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x13U))));
        bufp->chgCData(oldp+486,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+487,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Match));
        bufp->chgBit(oldp+488,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Valid));
        bufp->chgQData(oldp+489,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+491,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+492,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+493,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+494,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+495,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+496,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x13U) & ((0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+497,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x13U) & 
                                      ((0x1fU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+498,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+499,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+500,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+501,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+502,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+503,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+504,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+505,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+506,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 0x13U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+507,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+508,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x12U))));
        bufp->chgBit(oldp+509,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x12U))));
        bufp->chgCData(oldp+510,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+511,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Match));
        bufp->chgBit(oldp+512,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Valid));
        bufp->chgQData(oldp+513,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+515,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+516,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+517,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+518,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+519,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+520,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x12U) & ((0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+521,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x12U) & 
                                      ((0x1fU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+522,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+523,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+524,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+525,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+526,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+527,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+528,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+529,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+530,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 0x12U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+531,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+532,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x11U))));
        bufp->chgBit(oldp+533,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x11U))));
        bufp->chgCData(oldp+534,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+535,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Match));
        bufp->chgBit(oldp+536,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Valid));
        bufp->chgQData(oldp+537,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+539,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+540,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+541,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+542,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+543,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+544,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x11U) & ((0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+545,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x11U) & 
                                      ((0x1fU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+546,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+547,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+548,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+549,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+550,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+551,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+552,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+553,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+554,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 0x11U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+555,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+556,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x10U))));
        bufp->chgBit(oldp+557,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x10U))));
        bufp->chgCData(oldp+558,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+559,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Match));
        bufp->chgBit(oldp+560,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Valid));
        bufp->chgQData(oldp+561,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+563,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+564,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+565,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+566,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+567,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+568,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x10U) & ((0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+569,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x10U) & 
                                      ((0x1fU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+570,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+571,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+572,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+573,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+574,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+575,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+576,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+577,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+578,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 0x10U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+579,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+580,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0xfU))));
        bufp->chgBit(oldp+581,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xfU))));
        bufp->chgCData(oldp+582,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+583,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Match));
        bufp->chgBit(oldp+584,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Valid));
        bufp->chgQData(oldp+585,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+587,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+588,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+589,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+590,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+591,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+592,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0xfU) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+593,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xfU) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+594,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+595,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+596,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+597,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+598,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+599,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+600,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+601,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+602,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 0xfU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+603,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+604,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0xeU))));
        bufp->chgBit(oldp+605,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xeU))));
        bufp->chgCData(oldp+606,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+607,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Match));
        bufp->chgBit(oldp+608,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Valid));
        bufp->chgQData(oldp+609,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+611,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+612,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+613,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+614,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+615,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+616,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0xeU) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+617,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xeU) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+618,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+619,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+620,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+621,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+622,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+623,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+624,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+625,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+626,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 0xeU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+627,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+628,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0xdU))));
        bufp->chgBit(oldp+629,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xdU))));
        bufp->chgCData(oldp+630,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+631,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Match));
        bufp->chgBit(oldp+632,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Valid));
        bufp->chgQData(oldp+633,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+635,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+636,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+637,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+638,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+639,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+640,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0xdU) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+641,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xdU) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+642,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+643,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+644,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+645,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+646,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+647,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+648,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+649,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+650,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 0xdU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+651,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+652,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0xcU))));
        bufp->chgBit(oldp+653,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xcU))));
        bufp->chgCData(oldp+654,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+655,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Match));
        bufp->chgBit(oldp+656,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Valid));
        bufp->chgQData(oldp+657,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+659,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+660,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+661,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+662,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+663,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+664,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0xcU) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+665,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xcU) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+666,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+667,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+668,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+669,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+670,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+671,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+672,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+673,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+674,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 0xcU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+675,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+676,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0xbU))));
        bufp->chgBit(oldp+677,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xbU))));
        bufp->chgCData(oldp+678,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+679,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Match));
        bufp->chgBit(oldp+680,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Valid));
        bufp->chgQData(oldp+681,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+683,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+684,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+685,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+686,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+687,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+688,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0xbU) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+689,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xbU) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+690,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+691,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+692,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+693,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+694,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+695,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+696,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+697,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+698,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 0xbU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+699,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+700,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0xaU))));
        bufp->chgBit(oldp+701,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xaU))));
        bufp->chgCData(oldp+702,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+703,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Match));
        bufp->chgBit(oldp+704,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Valid));
        bufp->chgQData(oldp+705,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+707,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+708,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+709,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+710,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+711,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+712,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0xaU) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+713,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xaU) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+714,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+715,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+716,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+717,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+718,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+719,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+720,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+721,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+722,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 0xaU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+723,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+724,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 9U))));
        bufp->chgBit(oldp+725,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 9U))));
        bufp->chgCData(oldp+726,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+727,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Match));
        bufp->chgBit(oldp+728,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Valid));
        bufp->chgQData(oldp+729,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+731,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+732,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+733,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+734,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+735,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 9U)))));
        bufp->chgBit(oldp+736,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 9U) & ((0x1fU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                          >> 4U)))))));
        bufp->chgBit(oldp+737,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 9U) & ((0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+738,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+739,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+740,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+741,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+742,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+743,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+744,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+745,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+746,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 9U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+747,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+748,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 8U))));
        bufp->chgBit(oldp+749,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 8U))));
        bufp->chgCData(oldp+750,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+751,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Match));
        bufp->chgBit(oldp+752,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Valid));
        bufp->chgQData(oldp+753,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+755,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+756,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+757,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+758,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+759,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 8U)))));
        bufp->chgBit(oldp+760,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 8U) & ((0x1fU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                          >> 4U)))))));
        bufp->chgBit(oldp+761,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 8U) & ((0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+762,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+763,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+764,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+765,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+766,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+767,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+768,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+769,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+770,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 8U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+771,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+772,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 7U))));
        bufp->chgBit(oldp+773,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 7U))));
        bufp->chgCData(oldp+774,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+775,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Match));
        bufp->chgBit(oldp+776,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Valid));
        bufp->chgQData(oldp+777,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+779,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+780,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+781,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+782,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+783,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 7U)))));
        bufp->chgBit(oldp+784,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 7U) & ((0x1fU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                          >> 4U)))))));
        bufp->chgBit(oldp+785,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 7U) & ((0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+786,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+787,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+788,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+789,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+790,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+791,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+792,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+793,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+794,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 7U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+795,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+796,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 6U))));
        bufp->chgBit(oldp+797,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 6U))));
        bufp->chgCData(oldp+798,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+799,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Match));
        bufp->chgBit(oldp+800,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Valid));
        bufp->chgQData(oldp+801,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+803,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+804,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+805,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+806,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+807,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 6U)))));
        bufp->chgBit(oldp+808,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 6U) & ((0x1fU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                          >> 4U)))))));
        bufp->chgBit(oldp+809,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 6U) & ((0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+810,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+811,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+812,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+813,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+814,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+815,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+816,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+817,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+818,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 6U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+819,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+820,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 5U))));
        bufp->chgBit(oldp+821,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 5U))));
        bufp->chgCData(oldp+822,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+823,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Match));
        bufp->chgBit(oldp+824,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Valid));
        bufp->chgQData(oldp+825,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+827,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+828,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+829,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+830,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+831,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 5U)))));
        bufp->chgBit(oldp+832,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 5U) & ((0x1fU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                          >> 4U)))))));
        bufp->chgBit(oldp+833,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 5U) & ((0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+834,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+835,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+836,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+837,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+838,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+839,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+840,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+841,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+842,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 5U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+843,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+844,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 4U))));
        bufp->chgBit(oldp+845,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 4U))));
        bufp->chgCData(oldp+846,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+847,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Match));
        bufp->chgBit(oldp+848,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Valid));
        bufp->chgQData(oldp+849,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+851,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+852,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+853,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+854,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+855,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 4U)))));
        bufp->chgBit(oldp+856,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 4U) & ((0x1fU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                          >> 4U)))))));
        bufp->chgBit(oldp+857,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 4U) & ((0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+858,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+859,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+860,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+861,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+862,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+863,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+864,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+865,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+866,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 4U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+867,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+868,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 3U))));
        bufp->chgBit(oldp+869,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 3U))));
        bufp->chgCData(oldp+870,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+871,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Match));
        bufp->chgBit(oldp+872,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Valid));
        bufp->chgQData(oldp+873,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+875,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+876,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+877,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+878,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+879,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 3U)))));
        bufp->chgBit(oldp+880,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 3U) & ((0x1fU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                          >> 4U)))))));
        bufp->chgBit(oldp+881,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 3U) & ((0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+882,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+883,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+884,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+885,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+886,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+887,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+888,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+889,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+890,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 3U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+891,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+892,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 2U))));
        bufp->chgBit(oldp+893,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 2U))));
        bufp->chgCData(oldp+894,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+895,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Match));
        bufp->chgBit(oldp+896,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Valid));
        bufp->chgQData(oldp+897,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+899,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+900,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+901,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+902,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+903,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 2U)))));
        bufp->chgBit(oldp+904,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 2U) & ((0x1fU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                          >> 4U)))))));
        bufp->chgBit(oldp+905,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 2U) & ((0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+906,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+907,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+908,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+909,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+910,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+911,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+912,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+913,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+914,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 2U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+915,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+916,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 1U))));
        bufp->chgBit(oldp+917,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 1U))));
        bufp->chgCData(oldp+918,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__PageTypeRead),3);
        bufp->chgBit(oldp+919,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Match));
        bufp->chgBit(oldp+920,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Valid));
        bufp->chgQData(oldp+921,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+923,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+924,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+925,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+926,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+927,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 1U)))));
        bufp->chgBit(oldp+928,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 1U) & ((0x1fU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                          >> 4U)))))));
        bufp->chgBit(oldp+929,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 1U) & ((0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+930,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+931,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+932,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+933,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+934,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+935,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+936,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+937,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+938,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 1U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+939,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+940,((1U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs)));
        bufp->chgBit(oldp+941,((1U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs)));
        bufp->chgCData(oldp+942,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageTypeRead),3);
        bufp->chgBit(oldp+943,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Match));
        bufp->chgBit(oldp+944,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Valid));
        bufp->chgQData(oldp+945,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+947,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+948,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+949,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+950,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+951,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                      >> 0x2dU)))) 
                                      | vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs))));
        bufp->chgBit(oldp+952,((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                & ((0x1fU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x10U))) 
                                   == (0x1fU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                        >> 4U)))))));
        bufp->chgBit(oldp+953,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageType)) 
                                   | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      & ((0x1fU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                           >> 0x10U))) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                        >> 4U)))))))));
        bufp->chgBit(oldp+954,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+955,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+956,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+957,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x30U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+958,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+959,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+960,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+961,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgBit(oldp+962,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+963,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+964,((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                >> 0x1fU)));
        bufp->chgBit(oldp+965,((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x1fU)));
        bufp->chgCData(oldp+966,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+967,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Match));
        bufp->chgBit(oldp+968,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Valid));
        bufp->chgQData(oldp+969,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+971,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+972,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                     >> 0x2dU)))),16);
        bufp->chgSData(oldp+973,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+974,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgSData(oldp+975,((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU))),9);
        bufp->chgSData(oldp+976,((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U))),9);
        bufp->chgBit(oldp+977,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                 >> 0x1fU) | ((0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                              == (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                             >> 0x2dU)))))));
        bufp->chgBit(oldp+978,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x1fU) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+979,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x1fU) & 
                                      ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+980,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+981,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+982,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType)) 
                                   | (8U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+983,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 0x10U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                | ((8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))) 
                                   | (9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))))));
        bufp->chgBit(oldp+984,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__ShouldFlush));
        bufp->chgQData(oldp+985,((((QData)((IData)(
                                                   (0xffffU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                               >> 0x2cU))))) 
                                   << 0x2dU) | (0x1fffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                    << 0x14U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                      >> 0xcU))))),61);
        bufp->chgSData(oldp+987,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+988,((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU)))),9);
        bufp->chgSData(oldp+989,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+990,((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U))),9);
        bufp->chgSData(oldp+991,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                    >> 0x24U)))),9);
        bufp->chgSData(oldp+992,((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 0x10U))),9);
        bufp->chgBit(oldp+993,(((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                 >> 0x1fU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__ShouldFlush))));
        bufp->chgBit(oldp+994,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+995,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+996,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+997,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+998,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Match));
        bufp->chgBit(oldp+999,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1000,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1002,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1003,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1004,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1005,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1006,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 0x1eU)))));
        bufp->chgBit(oldp+1007,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 0x1eU) & ((0x1fU 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                              >> 4U)))))));
        bufp->chgBit(oldp+1008,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 0x1eU) & 
                                       ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+1009,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1010,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1011,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1012,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1013,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1014,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1015,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1016,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1017,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x1eU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1018,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1019,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1020,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x1dU))));
        bufp->chgCData(oldp+1021,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1022,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Match));
        bufp->chgBit(oldp+1023,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1024,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1026,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1027,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1028,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1029,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1030,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 0x1dU)))));
        bufp->chgBit(oldp+1031,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 0x1dU) & ((0x1fU 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                              >> 4U)))))));
        bufp->chgBit(oldp+1032,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 0x1dU) & 
                                       ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+1033,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1034,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1035,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1036,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1037,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1038,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1039,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1040,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1041,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x1dU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1042,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1043,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1044,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x1cU))));
        bufp->chgCData(oldp+1045,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1046,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Match));
        bufp->chgBit(oldp+1047,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1048,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1050,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1051,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1052,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1053,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1054,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 0x1cU)))));
        bufp->chgBit(oldp+1055,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 0x1cU) & ((0x1fU 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                              >> 4U)))))));
        bufp->chgBit(oldp+1056,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 0x1cU) & 
                                       ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+1057,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1058,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1059,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1060,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1061,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1062,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1063,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1064,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1065,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x1cU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1066,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1067,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1068,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x1bU))));
        bufp->chgCData(oldp+1069,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1070,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Match));
        bufp->chgBit(oldp+1071,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1072,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1074,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1075,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1076,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1077,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1078,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 0x1bU)))));
        bufp->chgBit(oldp+1079,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 0x1bU) & ((0x1fU 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                              >> 4U)))))));
        bufp->chgBit(oldp+1080,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 0x1bU) & 
                                       ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+1081,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1082,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1083,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1084,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1085,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1086,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1087,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1088,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1089,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x1bU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1090,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1091,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1092,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x1aU))));
        bufp->chgCData(oldp+1093,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1094,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Match));
        bufp->chgBit(oldp+1095,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1096,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1098,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1099,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1100,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1101,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1102,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 0x1aU)))));
        bufp->chgBit(oldp+1103,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 0x1aU) & ((0x1fU 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                              >> 4U)))))));
        bufp->chgBit(oldp+1104,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 0x1aU) & 
                                       ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+1105,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1106,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1107,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1108,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1109,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1110,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1111,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1112,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1113,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x1aU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1114,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1115,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1116,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x19U))));
        bufp->chgCData(oldp+1117,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1118,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Match));
        bufp->chgBit(oldp+1119,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1120,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1122,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1123,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1124,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1125,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1126,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+1127,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 0x19U) & ((0x1fU 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                              >> 4U)))))));
        bufp->chgBit(oldp+1128,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 0x19U) & 
                                       ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+1129,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1130,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1131,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1132,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1133,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1134,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1135,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1136,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1137,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x19U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1138,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1139,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1140,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x18U))));
        bufp->chgCData(oldp+1141,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1142,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Match));
        bufp->chgBit(oldp+1143,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1144,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1146,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1147,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1148,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1149,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1150,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 0x18U)))));
        bufp->chgBit(oldp+1151,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 0x18U) & ((0x1fU 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                              >> 4U)))))));
        bufp->chgBit(oldp+1152,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 0x18U) & 
                                       ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+1153,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1154,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1155,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1156,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1157,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1158,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1159,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1160,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1161,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x18U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1162,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1163,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1164,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x17U))));
        bufp->chgCData(oldp+1165,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1166,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Match));
        bufp->chgBit(oldp+1167,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1168,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1170,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1171,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1172,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1173,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1174,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 0x17U)))));
        bufp->chgBit(oldp+1175,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 0x17U) & ((0x1fU 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                              >> 4U)))))));
        bufp->chgBit(oldp+1176,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 0x17U) & 
                                       ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+1177,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1178,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1179,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1180,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1181,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1182,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1183,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1184,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1185,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x17U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1186,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1187,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1188,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x16U))));
        bufp->chgCData(oldp+1189,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1190,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Match));
        bufp->chgBit(oldp+1191,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1192,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1194,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1195,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1196,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1197,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1198,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 0x16U)))));
        bufp->chgBit(oldp+1199,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 0x16U) & ((0x1fU 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                              >> 4U)))))));
        bufp->chgBit(oldp+1200,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 0x16U) & 
                                       ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+1201,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1202,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1203,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1204,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1205,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1206,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1207,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1208,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1209,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x16U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1210,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1211,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1212,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x15U))));
        bufp->chgCData(oldp+1213,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1214,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Match));
        bufp->chgBit(oldp+1215,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1216,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1218,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1219,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1220,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1221,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1222,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 0x15U)))));
        bufp->chgBit(oldp+1223,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 0x15U) & ((0x1fU 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                              >> 4U)))))));
        bufp->chgBit(oldp+1224,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 0x15U) & 
                                       ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+1225,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1226,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1227,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1228,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1229,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1230,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1231,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1232,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1233,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x15U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1234,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1235,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1236,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x14U))));
        bufp->chgCData(oldp+1237,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1238,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Match));
        bufp->chgBit(oldp+1239,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1240,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1242,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1243,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1244,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1245,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1246,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 0x14U)))));
        bufp->chgBit(oldp+1247,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 0x14U) & ((0x1fU 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                              >> 4U)))))));
        bufp->chgBit(oldp+1248,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 0x14U) & 
                                       ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+1249,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1250,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1251,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1252,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1253,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1254,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1255,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1256,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1257,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x14U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1258,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1259,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1260,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x13U))));
        bufp->chgCData(oldp+1261,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1262,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Match));
        bufp->chgBit(oldp+1263,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1264,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1266,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1267,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1268,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1269,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1270,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 0x13U)))));
        bufp->chgBit(oldp+1271,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 0x13U) & ((0x1fU 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                              >> 4U)))))));
        bufp->chgBit(oldp+1272,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 0x13U) & 
                                       ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+1273,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1274,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1275,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1276,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1277,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1278,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1279,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1280,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1281,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x13U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1282,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1283,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1284,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x12U))));
        bufp->chgCData(oldp+1285,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1286,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Match));
        bufp->chgBit(oldp+1287,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1288,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1290,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1291,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1292,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1293,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1294,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 0x12U)))));
        bufp->chgBit(oldp+1295,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 0x12U) & ((0x1fU 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                              >> 4U)))))));
        bufp->chgBit(oldp+1296,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 0x12U) & 
                                       ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+1297,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1298,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1299,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1300,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1301,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1302,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1303,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1304,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1305,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x12U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1306,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1307,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1308,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x11U))));
        bufp->chgCData(oldp+1309,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1310,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Match));
        bufp->chgBit(oldp+1311,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1312,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1314,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1315,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1316,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1317,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1318,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 0x11U)))));
        bufp->chgBit(oldp+1319,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 0x11U) & ((0x1fU 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                              >> 4U)))))));
        bufp->chgBit(oldp+1320,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 0x11U) & 
                                       ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+1321,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1322,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1323,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1324,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1325,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1326,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1327,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1328,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1329,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x11U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1330,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1331,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1332,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x10U))));
        bufp->chgCData(oldp+1333,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1334,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Match));
        bufp->chgBit(oldp+1335,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1336,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1338,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1339,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1340,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1341,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1342,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 0x10U)))));
        bufp->chgBit(oldp+1343,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 0x10U) & ((0x1fU 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                              >> 4U)))))));
        bufp->chgBit(oldp+1344,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 0x10U) & 
                                       ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+1345,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1346,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1347,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1348,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1349,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1350,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1351,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1352,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1353,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x10U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1354,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1355,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1356,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xfU))));
        bufp->chgCData(oldp+1357,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1358,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Match));
        bufp->chgBit(oldp+1359,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1360,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1362,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1363,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1364,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1365,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1366,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+1367,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 0xfU) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+1368,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 0xfU) & 
                                       ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+1369,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1370,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1371,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1372,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1373,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1374,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1375,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1376,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1377,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0xfU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1378,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1379,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1380,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xeU))));
        bufp->chgCData(oldp+1381,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1382,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Match));
        bufp->chgBit(oldp+1383,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1384,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1386,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1387,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1388,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1389,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1390,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 0xeU)))));
        bufp->chgBit(oldp+1391,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 0xeU) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+1392,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 0xeU) & 
                                       ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+1393,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1394,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1395,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1396,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1397,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1398,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1399,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1400,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1401,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0xeU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1402,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1403,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1404,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xdU))));
        bufp->chgCData(oldp+1405,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1406,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Match));
        bufp->chgBit(oldp+1407,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1408,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1410,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1411,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1412,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1413,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1414,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 0xdU)))));
        bufp->chgBit(oldp+1415,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 0xdU) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+1416,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 0xdU) & 
                                       ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+1417,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1418,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1419,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1420,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1421,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1422,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1423,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1424,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1425,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0xdU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1426,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1427,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1428,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xcU))));
        bufp->chgCData(oldp+1429,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1430,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Match));
        bufp->chgBit(oldp+1431,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1432,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1434,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1435,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1436,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1437,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1438,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 0xcU)))));
        bufp->chgBit(oldp+1439,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 0xcU) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+1440,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 0xcU) & 
                                       ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+1441,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1442,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1443,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1444,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1445,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1446,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1447,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1448,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1449,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0xcU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1450,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1451,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1452,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xbU))));
        bufp->chgCData(oldp+1453,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1454,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Match));
        bufp->chgBit(oldp+1455,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1456,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1458,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1459,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1460,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1461,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1462,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 0xbU)))));
        bufp->chgBit(oldp+1463,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 0xbU) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+1464,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 0xbU) & 
                                       ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+1465,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1466,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1467,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1468,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1469,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1470,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1471,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1472,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1473,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0xbU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1474,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1475,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1476,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xaU))));
        bufp->chgCData(oldp+1477,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1478,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Match));
        bufp->chgBit(oldp+1479,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1480,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1482,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1483,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1484,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1485,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1486,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 0xaU)))));
        bufp->chgBit(oldp+1487,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 0xaU) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+1488,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 0xaU) & 
                                       ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+1489,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1490,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1491,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1492,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1493,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1494,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1495,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1496,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1497,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0xaU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1498,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1499,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 9U))));
        bufp->chgBit(oldp+1500,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 9U))));
        bufp->chgCData(oldp+1501,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1502,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Match));
        bufp->chgBit(oldp+1503,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1504,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1506,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1507,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1508,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1509,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1510,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 9U)))));
        bufp->chgBit(oldp+1511,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 9U) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                           >> 4U)))))));
        bufp->chgBit(oldp+1512,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 9U) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                              >> 4U)))))))));
        bufp->chgBit(oldp+1513,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1514,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1515,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1516,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1517,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1518,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1519,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1520,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1521,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 9U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1522,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1523,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 8U))));
        bufp->chgBit(oldp+1524,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 8U))));
        bufp->chgCData(oldp+1525,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1526,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Match));
        bufp->chgBit(oldp+1527,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1528,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1530,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1531,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1532,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1533,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1534,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 8U)))));
        bufp->chgBit(oldp+1535,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 8U) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                           >> 4U)))))));
        bufp->chgBit(oldp+1536,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 8U) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                              >> 4U)))))))));
        bufp->chgBit(oldp+1537,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1538,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1539,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1540,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1541,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1542,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1543,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1544,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1545,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 8U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1546,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1547,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 7U))));
        bufp->chgBit(oldp+1548,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 7U))));
        bufp->chgCData(oldp+1549,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1550,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Match));
        bufp->chgBit(oldp+1551,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1552,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1554,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1555,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1556,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1557,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1558,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 7U)))));
        bufp->chgBit(oldp+1559,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 7U) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                           >> 4U)))))));
        bufp->chgBit(oldp+1560,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 7U) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                              >> 4U)))))))));
        bufp->chgBit(oldp+1561,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1562,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1563,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1564,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1565,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1566,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1567,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1568,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1569,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 7U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1570,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1571,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 6U))));
        bufp->chgBit(oldp+1572,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 6U))));
        bufp->chgCData(oldp+1573,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1574,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Match));
        bufp->chgBit(oldp+1575,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1576,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1578,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1579,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1580,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1581,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1582,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 6U)))));
        bufp->chgBit(oldp+1583,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 6U) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                           >> 4U)))))));
        bufp->chgBit(oldp+1584,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 6U) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                              >> 4U)))))))));
        bufp->chgBit(oldp+1585,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1586,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1587,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1588,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1589,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1590,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1591,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1592,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1593,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 6U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1594,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1595,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 5U))));
        bufp->chgBit(oldp+1596,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 5U))));
        bufp->chgCData(oldp+1597,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1598,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Match));
        bufp->chgBit(oldp+1599,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1600,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1602,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1603,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1604,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1605,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1606,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 5U)))));
        bufp->chgBit(oldp+1607,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 5U) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                           >> 4U)))))));
        bufp->chgBit(oldp+1608,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 5U) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                              >> 4U)))))))));
        bufp->chgBit(oldp+1609,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1610,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1611,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1612,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1613,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1614,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1615,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1616,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1617,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 5U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1618,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1619,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 4U))));
        bufp->chgBit(oldp+1620,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 4U))));
        bufp->chgCData(oldp+1621,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1622,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Match));
        bufp->chgBit(oldp+1623,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1624,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1626,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1627,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1628,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1629,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1630,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 4U)))));
        bufp->chgBit(oldp+1631,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 4U) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                           >> 4U)))))));
        bufp->chgBit(oldp+1632,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 4U) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                              >> 4U)))))))));
        bufp->chgBit(oldp+1633,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1634,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1635,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1636,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1637,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1638,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1639,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1640,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1641,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 4U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1642,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1643,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 3U))));
        bufp->chgBit(oldp+1644,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 3U))));
        bufp->chgCData(oldp+1645,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1646,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Match));
        bufp->chgBit(oldp+1647,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1648,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1650,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1651,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1652,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1653,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1654,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 3U)))));
        bufp->chgBit(oldp+1655,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 3U) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                           >> 4U)))))));
        bufp->chgBit(oldp+1656,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 3U) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                              >> 4U)))))))));
        bufp->chgBit(oldp+1657,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1658,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1659,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1660,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1661,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1662,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1663,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1664,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1665,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 3U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1666,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1667,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 2U))));
        bufp->chgBit(oldp+1668,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 2U))));
        bufp->chgCData(oldp+1669,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Match))))),3);
        bufp->chgBit(oldp+1670,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Match));
        bufp->chgBit(oldp+1671,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1672,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1674,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1675,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1676,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1677,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1678,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 2U)))));
        bufp->chgBit(oldp+1679,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 2U) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                           >> 4U)))))));
        bufp->chgBit(oldp+1680,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 2U) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                              >> 4U)))))))));
        bufp->chgBit(oldp+1681,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1682,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1683,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1684,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1685,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1686,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1687,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1688,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1689,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 2U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1690,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1691,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 1U))));
        bufp->chgBit(oldp+1692,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 1U))));
        bufp->chgCData(oldp+1693,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__PageTypeRead),3);
        bufp->chgBit(oldp+1694,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Match));
        bufp->chgBit(oldp+1695,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1696,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1698,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1699,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1700,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1701,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1702,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 1U)))));
        bufp->chgBit(oldp+1703,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 1U) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                           >> 4U)))))));
        bufp->chgBit(oldp+1704,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 1U) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                              >> 4U)))))))));
        bufp->chgBit(oldp+1705,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1706,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1707,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1708,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1709,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1710,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1711,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1712,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1713,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 1U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1714,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1715,((1U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs)));
        bufp->chgBit(oldp+1716,((1U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs)));
        bufp->chgCData(oldp+1717,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageTypeRead),3);
        bufp->chgBit(oldp+1718,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Match));
        bufp->chgBit(oldp+1719,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1720,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key),61);
        bufp->chgCData(oldp+1722,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageType),3);
        bufp->chgSData(oldp+1723,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                      >> 0x2dU)))),16);
        bufp->chgSData(oldp+1724,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1725,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1726,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                       >> 0x2dU)))) 
                                       | vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs))));
        bufp->chgBit(oldp+1727,((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 & ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x10U)) 
                                    == (0x1fU & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                         >> 4U)))))));
        bufp->chgBit(oldp+1728,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageType)) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       & ((0x1fU & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x10U)) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                         >> 4U)))))))));
        bufp->chgBit(oldp+1729,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1730,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1731,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageType)) 
                                    | (8U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1732,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x10U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                        >> 0x24U)))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU)))) 
                                    | (9U == (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))))));
        bufp->chgBit(oldp+1733,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__ShouldFlush));
        bufp->chgSData(oldp+1734,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1735,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+1736,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                     >> 0x24U)))),9);
        bufp->chgBit(oldp+1737,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__ShouldFlush)))));
        bufp->chgBit(oldp+1738,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__ShouldFlush)))));
        bufp->chgCData(oldp+1739,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox0.y),8);
        bufp->chgCData(oldp+1740,((0xffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__BBMU 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+1741,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox1.y),8);
        bufp->chgCData(oldp+1742,((0xffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__BBMU 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+1743,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox2.y),8);
        bufp->chgCData(oldp+1744,((0xffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__ABMU 
                                                    >> 0x38U)))),8);
        bufp->chgCData(oldp+1745,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox3.y),8);
        bufp->chgCData(oldp+1746,((0xffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__ABMU 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+1747,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox4.y),8);
        bufp->chgCData(oldp+1748,((0xffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__ABMU 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+1749,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox5.y),8);
        bufp->chgCData(oldp+1750,((0xffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__BBMU 
                                                    >> 0x30U)))),8);
        bufp->chgCData(oldp+1751,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox6.y),8);
        bufp->chgCData(oldp+1752,((0xffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__BBMU 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+1753,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox7.y),8);
        bufp->chgCData(oldp+1754,((0xffU & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__Sbox0In)),8);
        bufp->chgCData(oldp+1755,((0xffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__Sbox0In 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1756,((0xffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__Sbox0In 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1757,((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__Sbox0In 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1758,((0xffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__BBMU 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+1759,((0xffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__ABMU 
                                                    >> 0x18U)))),8);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[0x1fU] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x20U])))) {
        bufp->chgQData(oldp+1760,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf
                                  [(0x1fU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0xfU)))]),64);
        bufp->chgQData(oldp+1762,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf
                                  [(0x1fU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0x14U)))]),64);
        bufp->chgQData(oldp+1764,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf
                                  [(0x1fU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0x1bU)))]),64);
        bufp->chgQData(oldp+1766,(((0U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0xfU))))
                                    ? 0ULL : ((1U & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0xfU)))
                                               ? (((QData)((IData)(
                                                                   vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf
                                                                   [
                                                                   (0xfU 
                                                                    & (IData)(
                                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                               >> 0x10U)))][3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf
                                                                    [
                                                                    (0xfU 
                                                                     & (IData)(
                                                                               (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                                >> 0x10U)))][2U])))
                                               : (((QData)((IData)(
                                                                   vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf
                                                                   [
                                                                   (0xfU 
                                                                    & (IData)(
                                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                               >> 0x10U)))][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf
                                                                    [
                                                                    (0xfU 
                                                                     & (IData)(
                                                                               (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                                >> 0x10U)))][0U])))))),64);
        if ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__A2D))) {
            __Vtemp_3[0U] = 0U;
            __Vtemp_3[1U] = 0U;
            __Vtemp_3[2U] = 0U;
            __Vtemp_3[3U] = 0U;
        } else {
            __Vtemp_3[0U] = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf
                [(0xfU & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__A2D) 
                          >> 1U))][0U];
            __Vtemp_3[1U] = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf
                [(0xfU & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__A2D) 
                          >> 1U))][1U];
            __Vtemp_3[2U] = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf
                [(0xfU & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__A2D) 
                          >> 1U))][2U];
            __Vtemp_3[3U] = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf
                [(0xfU & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__A2D) 
                          >> 1U))][3U];
        }
        bufp->chgWData(oldp+1768,(__Vtemp_3),128);
        bufp->chgWData(oldp+1772,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf
                                  [(0xfU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                    >> 0x10U)))]),128);
        bufp->chgWData(oldp+1776,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf
                                  [(0xfU & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__A2D) 
                                            >> 1U))]),128);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x20U]))) {
        bufp->chgQData(oldp+1780,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0]),64);
        bufp->chgQData(oldp+1782,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[1]),64);
        bufp->chgQData(oldp+1784,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[2]),64);
        bufp->chgQData(oldp+1786,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[3]),64);
        bufp->chgQData(oldp+1788,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[4]),64);
        bufp->chgQData(oldp+1790,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[5]),64);
        bufp->chgQData(oldp+1792,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[6]),64);
        bufp->chgQData(oldp+1794,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[7]),64);
        bufp->chgQData(oldp+1796,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[8]),64);
        bufp->chgQData(oldp+1798,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[9]),64);
        bufp->chgQData(oldp+1800,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[10]),64);
        bufp->chgQData(oldp+1802,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[11]),64);
        bufp->chgQData(oldp+1804,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[12]),64);
        bufp->chgQData(oldp+1806,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[13]),64);
        bufp->chgQData(oldp+1808,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[14]),64);
        bufp->chgQData(oldp+1810,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[15]),64);
        bufp->chgQData(oldp+1812,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[16]),64);
        bufp->chgQData(oldp+1814,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[17]),64);
        bufp->chgQData(oldp+1816,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[18]),64);
        bufp->chgQData(oldp+1818,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[19]),64);
        bufp->chgQData(oldp+1820,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[20]),64);
        bufp->chgQData(oldp+1822,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[21]),64);
        bufp->chgQData(oldp+1824,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[22]),64);
        bufp->chgQData(oldp+1826,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[23]),64);
        bufp->chgQData(oldp+1828,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[24]),64);
        bufp->chgQData(oldp+1830,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[25]),64);
        bufp->chgQData(oldp+1832,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[26]),64);
        bufp->chgQData(oldp+1834,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[27]),64);
        bufp->chgQData(oldp+1836,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[28]),64);
        bufp->chgQData(oldp+1838,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[29]),64);
        bufp->chgQData(oldp+1840,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[30]),64);
        bufp->chgQData(oldp+1842,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[31]),64);
        bufp->chgIData(oldp+1844,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__i),32);
        bufp->chgWData(oldp+1845,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[0]),128);
        bufp->chgWData(oldp+1849,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[1]),128);
        bufp->chgWData(oldp+1853,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[2]),128);
        bufp->chgWData(oldp+1857,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[3]),128);
        bufp->chgWData(oldp+1861,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[4]),128);
        bufp->chgWData(oldp+1865,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[5]),128);
        bufp->chgWData(oldp+1869,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[6]),128);
        bufp->chgWData(oldp+1873,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[7]),128);
        bufp->chgWData(oldp+1877,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[8]),128);
        bufp->chgWData(oldp+1881,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[9]),128);
        bufp->chgWData(oldp+1885,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[10]),128);
        bufp->chgWData(oldp+1889,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[11]),128);
        bufp->chgWData(oldp+1893,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[12]),128);
        bufp->chgWData(oldp+1897,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[13]),128);
        bufp->chgWData(oldp+1901,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[14]),128);
        bufp->chgWData(oldp+1905,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[15]),128);
        bufp->chgIData(oldp+1909,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__i),32);
        bufp->chgBit(oldp+1910,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__EndOfFrame));
        bufp->chgBit(oldp+1911,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__ShiftEdge));
        bufp->chgBit(oldp+1912,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__SampleEdge));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2aU]))) {
        bufp->chgQData(oldp+1913,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__R2D),64);
        bufp->chgQData(oldp+1915,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__SwapHighD),64);
        __Vtemp_4[0U] = (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__R2D);
        __Vtemp_4[1U] = (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__R2D 
                                 >> 0x20U));
        __Vtemp_4[2U] = (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__SwapHighD);
        __Vtemp_4[3U] = (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__SwapHighD 
                                 >> 0x20U));
        bufp->chgWData(oldp+1917,(__Vtemp_4),128);
        bufp->chgBit(oldp+1921,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__TransmitLoad));
        bufp->chgCData(oldp+1922,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__NextState),3);
        bufp->chgBit(oldp+1923,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__ContinueTransmit));
        bufp->chgBit(oldp+1924,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__EndTransmission));
    }
    bufp->chgBit(oldp+1925,(vlSelfRef.testbench__DOT__clk));
    bufp->chgCData(oldp+1926,((7U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUSelect)
                                      ? ((((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                                           & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheBusRW))) 
                                          | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_10))
                                          ? 5U : 0U)
                                      : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUSelect)
                                          ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUInput__DOT____Vcellout__genblk1__DOT__RestorMux____pinNumber4[1U] 
                                              << 6U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUInput__DOT____Vcellout__genblk1__DOT__RestorMux____pinNumber4[1U] 
                                                >> 0x1aU))
                                          : 0U)))),3);
    bufp->chgBit(oldp+1927,(vlSelfRef.testbench__DOT__TestBenchReset));
    bufp->chgBit(oldp+1928,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__IFUCacheBusStallF) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelSpillNextF) 
                                | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ITLBMissOrUpdateAF)))));
    bufp->chgQData(oldp+1929,((0xffffffffffffffULL 
                               & (VL_SHIFTL_QQI(56,56,32, (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__BeatCount)), 3U) 
                                  + ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__CacheableF)
                                      ? ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_7)
                                          ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                              [2U] 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (0xfc0U 
                                                                & ((IData)(
                                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                            >> 6U)) 
                                                                   << 6U)))))
                                          : ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT____Vcellout__addressmux____pinNumber4 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (0xfc0U 
                                                                & ((IData)(
                                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                            >> 6U)) 
                                                                   << 6U))))))
                                      : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)))),56);
    bufp->chgCData(oldp+1931,(((((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
                                 & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__CacheBusRW))) 
                                | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h97605dfa_0_9))
                                ? 5U : 0U)),3);
    bufp->chgCData(oldp+1932,(((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                 & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__IFUHREADY) 
                                    & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
                                       & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h97605dfa_0_12)))) 
                                | ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                   | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CacheAccess) 
                                      & ((7U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__BeatCountDelayed)) 
                                         & ((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__CacheBusRW)) 
                                            & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h97605dfa_0_11))))))
                                ? 2U : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h97605dfa_0_9)
                                         ? 3U : 0U))),2);
    bufp->chgQData(oldp+1933,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUHADDROut),56);
    bufp->chgBit(oldp+1935,((((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BusAtomic)) 
                              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_11)) 
                             | (((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                                 & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__BusWrite)) 
                                | (((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                    & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BusAtomic)) 
                                   | ((6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                      & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BeatCount))))))));
    bufp->chgCData(oldp+1936,(((((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                                 & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheBusRW))) 
                                | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_10))
                                ? 5U : 0U)),3);
    bufp->chgBit(oldp+1937,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__DCacheStallM));
    bufp->chgBit(oldp+1938,(((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__ebufsmarb__DOT__CurrState)) 
                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__ebufsmarb__DOT__both))));
    bufp->chgCData(oldp+1939,(((0U == (3U & (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUSelect)
                                               ? ((
                                                   ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                                                    & (0U 
                                                       != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheBusRW))) 
                                                   | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_10))
                                                   ? 5U
                                                   : 0U)
                                               : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUSelect)
                                                   ? 
                                                  ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUInput__DOT____Vcellout__genblk1__DOT__RestorMux____pinNumber4[1U] 
                                                    << 6U) 
                                                   | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUInput__DOT____Vcellout__genblk1__DOT__RestorMux____pinNumber4[1U] 
                                                      >> 0x1aU))
                                                   : 0U)) 
                                             >> 1U)))
                                ? 0U : (0xfU & (((IData)(2U) 
                                                 << 
                                                 (3U 
                                                  & (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUSelect)
                                                       ? 
                                                      ((((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                                                         & (0U 
                                                            != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheBusRW))) 
                                                        | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_10))
                                                        ? 5U
                                                        : 0U)
                                                       : 
                                                      ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUSelect)
                                                        ? 
                                                       ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUInput__DOT____Vcellout__genblk1__DOT__RestorMux____pinNumber4[1U] 
                                                         << 6U) 
                                                        | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUInput__DOT____Vcellout__genblk1__DOT__RestorMux____pinNumber4[1U] 
                                                           >> 0x1aU))
                                                        : 0U)) 
                                                     >> 1U))) 
                                                - (IData)(1U))))),4);
    bufp->chgQData(oldp+1940,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__BPWrongE)
                                ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__PCCorrectE
                                : ((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U] 
                                           & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__BPDirF) 
                                              >> 1U)) 
                                          | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U] 
                                             >> 1U)))
                                    ? ((4U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U])
                                        ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__RASPCF
                                        : (((QData)((IData)(
                                                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[0U]))))
                                    : ((3U != (3U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PostSpillInstrRawF))
                                        ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__PCPlus2NextF
                                        : (((1ULL + 
                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF 
                                              >> 2U)) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (3U 
                                                              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF))))))))),64);
    bufp->chgQData(oldp+1942,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__CSRWriteFenceM)
                                ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__BPWrongM)
                                    ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF
                                    : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCE)
                                : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__BPWrongE)
                                    ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__PCCorrectE
                                    : ((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U] 
                                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__BPDirF) 
                                                  >> 1U)) 
                                              | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U] 
                                                 >> 1U)))
                                        ? ((4U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U])
                                            ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__RASPCF
                                            : (((QData)((IData)(
                                                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[0U]))))
                                        : ((3U != (3U 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PostSpillInstrRawF))
                                            ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__PCPlus2NextF
                                            : (((1ULL 
                                                 + 
                                                 (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF 
                                                  >> 2U)) 
                                                << 2U) 
                                               | (QData)((IData)(
                                                                 (3U 
                                                                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF)))))))))),64);
    bufp->chgQData(oldp+1944,(((3U != (3U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PostSpillInstrRawF))
                                ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__PCPlus2NextF
                                : (((1ULL + (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF 
                                             >> 2U)) 
                                    << 2U) | (QData)((IData)(
                                                             (3U 
                                                              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF))))))),64);
    bufp->chgIData(oldp+1946,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets
                              [(0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                 >> 1U)))]),32);
    bufp->chgBit(oldp+1947,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelSpillNextF));
    bufp->chgBit(oldp+1948,((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h97605dfa_0_12)) 
                             | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                | ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                   | ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                      | ((7U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__BeatCountDelayed)) 
                                         & ((5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                            | (6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState))))))))));
    bufp->chgBit(oldp+1949,(((~ ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                 >> 6U)) & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h6a8520a7_0_0) 
                                            & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrPageFaultRawF)) 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                                          >> 0x3dU)))))));
    bufp->chgBit(oldp+1950,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrAccessFaultF) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrPageFaultF) 
                                | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__ITLBWalkFaultF)))));
    bufp->chgCData(oldp+1951,(((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__CurrState))
                                ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__TakeSpillF)
                                    ? 1U : 0U) : ((1U 
                                                   == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__CurrState))
                                                   ? 
                                                  ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StallF)
                                                    ? 1U
                                                    : 0U)
                                                   : 0U))),2);
    bufp->chgBit(oldp+1952,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__TakeSpillF));
    bufp->chgBit(oldp+1953,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__SpillSaveF));
    bufp->chgBit(oldp+1954,((1U & (~ (IData)((3U == 
                                              ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelIROM)
                                                ? 0U
                                                : (3U 
                                                   & vlSelfRef.__VdfgRegularize_hd87f99a1_4_119))))))));
    bufp->chgCData(oldp+1955,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrPageFaultRawF) 
                                << 1U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrAccessFaultRawF))),2);
    bufp->chgBit(oldp+1956,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelSpillNextF))));
    bufp->chgIData(oldp+1957,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT____Vcellinp__SpillInstrReg____pinNumber4) 
                                << 0x10U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__InstrFirstHalfF))),32);
    bufp->chgQData(oldp+1958,(((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U] 
                                       & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__BPDirF) 
                                          >> 1U)) | 
                                      (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U] 
                                       >> 1U))) ? (
                                                   (4U 
                                                    & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U])
                                                    ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__RASPCF
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[0U]))))
                                : ((3U != (3U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PostSpillInstrRawF))
                                    ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__PCPlus2NextF
                                    : (((1ULL + (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF 
                                                 >> 2U)) 
                                        << 2U) | (QData)((IData)(
                                                                 (3U 
                                                                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF)))))))),64);
    bufp->chgQData(oldp+1960,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_7)
                                ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                    [2U] << 0xcU) | (QData)((IData)(
                                                                    (0xfc0U 
                                                                     & ((IData)(
                                                                                (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                                >> 6U)) 
                                                                        << 6U)))))
                                : ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT____Vcellout__addressmux____pinNumber4 
                                    << 0xcU) | (QData)((IData)(
                                                               (0xfc0U 
                                                                & ((IData)(
                                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                            >> 6U)) 
                                                                   << 6U))))))),56);
    bufp->chgCData(oldp+1962,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelIROM) 
                                << 1U) | (1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__CacheableF))))),2);
    bufp->chgQData(oldp+1963,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__CacheableF)
                                ? ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_7)
                                    ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                        [2U] << 0xcU) 
                                       | (QData)((IData)(
                                                         (0xfc0U 
                                                          & ((IData)(
                                                                     (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                      >> 6U)) 
                                                             << 6U)))))
                                    : ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT____Vcellout__addressmux____pinNumber4 
                                        << 0xcU) | (QData)((IData)(
                                                                   (0xfc0U 
                                                                    & ((IData)(
                                                                               (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                                >> 6U)) 
                                                                       << 6U))))))
                                : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)),56);
    bufp->chgCData(oldp+1965,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
                               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__SelAdrData))),2);
    bufp->chgCData(oldp+1966,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__SelAdrData) 
                                  | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__GatedStallD)))),2);
    bufp->chgQData(oldp+1967,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                              [2U]),44);
    bufp->chgQData(oldp+1969,(((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                [2U] << 0xcU) | (QData)((IData)(
                                                                (0xfc0U 
                                                                 & ((IData)(
                                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                             >> 6U)) 
                                                                    << 6U)))))),56);
    bufp->chgQData(oldp+1971,((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                               [2U] << 0xcU)),56);
    bufp->chgBit(oldp+1973,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__0__KET____DOT__SelectedWriteWordEn));
    bufp->chgBit(oldp+1974,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__1__KET____DOT__SelectedWriteWordEn));
    bufp->chgBit(oldp+1975,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__2__KET____DOT__SelectedWriteWordEn));
    bufp->chgBit(oldp+1976,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__3__KET____DOT__SelectedWriteWordEn));
    bufp->chgQData(oldp+1977,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid[0]),44);
    bufp->chgQData(oldp+1979,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid[1]),44);
    bufp->chgQData(oldp+1981,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid[2]),44);
    bufp->chgBit(oldp+1983,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT____VdfgRegularize_hb604bb0f_0_1) 
                             & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__HitWay)))));
    bufp->chgCData(oldp+1984,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__LRUWriteEn) 
                                & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheSetLRU) 
                                   == (0x3fU & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 6U)))))
                                ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__NextLRU)
                                : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__LRUMemory
                               [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheSetLRU])),3);
    bufp->chgBit(oldp+1985,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__LRUWriteEn) 
                             & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheSetLRU) 
                                == (0x3fU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 6U)))))));
    bufp->chgCData(oldp+1986,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__Intermediate[0]),2);
    bufp->chgCData(oldp+1987,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__Intermediate[1]),2);
    bufp->chgCData(oldp+1988,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__Intermediate[2]),2);
    bufp->chgCData(oldp+1989,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__Intermediate
                              [2U]),2);
    bufp->chgQData(oldp+1990,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam.CAMHit)
                                ? ((0xffffffffff0000ULL 
                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed 
                                       << 0xcU)) | (QData)((IData)(
                                                                   ((0xf000U 
                                                                     & (((0x800U 
                                                                          & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))
                                                                          ? (IData)(
                                                                                (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                                >> 0xcU))
                                                                          : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed)) 
                                                                        << 0xcU)) 
                                                                    | (0xfffU 
                                                                       & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF))))))
                                : 0ULL)),56);
    bufp->chgCData(oldp+1992,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__PBMemoryType),2);
    bufp->chgQData(oldp+1993,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam.CAMHit)
                                ? ((0xffffffffff0ULL 
                                    & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed) 
                                   | (QData)((IData)(
                                                     (0xfU 
                                                      & ((0x800U 
                                                          & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))
                                                          ? (IData)(
                                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                     >> 0xcU))
                                                          : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed))))))
                                : 0ULL)),44);
    bufp->chgBit(oldp+1995,((((4U == vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam.__PVT__PageTypeOr__DOT__genblk1__DOT__mid
                               [0x1eU]) & (0U != (0xfffffffffULL 
                                                  & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                     [0x1eU] 
                                                     >> 0xaU)))) 
                             | (((3U == vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam.__PVT__PageTypeOr__DOT__genblk1__DOT__mid
                                  [0x1eU]) & (0U != 
                                              (0x7ffffffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                          [0x1eU] 
                                                          >> 0xaU))))) 
                                | (((2U == vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam.__PVT__PageTypeOr__DOT__genblk1__DOT__mid
                                     [0x1eU]) & (0U 
                                                 != 
                                                 (0x3ffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                             [0x1eU] 
                                                             >> 0xaU))))) 
                                   | ((1U == vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam.__PVT__PageTypeOr__DOT__genblk1__DOT__mid
                                       [0x1eU]) & (0U 
                                                   != 
                                                   (0x1ffU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                               [0x1eU] 
                                                               >> 0xaU))))))))));
    bufp->chgQData(oldp+1996,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed),44);
    bufp->chgQData(oldp+1998,(((0xffffffffff0ULL & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed) 
                               | (QData)((IData)((0xfU 
                                                  & ((0x800U 
                                                      & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))
                                                      ? (IData)(
                                                                (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                 >> 0xcU))
                                                      : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed))))))),44);
    bufp->chgCData(oldp+2000,((0xfU & ((0x800U & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))
                                        ? (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))
                                        : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed)))),4);
    bufp->chgCData(oldp+2001,((0xfU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed))),4);
    bufp->chgBit(oldp+2002,((((~ ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                  >> 4U)) & (0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW))) 
                             | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                                & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                   >> 4U)))));
    bufp->chgBit(oldp+2003,((1U & ((~ ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                                >> 0x3eU)) 
                                       | (0U == (3U 
                                                 & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                    >> 9U))))) 
                                   | (3U == (3U & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                   >> 9U)))))));
    bufp->chgBit(oldp+2004,(((0xbU != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)) 
                             | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__StartWalk))));
    bufp->chgIData(oldp+2005,(((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState))
                                ? VL_SHIFTR_III(32,32,32, vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__swbytemask__DOT__genblk1__DOT__ExtendedByteMask, 0x10U)
                                : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__SelSpillE)
                                    ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ByteMaskM)
                                    : ((0xffff0000U 
                                        & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__swbytemask__DOT__genblk1__DOT__ExtendedByteMask) 
                                       | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ByteMaskM))))),32);
    bufp->chgBit(oldp+2006,((((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__MemAccessDoneM)) 
                              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__StartWalk)) 
                             | ((0xbU != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)) 
                                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__HPTWFaultM)))));
    bufp->chgQData(oldp+2007,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache)
                                ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                    [2U] << 0xcU) | (QData)((IData)(
                                                                    ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__FlushAdr) 
                                                                     << 6U))))
                                : ((((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                     & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck)) 
                                        | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_6))) 
                                    | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_21) 
                                       & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay))))
                                    ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                        [2U] << 0xcU) 
                                       | (QData)((IData)(
                                                         (0xfc0U 
                                                          & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U]))))
                                    : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____Vcellinp__CacheBusAdrMux__d0))),56);
    bufp->chgBit(oldp+2009,((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                              & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_11) 
                                 | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__BusWrite))) 
                             | (((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                 & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_11)) 
                                | (((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                    & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_11)) 
                                   | (((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                       & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_11)) 
                                      | ((6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                         | (5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)))))))));
    bufp->chgCData(oldp+2010,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_23)
                                ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT__SquashSCM)
                                    ? 0U : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM))
                                : 0U)),2);
    bufp->chgCData(oldp+2011,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_24)
                                ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT__SquashSCM)
                                    ? 0U : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM))
                                : 0U)),2);
    bufp->chgCData(oldp+2012,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__SelDTIM) 
                                << 1U) | (1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheableOrFlushCacheM))))),2);
    bufp->chgQData(oldp+2013,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheableOrFlushCacheM)
                                ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache)
                                    ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                        [2U] << 0xcU) 
                                       | (QData)((IData)(
                                                         ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__FlushAdr) 
                                                          << 6U))))
                                    : ((((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                         & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck)) 
                                            | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_6))) 
                                        | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_21) 
                                           & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay))))
                                        ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                            [2U] << 0xcU) 
                                           | (QData)((IData)(
                                                             (0xfc0U 
                                                              & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U]))))
                                        : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____Vcellinp__CacheBusAdrMux__d0))
                                : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BusCMOZero)
                                    ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____Vcellinp__CacheBusAdrMux__d0
                                    : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM))),56);
    bufp->chgQData(oldp+2015,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheableOrFlushCacheM)
                                ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__genblk2__DOT__AHBWordSets
                               [(1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BeatCount))]
                                : (((QData)((IData)(
                                                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUWriteDataM[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUWriteDataM[0U]))))),64);
    bufp->chgQData(oldp+2017,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BusCMOZero)
                                ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____Vcellinp__CacheBusAdrMux__d0
                                : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)),56);
    bufp->chgCData(oldp+2019,((0xffU & ((VL_SHIFTL_III(8,32,32, (IData)(1U), 
                                                       ((IData)(1U) 
                                                        << (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUHSIZEOut))) 
                                         - (IData)(1U)) 
                                        << (7U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUHADDROut))))),8);
    bufp->chgCData(oldp+2020,((7U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUHADDROut))),3);
    bufp->chgBit(oldp+2021,((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                              & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_0) 
                                 | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_22))) 
                             | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_23))));
    bufp->chgBit(oldp+2022,((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_22)) 
                             | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_23))));
    bufp->chgCData(oldp+2023,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache) 
                                << 1U) | ((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                            & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_0) 
                                               | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_22))) 
                                           | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_23)) 
                                          | (0xbU != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState))))),2);
    bufp->chgCData(oldp+2024,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache) 
                                << 1U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____VdfgRegularize_h1936c9d4_1_0))),2);
    bufp->chgCData(oldp+2025,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache) 
                                << 1U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____VdfgRegularize_h1936c9d4_1_0) 
                                          | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT____Vcellinp__bus__DOT__dcache__DOT__dcache__Stall)))),2);
    bufp->chgQData(oldp+2026,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                              [2U]),44);
    bufp->chgBit(oldp+2028,((((5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                              & ((~ (IData)((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay)))) 
                                 & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__FlushFlag))) 
                             | ((6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__FlushFlag) 
                                   & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck))))));
    bufp->chgBit(oldp+2029,((((~ (IData)((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay)))) 
                              & (5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState))) 
                             | ((6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck)))));
    bufp->chgBit(oldp+2030,((((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                              & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck)) 
                                 | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_6))) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_21) 
                                & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay))))));
    bufp->chgQData(oldp+2031,(((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                [2U] << 0xcU) | (QData)((IData)(
                                                                (0xfc0U 
                                                                 & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U]))))),56);
    bufp->chgQData(oldp+2033,(((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                [2U] << 0xcU) | (QData)((IData)(
                                                                ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__FlushAdr) 
                                                                 << 6U))))),56);
    bufp->chgCData(oldp+2035,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache) 
                                << 1U) | (((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                           & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck)) 
                                              | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_6))) 
                                          | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_21) 
                                             & (0U 
                                                != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay)))))),2);
    bufp->chgQData(oldp+2036,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid[0]),44);
    bufp->chgQData(oldp+2038,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid[1]),44);
    bufp->chgQData(oldp+2040,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid[2]),44);
    bufp->chgQData(oldp+2042,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__SetDirty)
                                ? (~ vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__WriteSelLogic__DOT__DemuxedByteMask)
                                : 0xffffffffffffffffULL)),64);
    bufp->chgQData(oldp+2044,((QData)((IData)(((1U 
                                                == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState))
                                                ? VL_SHIFTR_III(32,32,32, vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__swbytemask__DOT__genblk1__DOT__ExtendedByteMask, 0x10U)
                                                : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__SelSpillE)
                                                    ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ByteMaskM)
                                                    : 
                                                   ((0xffff0000U 
                                                     & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__swbytemask__DOT__genblk1__DOT__ExtendedByteMask) 
                                                    | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ByteMaskM))))))),64);
    bufp->chgBit(oldp+2046,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyUpdateHit));
    bufp->chgBit(oldp+2047,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyUpdateHit) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_1) 
                                & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__HitWay))))));
    bufp->chgBit(oldp+2048,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyMiss));
    bufp->chgBit(oldp+2049,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__StallConditions));
    bufp->chgBit(oldp+2050,(((~ (IData)((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__HitWay)))) 
                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_1))));
    bufp->chgCData(oldp+2051,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LRUWriteEn) 
                                & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetLRU) 
                                   == (0x3fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 6U))))
                                ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__NextLRU)
                                : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__LRUMemory
                               [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetLRU])),3);
    bufp->chgBit(oldp+2052,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__PreUpdateDA) 
                             & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h84efdca8_0_0) 
                                & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__TLBPageFault)) 
                                   & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                              >> 0x3dU)))))));
    bufp->chgQData(oldp+2053,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__TLBHit)
                                ? ((0xffffffffff0000ULL 
                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed 
                                       << 0xcU)) | (QData)((IData)(
                                                                   ((0xf000U 
                                                                     & (((0x800U 
                                                                          & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))
                                                                          ? 
                                                                         ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                                           << 0x14U) 
                                                                          | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                                             >> 0xcU))
                                                                          : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed)) 
                                                                        << 0xcU)) 
                                                                    | (0xfffU 
                                                                       & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])))))
                                : 0ULL)),56);
    bufp->chgBit(oldp+2055,((IData)(((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM)) 
                                     & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__PMAAccessFault)))));
    bufp->chgBit(oldp+2056,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_27) 
                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__PMAAccessFault))));
    bufp->chgQData(oldp+2057,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__TLBHit)
                                ? ((0xffffffffff0ULL 
                                    & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed) 
                                   | (QData)((IData)(
                                                     (0xfU 
                                                      & ((0x800U 
                                                          & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))
                                                          ? 
                                                         ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                           << 0x14U) 
                                                          | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                             >> 0xcU))
                                                          : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed))))))
                                : 0ULL)),44);
    bufp->chgBit(oldp+2059,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__PMAAccessFault));
    bufp->chgBit(oldp+2060,((((4U == vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.__PVT__PageTypeOr__DOT__genblk1__DOT__mid
                               [0x1eU]) & (0U != (0xfffffffffULL 
                                                  & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                     [0x1eU] 
                                                     >> 0xaU)))) 
                             | (((3U == vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.__PVT__PageTypeOr__DOT__genblk1__DOT__mid
                                  [0x1eU]) & (0U != 
                                              (0x7ffffffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                          [0x1eU] 
                                                          >> 0xaU))))) 
                                | (((2U == vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.__PVT__PageTypeOr__DOT__genblk1__DOT__mid
                                     [0x1eU]) & (0U 
                                                 != 
                                                 (0x3ffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                             [0x1eU] 
                                                             >> 0xaU))))) 
                                   | ((1U == vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.__PVT__PageTypeOr__DOT__genblk1__DOT__mid
                                       [0x1eU]) & (0U 
                                                   != 
                                                   (0x1ffU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                               [0x1eU] 
                                                               >> 0xaU))))))))));
    bufp->chgQData(oldp+2061,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed),44);
    bufp->chgQData(oldp+2063,(((0xffffffffff0ULL & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed) 
                               | (QData)((IData)((0xfU 
                                                  & ((0x800U 
                                                      & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))
                                                      ? 
                                                     ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       << 0x14U) 
                                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                         >> 0xcU))
                                                      : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed))))))),44);
    bufp->chgCData(oldp+2065,((0xfU & ((0x800U & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))
                                        ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            << 0x14U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0xcU))
                                        : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed)))),4);
    bufp->chgCData(oldp+2066,((0xfU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed))),4);
    bufp->chgBit(oldp+2067,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__MemAccessDoneM)) 
                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__MemAccessPerformedM))));
    bufp->chgBit(oldp+2068,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__StartWalk));
    bufp->chgBit(oldp+2069,((((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__DCacheBusStallM)) 
                              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____VdfgRegularize_h1afdae1e_1_18)) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__UpdatePTE) 
                                | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____VdfgRegularize_h1afdae1e_1_6)))));
    bufp->chgQData(oldp+2070,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____VdfgRegularize_h1afdae1e_1_6)
                                ? 0ULL : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__UpdatePTE)
                                           ? ((0xffffffffffffff00ULL 
                                               & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PTE) 
                                              | (QData)((IData)(
                                                                (0x40U 
                                                                 | ((0x80U 
                                                                     & (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__hptwwrites__DOT__SetDirty) 
                                                                         | (IData)(
                                                                                (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PTE 
                                                                                >> 7U))) 
                                                                        << 7U)) 
                                                                    | (0x3fU 
                                                                       & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PTE)))))))
                                           : (((QData)((IData)(
                                                               vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ReadDataM[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ReadDataM[0U])))))),64);
    bufp->chgCData(oldp+2072,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState),4);
    bufp->chgBit(oldp+2073,(((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState)) 
                             | ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState)) 
                                | ((5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState)) 
                                   | ((7U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState)) 
                                      | (9U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState))))))));
    bufp->chgCData(oldp+2074,(((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState))
                                ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__ValidSpillM)
                                    ? 1U : 0U) : ((1U 
                                                   == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState))
                                                   ? 
                                                  ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StallM)
                                                    ? 1U
                                                    : 0U)
                                                   : 0U))),2);
    bufp->chgBit(oldp+2075,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushM)) 
                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT____VdfgRegularize_h1c9cfb2e_0_0))));
    bufp->chgCData(oldp+2076,((((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState)) 
                                << 1U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__SelSpillE))),2);
    bufp->chgBit(oldp+2077,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MTrapM) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMWriteM) 
                                & (0x341U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                              >> 0x14U))))));
    bufp->chgBit(oldp+2078,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MTrapM) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMWriteM) 
                                & (0x342U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                              >> 0x14U))))));
    bufp->chgBit(oldp+2079,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MTrapM) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMWriteM) 
                                & (0x343U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                              >> 0x14U))))));
    bufp->chgBit(oldp+2080,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__STrapM) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRSWriteM) 
                                & (0x141U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                              >> 0x14U))))));
    bufp->chgBit(oldp+2081,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__STrapM) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRSWriteM) 
                                & (0x142U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                              >> 0x14U))))));
    bufp->chgBit(oldp+2082,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__STrapM) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRSWriteM) 
                                & (0x143U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                              >> 0x14U))))));
    bufp->chgCData(oldp+2083,(((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrPageFaultF) 
                                 << 3U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrAccessFaultF) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__HPTWInstrAccessFaultHeldF) 
                                   << 1U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__HPTWInstrPageFaultHeldF)))),4);
    bufp->chgBit(oldp+2084,(((0xffffffffffffffULL == 
                              (0xffffffffffffffULL 
                               & (0xfffULL | (~ (0x1000ULL 
                                                 ^ vlSelfRef.testbench__DOT__HADDR))))) 
                             & (0xfU >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->chgBit(oldp+2085,(((0xffffffffffffffULL == 
                              (0xffffffffffffffULL 
                               & (0xffffULL | (~ (0x2000000ULL 
                                                  ^ vlSelfRef.testbench__DOT__HADDR))))) 
                             & (0xfU >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->chgBit(oldp+2086,(((0xffffffffffffffULL == 
                              (0xffffffffffffffULL 
                               & (0xffULL | (~ (0x10060000ULL 
                                                ^ vlSelfRef.testbench__DOT__HADDR))))) 
                             & (4U >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->chgBit(oldp+2087,(((0xffffffffffffffULL == 
                              (0xffffffffffffffULL 
                               & (0x3ffffffULL | (~ 
                                                  (0xc000000ULL 
                                                   ^ vlSelfRef.testbench__DOT__HADDR))))) 
                             & (4U >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->chgBit(oldp+2088,(((0xffffffffffffffULL == 
                              (0xffffffffffffffULL 
                               & (0xffULL | (~ (0x10020000ULL 
                                                ^ vlSelfRef.testbench__DOT__HADDR))))) 
                             & (4U >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->chgBit(oldp+2089,(((0xffffffffffffffULL == 
                              (0xffffffffffffffULL 
                               & (0xfffULL | (~ (0x10040000ULL 
                                                 ^ vlSelfRef.testbench__DOT__HADDR))))) 
                             & (4U >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->chgBit(oldp+2090,(((0xffffffffffffffULL == 
                              (0xffffffffffffffULL 
                               & (7ULL | (~ (0x10000000ULL 
                                             ^ vlSelfRef.testbench__DOT__HADDR))))) 
                             & (1U >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->chgBit(oldp+2091,(((0xffffffffffffffULL == 
                              (0xffffffffffffffULL 
                               & (0x7ffffffULL | (~ 
                                                  (0x80000000ULL 
                                                   ^ vlSelfRef.testbench__DOT__HADDR))))) 
                             & (0xfU >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->chgBit(oldp+2092,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ahbapbbridge__DOT__initTrans) 
                             & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT____Vcellinp__ahbapbbridge__HSEL)))));
    bufp->chgCData(oldp+2093,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT____Vcellinp__ahbapbbridge__HSEL) 
                               & (- (IData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ahbapbbridge__DOT__initTrans))))),7);
    bufp->chgBit(oldp+2094,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ram__DOT__ram__DOT__initTrans) 
                             & (IData)(vlSelfRef.testbench__DOT__HWRITE))));
    bufp->chgBit(oldp+2095,(((~ (IData)(vlSelfRef.testbench__DOT__HWRITE)) 
                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ram__DOT__ram__DOT__initTrans))));
    bufp->chgBit(oldp+2096,((1U & (~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ram__DOT__ram__DOT__memwriteD) 
                                      & ((~ (IData)(vlSelfRef.testbench__DOT__HWRITE)) 
                                         & (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ram__DOT__ram__DOT__initTrans)))))));
    bufp->chgBit(oldp+2097,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__EdgePulse) 
                             & (2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__NextState)))));
    bufp->chgBit(oldp+2098,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__TransmitStartD) 
                             | (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__ContinueTransmit))));
    bufp->chgQData(oldp+2099,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET__.__PVT__SetValidWay)
                                ? 0xffffffffffffffffULL
                                : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineByteMask)),64);
    bufp->chgBit(oldp+2101,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                             & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                                & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET__.__PVT__SelectedWay)))));
    bufp->chgBit(oldp+2102,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                             & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET__.__PVT__SelectedWay))));
    bufp->chgQData(oldp+2103,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__2__KET__.__PVT__SetValidWay)
                                ? 0xffffffffffffffffULL
                                : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineByteMask)),64);
    bufp->chgBit(oldp+2105,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                             & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                                & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__2__KET__.__PVT__SelectedWay)))));
    bufp->chgBit(oldp+2106,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                             & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__2__KET__.__PVT__SelectedWay))));
    bufp->chgQData(oldp+2107,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__1__KET__.__PVT__SetValidWay)
                                ? 0xffffffffffffffffULL
                                : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineByteMask)),64);
    bufp->chgBit(oldp+2109,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                             & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                                & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__1__KET__.__PVT__SelectedWay)))));
    bufp->chgBit(oldp+2110,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                             & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__1__KET__.__PVT__SelectedWay))));
    bufp->chgQData(oldp+2111,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__0__KET__.__PVT__SetValidWay)
                                ? 0xffffffffffffffffULL
                                : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineByteMask)),64);
    bufp->chgBit(oldp+2113,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                             & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                                & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__0__KET__.__PVT__SelectedWay)))));
    bufp->chgBit(oldp+2114,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                             & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__0__KET__.__PVT__SelectedWay))));
}
