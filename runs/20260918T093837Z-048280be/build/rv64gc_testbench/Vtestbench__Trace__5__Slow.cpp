// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


VL_ATTR_COLD void Vtestbench___024root__trace_full_0_sub_3(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_0_sub_3\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    bufp->fullBit(oldp+27081,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 0x15U))));
    bufp->fullQData(oldp+27082,(((0x200000U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__21__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__21__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
    bufp->fullBit(oldp+27084,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__21__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
    bufp->fullBit(oldp+27085,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__21__KET____DOT__genblk1__DOT__ptereg)))));
    bufp->fullQData(oldp+27086,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__21__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__21__KET____DOT__genblk1__DOT__ptereg))),64);
    bufp->fullQData(oldp+27088,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__21__KET____DOT__genblk1__DOT__ptereg),58);
    bufp->fullBit(oldp+27090,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 0x16U))));
    bufp->fullBit(oldp+27091,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 0x16U))));
    bufp->fullQData(oldp+27092,(((0x400000U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__22__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__22__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
    bufp->fullBit(oldp+27094,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__22__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
    bufp->fullBit(oldp+27095,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__22__KET____DOT__genblk1__DOT__ptereg)))));
    bufp->fullQData(oldp+27096,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__22__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__22__KET____DOT__genblk1__DOT__ptereg))),64);
    bufp->fullQData(oldp+27098,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__22__KET____DOT__genblk1__DOT__ptereg),58);
    bufp->fullBit(oldp+27100,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 0x17U))));
    bufp->fullBit(oldp+27101,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 0x17U))));
    bufp->fullQData(oldp+27102,(((0x800000U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__23__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__23__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
    bufp->fullBit(oldp+27104,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__23__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
    bufp->fullBit(oldp+27105,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__23__KET____DOT__genblk1__DOT__ptereg)))));
    bufp->fullQData(oldp+27106,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__23__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__23__KET____DOT__genblk1__DOT__ptereg))),64);
    bufp->fullQData(oldp+27108,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__23__KET____DOT__genblk1__DOT__ptereg),58);
    bufp->fullBit(oldp+27110,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 0x18U))));
    bufp->fullBit(oldp+27111,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 0x18U))));
    bufp->fullQData(oldp+27112,(((0x1000000U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__24__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__24__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
    bufp->fullBit(oldp+27114,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__24__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
    bufp->fullBit(oldp+27115,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__24__KET____DOT__genblk1__DOT__ptereg)))));
    bufp->fullQData(oldp+27116,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__24__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__24__KET____DOT__genblk1__DOT__ptereg))),64);
    bufp->fullQData(oldp+27118,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__24__KET____DOT__genblk1__DOT__ptereg),58);
    bufp->fullBit(oldp+27120,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 0x19U))));
    bufp->fullBit(oldp+27121,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 0x19U))));
    bufp->fullQData(oldp+27122,(((0x2000000U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__25__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__25__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
    bufp->fullBit(oldp+27124,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__25__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
    bufp->fullBit(oldp+27125,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__25__KET____DOT__genblk1__DOT__ptereg)))));
    bufp->fullQData(oldp+27126,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__25__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__25__KET____DOT__genblk1__DOT__ptereg))),64);
    bufp->fullQData(oldp+27128,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__25__KET____DOT__genblk1__DOT__ptereg),58);
    bufp->fullBit(oldp+27130,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+27131,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 0x1aU))));
    bufp->fullQData(oldp+27132,(((0x4000000U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__26__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__26__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
    bufp->fullBit(oldp+27134,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__26__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
    bufp->fullBit(oldp+27135,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__26__KET____DOT__genblk1__DOT__ptereg)))));
    bufp->fullQData(oldp+27136,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__26__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__26__KET____DOT__genblk1__DOT__ptereg))),64);
    bufp->fullQData(oldp+27138,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__26__KET____DOT__genblk1__DOT__ptereg),58);
    bufp->fullBit(oldp+27140,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+27141,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 0x1bU))));
    bufp->fullQData(oldp+27142,(((0x8000000U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__27__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__27__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
    bufp->fullBit(oldp+27144,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__27__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
    bufp->fullBit(oldp+27145,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__27__KET____DOT__genblk1__DOT__ptereg)))));
    bufp->fullQData(oldp+27146,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__27__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__27__KET____DOT__genblk1__DOT__ptereg))),64);
    bufp->fullQData(oldp+27148,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__27__KET____DOT__genblk1__DOT__ptereg),58);
    bufp->fullBit(oldp+27150,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+27151,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 0x1cU))));
    bufp->fullQData(oldp+27152,(((0x10000000U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__28__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__28__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
    bufp->fullBit(oldp+27154,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__28__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
    bufp->fullBit(oldp+27155,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__28__KET____DOT__genblk1__DOT__ptereg)))));
    bufp->fullQData(oldp+27156,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__28__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__28__KET____DOT__genblk1__DOT__ptereg))),64);
    bufp->fullQData(oldp+27158,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__28__KET____DOT__genblk1__DOT__ptereg),58);
    bufp->fullBit(oldp+27160,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+27161,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 0x1dU))));
    bufp->fullQData(oldp+27162,(((0x20000000U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__29__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__29__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
    bufp->fullBit(oldp+27164,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__29__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
    bufp->fullBit(oldp+27165,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__29__KET____DOT__genblk1__DOT__ptereg)))));
    bufp->fullQData(oldp+27166,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__29__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__29__KET____DOT__genblk1__DOT__ptereg))),64);
    bufp->fullQData(oldp+27168,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__29__KET____DOT__genblk1__DOT__ptereg),58);
    bufp->fullBit(oldp+27170,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 2U))));
    bufp->fullBit(oldp+27171,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 2U))));
    bufp->fullQData(oldp+27172,(((4U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__2__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__2__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
    bufp->fullBit(oldp+27174,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__2__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
    bufp->fullBit(oldp+27175,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__2__KET____DOT__genblk1__DOT__ptereg)))));
    bufp->fullQData(oldp+27176,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__2__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__2__KET____DOT__genblk1__DOT__ptereg))),64);
    bufp->fullQData(oldp+27178,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__2__KET____DOT__genblk1__DOT__ptereg),58);
    bufp->fullBit(oldp+27180,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+27181,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 0x1eU))));
    bufp->fullQData(oldp+27182,(((0x40000000U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__30__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__30__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
    bufp->fullBit(oldp+27184,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__30__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
    bufp->fullBit(oldp+27185,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__30__KET____DOT__genblk1__DOT__ptereg)))));
    bufp->fullQData(oldp+27186,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__30__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__30__KET____DOT__genblk1__DOT__ptereg))),64);
    bufp->fullQData(oldp+27188,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__30__KET____DOT__genblk1__DOT__ptereg),58);
    bufp->fullBit(oldp+27190,((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                               >> 0x1fU)));
    bufp->fullBit(oldp+27191,((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                               >> 0x1fU)));
    bufp->fullQData(oldp+27192,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                  >> 0x1fU) ? (((QData)((IData)(
                                                                (0xfU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__31__KET____DOT__genblk1__DOT__ptereg 
                                                                            >> 0x36U))))) 
                                                << 0x3cU) 
                                               | (0x3fffffffffffffULL 
                                                  & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__31__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
    bufp->fullBit(oldp+27194,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__31__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
    bufp->fullBit(oldp+27195,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__31__KET____DOT__genblk1__DOT__ptereg)))));
    bufp->fullQData(oldp+27196,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__31__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__31__KET____DOT__genblk1__DOT__ptereg))),64);
    bufp->fullQData(oldp+27198,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__31__KET____DOT__genblk1__DOT__ptereg),58);
    bufp->fullBit(oldp+27200,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 3U))));
    bufp->fullBit(oldp+27201,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 3U))));
    bufp->fullQData(oldp+27202,(((8U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__3__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__3__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
    bufp->fullBit(oldp+27204,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__3__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
    bufp->fullBit(oldp+27205,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__3__KET____DOT__genblk1__DOT__ptereg)))));
    bufp->fullQData(oldp+27206,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__3__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__3__KET____DOT__genblk1__DOT__ptereg))),64);
    bufp->fullQData(oldp+27208,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__3__KET____DOT__genblk1__DOT__ptereg),58);
    bufp->fullBit(oldp+27210,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 4U))));
    bufp->fullBit(oldp+27211,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 4U))));
    bufp->fullQData(oldp+27212,(((0x10U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__4__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__4__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
    bufp->fullBit(oldp+27214,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__4__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
    bufp->fullBit(oldp+27215,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__4__KET____DOT__genblk1__DOT__ptereg)))));
    bufp->fullQData(oldp+27216,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__4__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__4__KET____DOT__genblk1__DOT__ptereg))),64);
    bufp->fullQData(oldp+27218,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__4__KET____DOT__genblk1__DOT__ptereg),58);
    bufp->fullBit(oldp+27220,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 5U))));
    bufp->fullBit(oldp+27221,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 5U))));
    bufp->fullQData(oldp+27222,(((0x20U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__5__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__5__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
    bufp->fullBit(oldp+27224,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__5__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
    bufp->fullBit(oldp+27225,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__5__KET____DOT__genblk1__DOT__ptereg)))));
    bufp->fullQData(oldp+27226,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__5__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__5__KET____DOT__genblk1__DOT__ptereg))),64);
    bufp->fullQData(oldp+27228,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__5__KET____DOT__genblk1__DOT__ptereg),58);
    bufp->fullBit(oldp+27230,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 6U))));
    bufp->fullBit(oldp+27231,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 6U))));
    bufp->fullQData(oldp+27232,(((0x40U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__6__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__6__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
    bufp->fullBit(oldp+27234,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__6__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
    bufp->fullBit(oldp+27235,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__6__KET____DOT__genblk1__DOT__ptereg)))));
    bufp->fullQData(oldp+27236,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__6__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__6__KET____DOT__genblk1__DOT__ptereg))),64);
    bufp->fullQData(oldp+27238,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__6__KET____DOT__genblk1__DOT__ptereg),58);
    bufp->fullBit(oldp+27240,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 7U))));
    bufp->fullBit(oldp+27241,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 7U))));
    bufp->fullQData(oldp+27242,(((0x80U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__7__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__7__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
    bufp->fullBit(oldp+27244,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__7__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
    bufp->fullBit(oldp+27245,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__7__KET____DOT__genblk1__DOT__ptereg)))));
    bufp->fullQData(oldp+27246,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__7__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__7__KET____DOT__genblk1__DOT__ptereg))),64);
    bufp->fullQData(oldp+27248,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__7__KET____DOT__genblk1__DOT__ptereg),58);
    bufp->fullBit(oldp+27250,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 8U))));
    bufp->fullBit(oldp+27251,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 8U))));
    bufp->fullQData(oldp+27252,(((0x100U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__8__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__8__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
    bufp->fullBit(oldp+27254,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__8__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
    bufp->fullBit(oldp+27255,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__8__KET____DOT__genblk1__DOT__ptereg)))));
    bufp->fullQData(oldp+27256,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__8__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__8__KET____DOT__genblk1__DOT__ptereg))),64);
    bufp->fullQData(oldp+27258,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__8__KET____DOT__genblk1__DOT__ptereg),58);
    bufp->fullBit(oldp+27260,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches 
                                     >> 9U))));
    bufp->fullBit(oldp+27261,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     >> 9U))));
    bufp->fullQData(oldp+27262,(((0x200U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches)
                                  ? (((QData)((IData)(
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__9__KET____DOT__genblk1__DOT__ptereg 
                                                                  >> 0x36U))))) 
                                      << 0x3cU) | (0x3fffffffffffffULL 
                                                   & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__9__KET____DOT__genblk1__DOT__ptereg))
                                  : 0ULL)),64);
    bufp->fullBit(oldp+27264,((1U & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__9__KET____DOT__genblk1__DOT__ptereg 
                                             >> 5U)))));
    bufp->fullBit(oldp+27265,((IData)((0x200000000002000ULL 
                                       == (0x200000000003c00ULL 
                                           & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__9__KET____DOT__genblk1__DOT__ptereg)))));
    bufp->fullQData(oldp+27266,((((QData)((IData)((0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__9__KET____DOT__genblk1__DOT__ptereg 
                                                              >> 0x36U))))) 
                                  << 0x3cU) | (0x3fffffffffffffULL 
                                               & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__9__KET____DOT__genblk1__DOT__ptereg))),64);
    bufp->fullQData(oldp+27268,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__tlbramline__BRA__9__KET____DOT__genblk1__DOT__ptereg),58);
    bufp->fullBit(oldp+27270,((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                               >> 0x1fU)));
    bufp->fullBit(oldp+27271,((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x1fU)));
    bufp->fullCData(oldp+27272,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27273,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Match));
    bufp->fullBit(oldp+27274,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27275,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27277,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27278,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27279,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27280,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullSData(oldp+27281,((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU)))),9);
    bufp->fullSData(oldp+27282,((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U)))),9);
    bufp->fullBit(oldp+27283,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                >> 0x1fU) | ((0xffffU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                             == (0xffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                            >> 0x2dU)))))));
    bufp->fullBit(oldp+27284,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x1fU) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27285,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1fU) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27286,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27287,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27288,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27289,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27290,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__ShouldFlush));
    bufp->fullQData(oldp+27291,((((QData)((IData)((0xffffU 
                                                   & (IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                              >> 0x2cU))))) 
                                  << 0x2dU) | (0x1fffffffffffULL 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0xcU)))),61);
    bufp->fullSData(oldp+27293,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27294,((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU)))),9);
    bufp->fullSData(oldp+27295,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27296,((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U)))),9);
    bufp->fullSData(oldp+27297,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullSData(oldp+27298,((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x30U)))),9);
    bufp->fullBit(oldp+27299,(((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                >> 0x1fU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__ShouldFlush))));
    bufp->fullBit(oldp+27300,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27301,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+27302,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x1eU))));
    bufp->fullCData(oldp+27303,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27304,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Match));
    bufp->fullBit(oldp+27305,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27306,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27308,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27309,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27310,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27311,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27312,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x1eU)))));
    bufp->fullBit(oldp+27313,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x1eU) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27314,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1eU) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27315,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27316,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27317,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27318,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27319,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27320,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27321,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27322,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27323,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x1eU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27324,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27325,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+27326,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x1dU))));
    bufp->fullCData(oldp+27327,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27328,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Match));
    bufp->fullBit(oldp+27329,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27330,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27332,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27333,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27334,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27335,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27336,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x1dU)))));
    bufp->fullBit(oldp+27337,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x1dU) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27338,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1dU) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27339,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27340,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27341,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27342,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27343,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27344,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27345,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27346,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27347,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x1dU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27348,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27349,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+27350,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x1cU))));
    bufp->fullCData(oldp+27351,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27352,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Match));
    bufp->fullBit(oldp+27353,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27354,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27356,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27357,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27358,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27359,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27360,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x1cU)))));
    bufp->fullBit(oldp+27361,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x1cU) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27362,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1cU) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27363,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27364,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27365,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27366,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27367,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27368,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27369,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27370,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27371,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x1cU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27372,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27373,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+27374,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+27375,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27376,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Match));
    bufp->fullBit(oldp+27377,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27378,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27380,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27381,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27382,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27383,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27384,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x1bU)))));
    bufp->fullBit(oldp+27385,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x1bU) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27386,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1bU) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27387,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27388,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27389,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27390,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27391,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27392,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27393,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27394,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27395,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x1bU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27396,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27397,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+27398,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x1aU))));
    bufp->fullCData(oldp+27399,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27400,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Match));
    bufp->fullBit(oldp+27401,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27402,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27404,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27405,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27406,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27407,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27408,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x1aU)))));
    bufp->fullBit(oldp+27409,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x1aU) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27410,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1aU) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27411,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27412,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27413,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27414,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27415,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27416,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27417,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27418,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27419,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x1aU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27420,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27421,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x19U))));
    bufp->fullBit(oldp+27422,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x19U))));
    bufp->fullCData(oldp+27423,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27424,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Match));
    bufp->fullBit(oldp+27425,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27426,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27428,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27429,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27430,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27431,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27432,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x19U)))));
    bufp->fullBit(oldp+27433,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x19U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27434,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x19U) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27435,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27436,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27437,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27438,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27439,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27440,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27441,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27442,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27443,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x19U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27444,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27445,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x18U))));
    bufp->fullBit(oldp+27446,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x18U))));
    bufp->fullCData(oldp+27447,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27448,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Match));
    bufp->fullBit(oldp+27449,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27450,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27452,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27453,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27454,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27455,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27456,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x18U)))));
    bufp->fullBit(oldp+27457,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x18U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27458,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x18U) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27459,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27460,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27461,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27462,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27463,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27464,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27465,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27466,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27467,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x18U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27468,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27469,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x17U))));
    bufp->fullBit(oldp+27470,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x17U))));
    bufp->fullCData(oldp+27471,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27472,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Match));
    bufp->fullBit(oldp+27473,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27474,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27476,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27477,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27478,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27479,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27480,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x17U)))));
    bufp->fullBit(oldp+27481,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x17U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27482,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x17U) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27483,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27484,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27485,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27486,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27487,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27488,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27489,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27490,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27491,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x17U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27492,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27493,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x16U))));
    bufp->fullBit(oldp+27494,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x16U))));
    bufp->fullCData(oldp+27495,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27496,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Match));
    bufp->fullBit(oldp+27497,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27498,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27500,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27501,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27502,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27503,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27504,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x16U)))));
    bufp->fullBit(oldp+27505,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x16U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27506,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x16U) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27507,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27508,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27509,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27510,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27511,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27512,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27513,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27514,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27515,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x16U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27516,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27517,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x15U))));
    bufp->fullBit(oldp+27518,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x15U))));
    bufp->fullCData(oldp+27519,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27520,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Match));
    bufp->fullBit(oldp+27521,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27522,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27524,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27525,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27526,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27527,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27528,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x15U)))));
    bufp->fullBit(oldp+27529,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x15U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27530,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x15U) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27531,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27532,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27533,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27534,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27535,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27536,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27537,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27538,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27539,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x15U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27540,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27541,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x14U))));
    bufp->fullBit(oldp+27542,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x14U))));
    bufp->fullCData(oldp+27543,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27544,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Match));
    bufp->fullBit(oldp+27545,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27546,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27548,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27549,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27550,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27551,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27552,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x14U)))));
    bufp->fullBit(oldp+27553,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x14U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27554,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x14U) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27555,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27556,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27557,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27558,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27559,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27560,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27561,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27562,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27563,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x14U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27564,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27565,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x13U))));
    bufp->fullBit(oldp+27566,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x13U))));
    bufp->fullCData(oldp+27567,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27568,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Match));
    bufp->fullBit(oldp+27569,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27570,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27572,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27573,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27574,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27575,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27576,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x13U)))));
    bufp->fullBit(oldp+27577,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x13U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27578,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x13U) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27579,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27580,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27581,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27582,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27583,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27584,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27585,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27586,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27587,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x13U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27588,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27589,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x12U))));
    bufp->fullBit(oldp+27590,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x12U))));
    bufp->fullCData(oldp+27591,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27592,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Match));
    bufp->fullBit(oldp+27593,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27594,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27596,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27597,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27598,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27599,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27600,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x12U)))));
    bufp->fullBit(oldp+27601,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x12U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27602,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x12U) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27603,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27604,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27605,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27606,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27607,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27608,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27609,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27610,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27611,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x12U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27612,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27613,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x11U))));
    bufp->fullBit(oldp+27614,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x11U))));
    bufp->fullCData(oldp+27615,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27616,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Match));
    bufp->fullBit(oldp+27617,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27618,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27620,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27621,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27622,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27623,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27624,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x11U)))));
    bufp->fullBit(oldp+27625,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x11U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27626,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x11U) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27627,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27628,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27629,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27630,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27631,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27632,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27633,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27634,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27635,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x11U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27636,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27637,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x10U))));
    bufp->fullBit(oldp+27638,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x10U))));
    bufp->fullCData(oldp+27639,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27640,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Match));
    bufp->fullBit(oldp+27641,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27642,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27644,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27645,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27646,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27647,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27648,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x10U)))));
    bufp->fullBit(oldp+27649,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x10U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27650,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x10U) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27651,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27652,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27653,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27654,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27655,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27656,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27657,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27658,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27659,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x10U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27660,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27661,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xfU))));
    bufp->fullBit(oldp+27662,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xfU))));
    bufp->fullCData(oldp+27663,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27664,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Match));
    bufp->fullBit(oldp+27665,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27666,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27668,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27669,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27670,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27671,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27672,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xfU)))));
    bufp->fullBit(oldp+27673,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xfU) & ((0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+27674,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xfU) & ((0x1fU 
                                                   & (IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                              >> 0x10U))) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+27675,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27676,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27677,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27678,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27679,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27680,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27681,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27682,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27683,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0xfU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27684,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27685,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xeU))));
    bufp->fullBit(oldp+27686,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xeU))));
    bufp->fullCData(oldp+27687,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27688,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Match));
    bufp->fullBit(oldp+27689,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27690,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27692,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27693,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27694,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27695,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27696,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xeU)))));
    bufp->fullBit(oldp+27697,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xeU) & ((0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+27698,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xeU) & ((0x1fU 
                                                   & (IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                              >> 0x10U))) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+27699,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27700,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27701,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27702,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27703,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27704,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27705,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27706,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27707,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0xeU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27708,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27709,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xdU))));
    bufp->fullBit(oldp+27710,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xdU))));
    bufp->fullCData(oldp+27711,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27712,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Match));
    bufp->fullBit(oldp+27713,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27714,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27716,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27717,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27718,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27719,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27720,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xdU)))));
    bufp->fullBit(oldp+27721,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xdU) & ((0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+27722,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xdU) & ((0x1fU 
                                                   & (IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                              >> 0x10U))) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+27723,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27724,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27725,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27726,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27727,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27728,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27729,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27730,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27731,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0xdU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27732,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27733,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xcU))));
    bufp->fullBit(oldp+27734,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xcU))));
    bufp->fullCData(oldp+27735,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27736,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Match));
    bufp->fullBit(oldp+27737,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27738,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27740,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27741,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27742,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27743,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27744,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+27745,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xcU) & ((0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+27746,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xcU) & ((0x1fU 
                                                   & (IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                              >> 0x10U))) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+27747,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27748,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27749,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27750,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27751,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27752,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27753,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27754,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27755,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0xcU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27756,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27757,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xbU))));
    bufp->fullBit(oldp+27758,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xbU))));
    bufp->fullCData(oldp+27759,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27760,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Match));
    bufp->fullBit(oldp+27761,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27762,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27764,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27765,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27766,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27767,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27768,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+27769,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xbU) & ((0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+27770,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xbU) & ((0x1fU 
                                                   & (IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                              >> 0x10U))) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+27771,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27772,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27773,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27774,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27775,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27776,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27777,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27778,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27779,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0xbU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27780,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27781,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xaU))));
    bufp->fullBit(oldp+27782,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xaU))));
    bufp->fullCData(oldp+27783,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27784,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Match));
    bufp->fullBit(oldp+27785,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27786,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27788,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27789,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27790,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27791,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27792,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+27793,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xaU) & ((0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+27794,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xaU) & ((0x1fU 
                                                   & (IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                              >> 0x10U))) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+27795,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27796,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27797,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27798,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27799,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27800,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27801,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27802,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27803,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0xaU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27804,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27805,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 9U))));
    bufp->fullBit(oldp+27806,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 9U))));
    bufp->fullCData(oldp+27807,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27808,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Match));
    bufp->fullBit(oldp+27809,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27810,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27812,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27813,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27814,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27815,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27816,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 9U)))));
    bufp->fullBit(oldp+27817,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 9U) & ((0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                            >> 0x10U))) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+27818,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27819,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27820,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27821,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27822,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27823,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27824,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27825,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27826,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27827,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 9U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27828,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27829,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 8U))));
    bufp->fullBit(oldp+27830,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 8U))));
    bufp->fullCData(oldp+27831,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27832,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Match));
    bufp->fullBit(oldp+27833,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27834,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27836,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27837,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27838,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27839,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27840,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 8U)))));
    bufp->fullBit(oldp+27841,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 8U) & ((0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                            >> 0x10U))) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+27842,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27843,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27844,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27845,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27846,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27847,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27848,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27849,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27850,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27851,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 8U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27852,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27853,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 7U))));
    bufp->fullBit(oldp+27854,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 7U))));
    bufp->fullCData(oldp+27855,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27856,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Match));
    bufp->fullBit(oldp+27857,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27858,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27860,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27861,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27862,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27863,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27864,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 7U)))));
    bufp->fullBit(oldp+27865,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 7U) & ((0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                            >> 0x10U))) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+27866,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27867,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27868,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27869,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27870,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27871,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27872,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27873,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27874,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27875,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 7U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27876,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27877,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 6U))));
    bufp->fullBit(oldp+27878,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 6U))));
    bufp->fullCData(oldp+27879,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27880,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Match));
    bufp->fullBit(oldp+27881,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27882,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27884,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27885,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27886,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27887,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27888,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 6U)))));
    bufp->fullBit(oldp+27889,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 6U) & ((0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                            >> 0x10U))) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+27890,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27891,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27892,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27893,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27894,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27895,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27896,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27897,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27898,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27899,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 6U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27900,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27901,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 5U))));
    bufp->fullBit(oldp+27902,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 5U))));
    bufp->fullCData(oldp+27903,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27904,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Match));
    bufp->fullBit(oldp+27905,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27906,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27908,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27909,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27910,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27911,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27912,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 5U)))));
    bufp->fullBit(oldp+27913,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 5U) & ((0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                            >> 0x10U))) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+27914,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27915,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27916,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27917,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27918,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27919,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27920,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27921,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27922,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27923,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 5U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27924,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27925,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 4U))));
    bufp->fullBit(oldp+27926,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 4U))));
    bufp->fullCData(oldp+27927,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27928,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Match));
    bufp->fullBit(oldp+27929,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27930,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27932,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27933,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27934,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27935,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27936,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 4U)))));
    bufp->fullBit(oldp+27937,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 4U) & ((0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                            >> 0x10U))) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+27938,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27939,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27940,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27941,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27942,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27943,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27944,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27945,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27946,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27947,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 4U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27948,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27949,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 3U))));
    bufp->fullBit(oldp+27950,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 3U))));
    bufp->fullCData(oldp+27951,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27952,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Match));
    bufp->fullBit(oldp+27953,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27954,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27956,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27957,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27958,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27959,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27960,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 3U)))));
    bufp->fullBit(oldp+27961,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 3U) & ((0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                            >> 0x10U))) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+27962,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27963,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27964,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27965,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27966,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27967,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27968,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27969,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27970,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27971,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 3U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27972,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27973,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 2U))));
    bufp->fullBit(oldp+27974,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 2U))));
    bufp->fullCData(oldp+27975,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+27976,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Match));
    bufp->fullBit(oldp+27977,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27978,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+27980,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+27981,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+27982,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27983,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27984,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 2U)))));
    bufp->fullBit(oldp+27985,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 2U) & ((0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                            >> 0x10U))) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+27986,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27987,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27988,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27989,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+27990,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27991,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+27992,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27993,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27994,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+27995,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 2U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27996,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+27997,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 1U))));
    bufp->fullBit(oldp+27998,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 1U))));
    bufp->fullCData(oldp+27999,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__PageTypeRead),3);
    bufp->fullBit(oldp+28000,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Match));
    bufp->fullBit(oldp+28001,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28002,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28004,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28005,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28006,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28007,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28008,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 1U)))));
    bufp->fullBit(oldp+28009,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 1U) & ((0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                            >> 0x10U))) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+28010,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+28011,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28012,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28013,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28014,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+28015,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28016,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28017,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28018,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28019,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 1U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28020,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28021,((1U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs)));
    bufp->fullBit(oldp+28022,((1U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs)));
    bufp->fullCData(oldp+28023,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageTypeRead),3);
    bufp->fullBit(oldp+28024,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Match));
    bufp->fullBit(oldp+28025,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28026,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28028,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28029,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28030,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28031,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28032,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs))));
    bufp->fullBit(oldp+28033,((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               & ((0x1fU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x10U))) 
                                  == (0x1fU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                       >> 4U)))))));
    bufp->fullBit(oldp+28034,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageType)) 
                                  | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     & ((0x1fU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                             >> 4U)))))))));
    bufp->fullBit(oldp+28035,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28036,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28037,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28038,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+28039,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28040,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28041,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28042,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28043,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28044,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28045,((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                               >> 0x1fU)));
    bufp->fullBit(oldp+28046,((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x1fU)));
    bufp->fullCData(oldp+28047,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28048,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Match));
    bufp->fullBit(oldp+28049,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28050,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28052,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28053,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28054,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28055,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullSData(oldp+28056,((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU))),9);
    bufp->fullSData(oldp+28057,((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U))),9);
    bufp->fullBit(oldp+28058,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                >> 0x1fU) | ((0xffffU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                             == (0xffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                            >> 0x2dU)))))));
    bufp->fullBit(oldp+28059,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x1fU) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+28060,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1fU) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+28061,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28062,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28063,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28064,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
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
    bufp->fullBit(oldp+28065,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__ShouldFlush));
    bufp->fullQData(oldp+28066,((((QData)((IData)((0xffffU 
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
    bufp->fullSData(oldp+28068,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28069,((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU)))),9);
    bufp->fullSData(oldp+28070,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28071,((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U))),9);
    bufp->fullSData(oldp+28072,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullSData(oldp+28073,((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U))),9);
    bufp->fullBit(oldp+28074,(((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                >> 0x1fU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__ShouldFlush))));
    bufp->fullBit(oldp+28075,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__31__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28076,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+28077,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x1eU))));
    bufp->fullCData(oldp+28078,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28079,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Match));
    bufp->fullBit(oldp+28080,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28081,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28083,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28084,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28085,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28086,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28087,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x1eU)))));
    bufp->fullBit(oldp+28088,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x1eU) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+28089,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1eU) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+28090,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28091,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28092,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28093,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28094,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28095,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28096,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28097,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28098,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x1eU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28099,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__30__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28100,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+28101,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x1dU))));
    bufp->fullCData(oldp+28102,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28103,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Match));
    bufp->fullBit(oldp+28104,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28105,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28107,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28108,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28109,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28110,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28111,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x1dU)))));
    bufp->fullBit(oldp+28112,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x1dU) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+28113,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1dU) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+28114,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28115,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28116,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28117,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28118,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28119,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28120,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28121,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28122,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x1dU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28123,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__29__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28124,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+28125,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x1cU))));
    bufp->fullCData(oldp+28126,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28127,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Match));
    bufp->fullBit(oldp+28128,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28129,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28131,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28132,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28133,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28134,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28135,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x1cU)))));
    bufp->fullBit(oldp+28136,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x1cU) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+28137,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1cU) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+28138,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28139,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28140,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28141,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28142,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28143,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28144,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28145,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28146,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x1cU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28147,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__28__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28148,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+28149,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+28150,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28151,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Match));
    bufp->fullBit(oldp+28152,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28153,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28155,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28156,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28157,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28158,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28159,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x1bU)))));
    bufp->fullBit(oldp+28160,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x1bU) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+28161,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1bU) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+28162,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28163,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28164,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28165,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28166,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28167,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28168,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28169,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28170,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x1bU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28171,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__27__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28172,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+28173,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x1aU))));
    bufp->fullCData(oldp+28174,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28175,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Match));
    bufp->fullBit(oldp+28176,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28177,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28179,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28180,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28181,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28182,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28183,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x1aU)))));
    bufp->fullBit(oldp+28184,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x1aU) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+28185,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1aU) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+28186,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28187,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28188,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28189,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28190,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28191,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28192,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28193,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28194,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x1aU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28195,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__26__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28196,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x19U))));
    bufp->fullBit(oldp+28197,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x19U))));
    bufp->fullCData(oldp+28198,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28199,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Match));
    bufp->fullBit(oldp+28200,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28201,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28203,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28204,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28205,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28206,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28207,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x19U)))));
    bufp->fullBit(oldp+28208,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x19U) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+28209,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x19U) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+28210,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28211,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28212,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28213,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28214,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28215,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28216,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28217,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28218,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x19U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28219,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__25__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28220,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x18U))));
    bufp->fullBit(oldp+28221,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x18U))));
    bufp->fullCData(oldp+28222,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28223,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Match));
    bufp->fullBit(oldp+28224,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28225,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28227,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28228,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28229,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28230,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28231,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x18U)))));
    bufp->fullBit(oldp+28232,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x18U) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+28233,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x18U) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+28234,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28235,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28236,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28237,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28238,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28239,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28240,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28241,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28242,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x18U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28243,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__24__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28244,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x17U))));
    bufp->fullBit(oldp+28245,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x17U))));
    bufp->fullCData(oldp+28246,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28247,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Match));
    bufp->fullBit(oldp+28248,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28249,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28251,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28252,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28253,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28254,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28255,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x17U)))));
    bufp->fullBit(oldp+28256,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x17U) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+28257,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x17U) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+28258,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28259,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28260,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28261,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28262,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28263,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28264,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28265,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28266,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x17U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28267,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__23__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28268,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x16U))));
    bufp->fullBit(oldp+28269,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x16U))));
    bufp->fullCData(oldp+28270,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28271,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Match));
    bufp->fullBit(oldp+28272,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28273,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28275,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28276,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28277,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28278,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28279,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x16U)))));
    bufp->fullBit(oldp+28280,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x16U) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+28281,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x16U) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+28282,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28283,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28284,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28285,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28286,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28287,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28288,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28289,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28290,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x16U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28291,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__22__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28292,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x15U))));
    bufp->fullBit(oldp+28293,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x15U))));
    bufp->fullCData(oldp+28294,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28295,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Match));
    bufp->fullBit(oldp+28296,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28297,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28299,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28300,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28301,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28302,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28303,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x15U)))));
    bufp->fullBit(oldp+28304,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x15U) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+28305,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x15U) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+28306,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28307,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28308,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28309,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28310,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28311,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28312,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28313,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28314,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x15U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28315,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__21__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28316,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x14U))));
    bufp->fullBit(oldp+28317,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x14U))));
    bufp->fullCData(oldp+28318,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28319,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Match));
    bufp->fullBit(oldp+28320,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28321,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28323,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28324,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28325,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28326,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28327,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x14U)))));
    bufp->fullBit(oldp+28328,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x14U) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+28329,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x14U) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+28330,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28331,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28332,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28333,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28334,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28335,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28336,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28337,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28338,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x14U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28339,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__20__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28340,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x13U))));
    bufp->fullBit(oldp+28341,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x13U))));
    bufp->fullCData(oldp+28342,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28343,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Match));
    bufp->fullBit(oldp+28344,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28345,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28347,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28348,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28349,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28350,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28351,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x13U)))));
    bufp->fullBit(oldp+28352,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x13U) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+28353,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x13U) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+28354,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28355,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28356,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28357,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28358,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28359,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28360,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28361,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28362,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x13U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28363,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__19__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28364,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x12U))));
    bufp->fullBit(oldp+28365,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x12U))));
    bufp->fullCData(oldp+28366,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28367,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Match));
    bufp->fullBit(oldp+28368,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28369,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28371,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28372,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28373,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28374,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28375,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x12U)))));
    bufp->fullBit(oldp+28376,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x12U) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+28377,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x12U) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+28378,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28379,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28380,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28381,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28382,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28383,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28384,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28385,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28386,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x12U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28387,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__18__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28388,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x11U))));
    bufp->fullBit(oldp+28389,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x11U))));
    bufp->fullCData(oldp+28390,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28391,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Match));
    bufp->fullBit(oldp+28392,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28393,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28395,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28396,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28397,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28398,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28399,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x11U)))));
    bufp->fullBit(oldp+28400,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x11U) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+28401,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x11U) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+28402,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28403,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28404,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28405,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28406,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28407,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28408,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28409,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28410,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x11U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28411,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__17__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28412,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x10U))));
    bufp->fullBit(oldp+28413,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x10U))));
    bufp->fullCData(oldp+28414,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28415,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Match));
    bufp->fullBit(oldp+28416,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28417,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28419,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28420,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28421,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28422,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28423,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x10U)))));
    bufp->fullBit(oldp+28424,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x10U) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+28425,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x10U) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+28426,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28427,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28428,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28429,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28430,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28431,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28432,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28433,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28434,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0x10U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28435,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__16__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28436,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xfU))));
    bufp->fullBit(oldp+28437,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xfU))));
    bufp->fullCData(oldp+28438,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28439,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Match));
    bufp->fullBit(oldp+28440,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28441,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28443,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28444,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28445,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28446,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28447,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xfU)))));
    bufp->fullBit(oldp+28448,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xfU) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+28449,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xfU) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+28450,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28451,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28452,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28453,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28454,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28455,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28456,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28457,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28458,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0xfU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28459,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__15__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28460,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xeU))));
    bufp->fullBit(oldp+28461,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xeU))));
    bufp->fullCData(oldp+28462,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28463,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Match));
    bufp->fullBit(oldp+28464,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28465,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28467,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28468,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28469,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28470,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28471,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xeU)))));
    bufp->fullBit(oldp+28472,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xeU) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+28473,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xeU) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+28474,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28475,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28476,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28477,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28478,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28479,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28480,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28481,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28482,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0xeU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28483,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__14__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28484,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xdU))));
    bufp->fullBit(oldp+28485,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xdU))));
    bufp->fullCData(oldp+28486,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28487,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Match));
    bufp->fullBit(oldp+28488,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28489,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28491,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28492,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28493,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28494,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28495,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xdU)))));
    bufp->fullBit(oldp+28496,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xdU) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+28497,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xdU) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+28498,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28499,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28500,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28501,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28502,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28503,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28504,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28505,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28506,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0xdU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28507,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__13__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28508,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xcU))));
    bufp->fullBit(oldp+28509,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xcU))));
    bufp->fullCData(oldp+28510,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28511,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Match));
    bufp->fullBit(oldp+28512,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28513,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28515,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28516,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28517,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28518,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28519,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+28520,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xcU) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+28521,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xcU) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+28522,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28523,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28524,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28525,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28526,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28527,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28528,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28529,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28530,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0xcU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28531,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__12__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28532,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xbU))));
    bufp->fullBit(oldp+28533,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xbU))));
    bufp->fullCData(oldp+28534,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28535,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Match));
    bufp->fullBit(oldp+28536,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28537,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28539,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28540,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28541,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28542,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28543,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+28544,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xbU) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+28545,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xbU) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+28546,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28547,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28548,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28549,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28550,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28551,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28552,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28553,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28554,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0xbU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28555,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__11__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28556,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xaU))));
    bufp->fullBit(oldp+28557,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xaU))));
    bufp->fullCData(oldp+28558,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28559,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Match));
    bufp->fullBit(oldp+28560,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28561,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28563,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28564,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28565,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28566,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28567,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+28568,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xaU) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+28569,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xaU) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+28570,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28571,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28572,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28573,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28574,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28575,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28576,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28577,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28578,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 0xaU) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28579,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__10__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28580,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 9U))));
    bufp->fullBit(oldp+28581,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 9U))));
    bufp->fullCData(oldp+28582,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28583,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Match));
    bufp->fullBit(oldp+28584,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28585,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28587,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28588,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28589,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28590,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28591,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 9U)))));
    bufp->fullBit(oldp+28592,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 9U) & ((0x1fU & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x10U)) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+28593,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
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
    bufp->fullBit(oldp+28594,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28595,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28596,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28597,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28598,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28599,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28600,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28601,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28602,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 9U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28603,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__9__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28604,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 8U))));
    bufp->fullBit(oldp+28605,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 8U))));
    bufp->fullCData(oldp+28606,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28607,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Match));
    bufp->fullBit(oldp+28608,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28609,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28611,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28612,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28613,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28614,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28615,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 8U)))));
    bufp->fullBit(oldp+28616,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 8U) & ((0x1fU & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x10U)) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+28617,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
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
    bufp->fullBit(oldp+28618,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28619,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28620,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28621,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28622,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28623,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28624,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28625,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28626,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 8U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28627,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__8__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28628,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 7U))));
    bufp->fullBit(oldp+28629,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 7U))));
    bufp->fullCData(oldp+28630,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28631,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Match));
    bufp->fullBit(oldp+28632,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28633,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28635,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28636,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28637,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28638,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28639,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 7U)))));
    bufp->fullBit(oldp+28640,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 7U) & ((0x1fU & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x10U)) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+28641,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
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
    bufp->fullBit(oldp+28642,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28643,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28644,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28645,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28646,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28647,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28648,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28649,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28650,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 7U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28651,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__7__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28652,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 6U))));
    bufp->fullBit(oldp+28653,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 6U))));
    bufp->fullCData(oldp+28654,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28655,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Match));
    bufp->fullBit(oldp+28656,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28657,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28659,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28660,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28661,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28662,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28663,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 6U)))));
    bufp->fullBit(oldp+28664,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 6U) & ((0x1fU & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x10U)) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+28665,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
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
    bufp->fullBit(oldp+28666,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28667,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28668,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28669,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28670,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28671,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28672,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28673,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28674,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 6U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28675,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__6__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28676,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 5U))));
    bufp->fullBit(oldp+28677,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 5U))));
    bufp->fullCData(oldp+28678,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28679,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Match));
    bufp->fullBit(oldp+28680,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28681,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28683,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28684,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28685,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28686,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28687,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 5U)))));
    bufp->fullBit(oldp+28688,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 5U) & ((0x1fU & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x10U)) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+28689,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
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
    bufp->fullBit(oldp+28690,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28691,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28692,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28693,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28694,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28695,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28696,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28697,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28698,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 5U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28699,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__5__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28700,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 4U))));
    bufp->fullBit(oldp+28701,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 4U))));
    bufp->fullCData(oldp+28702,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28703,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Match));
    bufp->fullBit(oldp+28704,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28705,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28707,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28708,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28709,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28710,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28711,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 4U)))));
    bufp->fullBit(oldp+28712,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 4U) & ((0x1fU & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x10U)) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+28713,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
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
    bufp->fullBit(oldp+28714,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28715,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28716,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28717,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28718,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28719,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28720,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28721,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28722,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 4U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28723,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__4__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28724,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 3U))));
    bufp->fullBit(oldp+28725,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 3U))));
    bufp->fullCData(oldp+28726,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28727,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Match));
    bufp->fullBit(oldp+28728,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28729,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28731,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28732,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28733,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28734,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28735,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 3U)))));
    bufp->fullBit(oldp+28736,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 3U) & ((0x1fU & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x10U)) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+28737,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
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
    bufp->fullBit(oldp+28738,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28739,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28740,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28741,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28742,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28743,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28744,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28745,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28746,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 3U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28747,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__3__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28748,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 2U))));
    bufp->fullBit(oldp+28749,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 2U))));
    bufp->fullCData(oldp+28750,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Match))))),3);
    bufp->fullBit(oldp+28751,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Match));
    bufp->fullBit(oldp+28752,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28753,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28755,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28756,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28757,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28758,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28759,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 2U)))));
    bufp->fullBit(oldp+28760,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 2U) & ((0x1fU & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x10U)) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+28761,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
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
    bufp->fullBit(oldp+28762,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28763,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28764,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28765,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28766,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28767,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28768,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28769,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28770,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 2U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28771,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__2__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28772,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 1U))));
    bufp->fullBit(oldp+28773,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 1U))));
    bufp->fullCData(oldp+28774,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__PageTypeRead),3);
    bufp->fullBit(oldp+28775,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Match));
    bufp->fullBit(oldp+28776,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28777,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28779,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28780,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28781,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28782,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28783,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 1U)))));
    bufp->fullBit(oldp+28784,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 1U) & ((0x1fU & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x10U)) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+28785,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
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
    bufp->fullBit(oldp+28786,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28787,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28788,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28789,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28790,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28791,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28792,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28793,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28794,((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                      >> 1U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28795,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__1__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28796,((1U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs)));
    bufp->fullBit(oldp+28797,((1U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs)));
    bufp->fullCData(oldp+28798,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageTypeRead),3);
    bufp->fullBit(oldp+28799,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Match));
    bufp->fullBit(oldp+28800,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28801,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key),61);
    bufp->fullCData(oldp+28803,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageType),3);
    bufp->fullSData(oldp+28804,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                    >> 0x2dU)))),16);
    bufp->fullSData(oldp+28805,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28806,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28807,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                             >> 0x2dU)))) 
                                     | vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs))));
    bufp->fullBit(oldp+28808,((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               & ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x10U)) 
                                  == (0x1fU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                       >> 4U)))))));
    bufp->fullBit(oldp+28809,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageType)) 
                                  | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     & ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                             >> 4U)))))))));
    bufp->fullBit(oldp+28810,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28811,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28812,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | ((3U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__PageType)) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28813,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 0x10U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                               | ((8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))) 
                                  | (9U == (0xfU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x3cU))))))));
    bufp->fullBit(oldp+28814,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__ShouldFlush));
    bufp->fullSData(oldp+28815,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28816,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+28817,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__Key 
                                                   >> 0x24U)))),9);
    bufp->fullBit(oldp+28818,((1U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                     | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__ShouldFlush)))));
    bufp->fullBit(oldp+28819,((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__camlines__BRA__0__KET__.__PVT__ShouldFlush)))));
    bufp->fullCData(oldp+28820,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox0.y),8);
    bufp->fullCData(oldp+28821,((0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__BBMU 
                                                  >> 0x28U)))),8);
    bufp->fullCData(oldp+28822,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox1.y),8);
    bufp->fullCData(oldp+28823,((0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__BBMU 
                                                  >> 0x10U)))),8);
    bufp->fullCData(oldp+28824,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox2.y),8);
    bufp->fullCData(oldp+28825,((0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__ABMU 
                                                  >> 0x38U)))),8);
    bufp->fullCData(oldp+28826,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox3.y),8);
    bufp->fullCData(oldp+28827,((0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__ABMU 
                                                  >> 0x20U)))),8);
    bufp->fullCData(oldp+28828,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox4.y),8);
    bufp->fullCData(oldp+28829,((0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__ABMU 
                                                  >> 8U)))),8);
    bufp->fullCData(oldp+28830,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox5.y),8);
    bufp->fullCData(oldp+28831,((0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__BBMU 
                                                  >> 0x30U)))),8);
    bufp->fullCData(oldp+28832,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox6.y),8);
    bufp->fullCData(oldp+28833,((0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__BBMU 
                                                  >> 0x18U)))),8);
    bufp->fullCData(oldp+28834,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox7.y),8);
    bufp->fullCData(oldp+28835,((0xffU & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__Sbox0In)),8);
    bufp->fullCData(oldp+28836,((0xffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__Sbox0In 
                                          >> 8U))),8);
    bufp->fullCData(oldp+28837,((0xffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__Sbox0In 
                                          >> 0x10U))),8);
    bufp->fullCData(oldp+28838,((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__Sbox0In 
                                 >> 0x18U)),8);
    bufp->fullCData(oldp+28839,((0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__BBMU 
                                                  >> 8U)))),8);
    bufp->fullCData(oldp+28840,((0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__ABMU 
                                                  >> 0x18U)))),8);
    bufp->fullQData(oldp+28841,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf
                                [(0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0xfU)))]),64);
    bufp->fullQData(oldp+28843,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf
                                [(0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x14U)))]),64);
    bufp->fullQData(oldp+28845,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf
                                [(0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x1bU)))]),64);
    bufp->fullQData(oldp+28847,(((0U == (0x1fU & (IData)(
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
    bufp->fullWData(oldp+28849,(__Vtemp_3),128);
    bufp->fullWData(oldp+28853,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf
                                [(0xfU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                  >> 0x10U)))]),128);
    bufp->fullWData(oldp+28857,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf
                                [(0xfU & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__A2D) 
                                          >> 1U))]),128);
    bufp->fullQData(oldp+28861,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0]),64);
    bufp->fullQData(oldp+28863,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[1]),64);
    bufp->fullQData(oldp+28865,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[2]),64);
    bufp->fullQData(oldp+28867,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[3]),64);
    bufp->fullQData(oldp+28869,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[4]),64);
    bufp->fullQData(oldp+28871,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[5]),64);
    bufp->fullQData(oldp+28873,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[6]),64);
    bufp->fullQData(oldp+28875,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[7]),64);
    bufp->fullQData(oldp+28877,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[8]),64);
    bufp->fullQData(oldp+28879,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[9]),64);
    bufp->fullQData(oldp+28881,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[10]),64);
    bufp->fullQData(oldp+28883,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[11]),64);
    bufp->fullQData(oldp+28885,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[12]),64);
    bufp->fullQData(oldp+28887,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[13]),64);
    bufp->fullQData(oldp+28889,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[14]),64);
    bufp->fullQData(oldp+28891,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[15]),64);
    bufp->fullQData(oldp+28893,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[16]),64);
    bufp->fullQData(oldp+28895,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[17]),64);
    bufp->fullQData(oldp+28897,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[18]),64);
    bufp->fullQData(oldp+28899,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[19]),64);
    bufp->fullQData(oldp+28901,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[20]),64);
    bufp->fullQData(oldp+28903,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[21]),64);
    bufp->fullQData(oldp+28905,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[22]),64);
    bufp->fullQData(oldp+28907,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[23]),64);
    bufp->fullQData(oldp+28909,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[24]),64);
    bufp->fullQData(oldp+28911,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[25]),64);
    bufp->fullQData(oldp+28913,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[26]),64);
    bufp->fullQData(oldp+28915,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[27]),64);
    bufp->fullQData(oldp+28917,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[28]),64);
    bufp->fullQData(oldp+28919,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[29]),64);
    bufp->fullQData(oldp+28921,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[30]),64);
    bufp->fullQData(oldp+28923,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[31]),64);
    bufp->fullIData(oldp+28925,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__i),32);
    bufp->fullWData(oldp+28926,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[0]),128);
    bufp->fullWData(oldp+28930,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[1]),128);
    bufp->fullWData(oldp+28934,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[2]),128);
    bufp->fullWData(oldp+28938,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[3]),128);
    bufp->fullWData(oldp+28942,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[4]),128);
    bufp->fullWData(oldp+28946,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[5]),128);
    bufp->fullWData(oldp+28950,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[6]),128);
    bufp->fullWData(oldp+28954,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[7]),128);
    bufp->fullWData(oldp+28958,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[8]),128);
    bufp->fullWData(oldp+28962,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[9]),128);
    bufp->fullWData(oldp+28966,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[10]),128);
    bufp->fullWData(oldp+28970,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[11]),128);
    bufp->fullWData(oldp+28974,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[12]),128);
    bufp->fullWData(oldp+28978,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[13]),128);
    bufp->fullWData(oldp+28982,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[14]),128);
    bufp->fullWData(oldp+28986,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__rf[15]),128);
    bufp->fullIData(oldp+28990,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__pairedrf__DOT__i),32);
    bufp->fullBit(oldp+28991,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__EndOfFrame));
    bufp->fullBit(oldp+28992,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__ShiftEdge));
    bufp->fullBit(oldp+28993,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__SampleEdge));
    bufp->fullQData(oldp+28994,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__R2D),64);
    bufp->fullQData(oldp+28996,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__SwapHighD),64);
    __Vtemp_4[0U] = (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__R2D);
    __Vtemp_4[1U] = (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__R2D 
                             >> 0x20U));
    __Vtemp_4[2U] = (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__SwapHighD);
    __Vtemp_4[3U] = (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__SwapHighD 
                             >> 0x20U));
    bufp->fullWData(oldp+28998,(__Vtemp_4),128);
    bufp->fullBit(oldp+29002,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__TransmitLoad));
    bufp->fullCData(oldp+29003,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__NextState),3);
    bufp->fullBit(oldp+29004,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__ContinueTransmit));
    bufp->fullBit(oldp+29005,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__EndTransmission));
    bufp->fullBit(oldp+29006,(vlSelfRef.testbench__DOT__clk));
    bufp->fullCData(oldp+29007,((7U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUSelect)
                                        ? ((((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheBusRW))) 
                                            | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_10))
                                            ? 5U : 0U)
                                        : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUSelect)
                                            ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUInput__DOT____Vcellout__genblk1__DOT__RestorMux____pinNumber4[1U] 
                                                << 6U) 
                                               | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUInput__DOT____Vcellout__genblk1__DOT__RestorMux____pinNumber4[1U] 
                                                  >> 0x1aU))
                                            : 0U)))),3);
    bufp->fullBit(oldp+29008,(vlSelfRef.testbench__DOT__TestBenchReset));
    bufp->fullBit(oldp+29009,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__IFUCacheBusStallF) 
                               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelSpillNextF) 
                                  | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ITLBMissOrUpdateAF)))));
    bufp->fullQData(oldp+29010,((0xffffffffffffffULL 
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
    bufp->fullCData(oldp+29012,(((((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
                                   & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__CacheBusRW))) 
                                  | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h97605dfa_0_9))
                                  ? 5U : 0U)),3);
    bufp->fullCData(oldp+29013,(((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
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
    bufp->fullQData(oldp+29014,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUHADDROut),56);
    bufp->fullBit(oldp+29016,((((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BusAtomic)) 
                                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_11)) 
                               | (((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                                   & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__BusWrite)) 
                                  | (((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                      & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BusAtomic)) 
                                     | ((6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                        & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BeatCount))))))));
    bufp->fullCData(oldp+29017,(((((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                                   & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheBusRW))) 
                                  | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_10))
                                  ? 5U : 0U)),3);
    bufp->fullBit(oldp+29018,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__DCacheStallM));
    bufp->fullBit(oldp+29019,(((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__ebufsmarb__DOT__CurrState)) 
                               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__ebufsmarb__DOT__both))));
    bufp->fullCData(oldp+29020,(((0U == (3U & (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUSelect)
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
    bufp->fullQData(oldp+29021,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__BPWrongE)
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
                                               + (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF 
                                                  >> 2U)) 
                                              << 2U) 
                                             | (QData)((IData)(
                                                               (3U 
                                                                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF))))))))),64);
    bufp->fullQData(oldp+29023,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__CSRWriteFenceM)
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
                                          ? ((4U & 
                                              vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U])
                                              ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__RASPCF
                                              : (((QData)((IData)(
                                                                  vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[0U]))))
                                          : ((3U != 
                                              (3U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PostSpillInstrRawF))
                                              ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__PCPlus2NextF
                                              : (((1ULL 
                                                   + 
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF 
                                                    >> 2U)) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   (3U 
                                                                    & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF)))))))))),64);
    bufp->fullQData(oldp+29025,(((3U != (3U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PostSpillInstrRawF))
                                  ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__PCPlus2NextF
                                  : (((1ULL + (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF 
                                               >> 2U)) 
                                      << 2U) | (QData)((IData)(
                                                               (3U 
                                                                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF))))))),64);
    bufp->fullIData(oldp+29027,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets
                                [(0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 1U)))]),32);
    bufp->fullBit(oldp+29028,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelSpillNextF));
    bufp->fullBit(oldp+29029,((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h97605dfa_0_12)) 
                               | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                  | ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                     | ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                        | ((7U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__BeatCountDelayed)) 
                                           & ((5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                              | (6U 
                                                 == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState))))))))));
    bufp->fullBit(oldp+29030,(((~ ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                   >> 6U)) & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h6a8520a7_0_0) 
                                              & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrPageFaultRawF)) 
                                                 & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                                            >> 0x3dU)))))));
    bufp->fullBit(oldp+29031,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrAccessFaultF) 
                               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrPageFaultF) 
                                  | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__ITLBWalkFaultF)))));
    bufp->fullCData(oldp+29032,(((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__CurrState))
                                  ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__TakeSpillF)
                                      ? 1U : 0U) : 
                                 ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__CurrState))
                                   ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StallF)
                                       ? 1U : 0U) : 0U))),2);
    bufp->fullBit(oldp+29033,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__TakeSpillF));
    bufp->fullBit(oldp+29034,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__SpillSaveF));
    bufp->fullBit(oldp+29035,((1U & (~ (IData)((3U 
                                                == 
                                                ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelIROM)
                                                  ? 0U
                                                  : 
                                                 (3U 
                                                  & vlSelfRef.__VdfgRegularize_hd87f99a1_4_119))))))));
    bufp->fullCData(oldp+29036,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrPageFaultRawF) 
                                  << 1U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrAccessFaultRawF))),2);
    bufp->fullBit(oldp+29037,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
                               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelSpillNextF))));
    bufp->fullIData(oldp+29038,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT____Vcellinp__SpillInstrReg____pinNumber4) 
                                  << 0x10U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__InstrFirstHalfF))),32);
    bufp->fullQData(oldp+29039,(((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U] 
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
                                      : (((1ULL + (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF 
                                                   >> 2U)) 
                                          << 2U) | (QData)((IData)(
                                                                   (3U 
                                                                    & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF)))))))),64);
    bufp->fullQData(oldp+29041,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_7)
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
                                                                     << 6U))))))),56);
    bufp->fullCData(oldp+29043,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelIROM) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__CacheableF))))),2);
    bufp->fullQData(oldp+29044,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__CacheableF)
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
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (0xfc0U 
                                                            & ((IData)(
                                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                        >> 6U)) 
                                                               << 6U))))))
                                  : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)),56);
    bufp->fullCData(oldp+29046,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
                                 & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__SelAdrData))),2);
    bufp->fullCData(oldp+29047,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
                                 & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__SelAdrData) 
                                    | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__GatedStallD)))),2);
    bufp->fullQData(oldp+29048,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                [2U]),44);
    bufp->fullQData(oldp+29050,(((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                  [2U] << 0xcU) | (QData)((IData)(
                                                                  (0xfc0U 
                                                                   & ((IData)(
                                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                               >> 6U)) 
                                                                      << 6U)))))),56);
    bufp->fullQData(oldp+29052,((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                 [2U] << 0xcU)),56);
    bufp->fullBit(oldp+29054,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__0__KET____DOT__SelectedWriteWordEn));
    bufp->fullBit(oldp+29055,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__1__KET____DOT__SelectedWriteWordEn));
    bufp->fullBit(oldp+29056,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__2__KET____DOT__SelectedWriteWordEn));
    bufp->fullBit(oldp+29057,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__3__KET____DOT__SelectedWriteWordEn));
    bufp->fullQData(oldp+29058,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid[0]),44);
    bufp->fullQData(oldp+29060,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid[1]),44);
    bufp->fullQData(oldp+29062,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid[2]),44);
    bufp->fullBit(oldp+29064,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT____VdfgRegularize_hb604bb0f_0_1) 
                               & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__HitWay)))));
    bufp->fullCData(oldp+29065,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__LRUWriteEn) 
                                  & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheSetLRU) 
                                     == (0x3fU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 6U)))))
                                  ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__NextLRU)
                                  : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__LRUMemory
                                 [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheSetLRU])),3);
    bufp->fullBit(oldp+29066,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__LRUWriteEn) 
                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheSetLRU) 
                                  == (0x3fU & (IData)(
                                                      (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                       >> 6U)))))));
    bufp->fullCData(oldp+29067,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__Intermediate[0]),2);
    bufp->fullCData(oldp+29068,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__Intermediate[1]),2);
    bufp->fullCData(oldp+29069,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__Intermediate[2]),2);
    bufp->fullCData(oldp+29070,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__Intermediate
                                [2U]),2);
    bufp->fullQData(oldp+29071,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam.CAMHit)
                                  ? ((0xffffffffff0000ULL 
                                      & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed 
                                         << 0xcU)) 
                                     | (QData)((IData)(
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
    bufp->fullCData(oldp+29073,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__PBMemoryType),2);
    bufp->fullQData(oldp+29074,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam.CAMHit)
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
    bufp->fullBit(oldp+29076,((((4U == vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam.__PVT__PageTypeOr__DOT__genblk1__DOT__mid
                                 [0x1eU]) & (0U != 
                                             (0xfffffffffULL 
                                              & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                 [0x1eU] 
                                                 >> 0xaU)))) 
                               | (((3U == vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam.__PVT__PageTypeOr__DOT__genblk1__DOT__mid
                                    [0x1eU]) & (0U 
                                                != 
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
                                         [0x1eU]) & 
                                        (0U != (0x1ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                           [0x1eU] 
                                                           >> 0xaU))))))))));
    bufp->fullQData(oldp+29077,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed),44);
    bufp->fullQData(oldp+29079,(((0xffffffffff0ULL 
                                  & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed) 
                                 | (QData)((IData)(
                                                   (0xfU 
                                                    & ((0x800U 
                                                        & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))
                                                        ? (IData)(
                                                                  (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                   >> 0xcU))
                                                        : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed))))))),44);
    bufp->fullCData(oldp+29081,((0xfU & ((0x800U & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))
                                          ? (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU))
                                          : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed)))),4);
    bufp->fullCData(oldp+29082,((0xfU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed))),4);
    bufp->fullBit(oldp+29083,((((~ ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                    >> 4U)) & (0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW))) 
                               | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                                  & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                     >> 4U)))));
    bufp->fullBit(oldp+29084,((1U & ((~ ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                                  >> 0x3eU)) 
                                         | (0U == (3U 
                                                   & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                      >> 9U))))) 
                                     | (3U == (3U & 
                                               ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                >> 9U)))))));
    bufp->fullBit(oldp+29085,(((0xbU != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)) 
                               | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__StartWalk))));
    bufp->fullIData(oldp+29086,(((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState))
                                  ? VL_SHIFTR_III(32,32,32, vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__swbytemask__DOT__genblk1__DOT__ExtendedByteMask, 0x10U)
                                  : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__SelSpillE)
                                      ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ByteMaskM)
                                      : ((0xffff0000U 
                                          & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__swbytemask__DOT__genblk1__DOT__ExtendedByteMask) 
                                         | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ByteMaskM))))),32);
    bufp->fullBit(oldp+29087,((((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__MemAccessDoneM)) 
                                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__StartWalk)) 
                               | ((0xbU != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)) 
                                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__HPTWFaultM)))));
    bufp->fullQData(oldp+29088,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache)
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
                                      : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____Vcellinp__CacheBusAdrMux__d0))),56);
    bufp->fullBit(oldp+29090,((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
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
    bufp->fullCData(oldp+29091,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_23)
                                  ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT__SquashSCM)
                                      ? 0U : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM))
                                  : 0U)),2);
    bufp->fullCData(oldp+29092,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_24)
                                  ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT__SquashSCM)
                                      ? 0U : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM))
                                  : 0U)),2);
    bufp->fullCData(oldp+29093,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__SelDTIM) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheableOrFlushCacheM))))),2);
    bufp->fullQData(oldp+29094,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheableOrFlushCacheM)
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
                                             & (0U 
                                                != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay))))
                                          ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                              [2U] 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (0xfc0U 
                                                                & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U]))))
                                          : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____Vcellinp__CacheBusAdrMux__d0))
                                  : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BusCMOZero)
                                      ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____Vcellinp__CacheBusAdrMux__d0
                                      : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM))),56);
    bufp->fullQData(oldp+29096,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheableOrFlushCacheM)
                                  ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__genblk2__DOT__AHBWordSets
                                 [(1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BeatCount))]
                                  : (((QData)((IData)(
                                                      vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUWriteDataM[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUWriteDataM[0U]))))),64);
    bufp->fullQData(oldp+29098,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BusCMOZero)
                                  ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____Vcellinp__CacheBusAdrMux__d0
                                  : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)),56);
    bufp->fullCData(oldp+29100,((0xffU & ((VL_SHIFTL_III(8,32,32, (IData)(1U), 
                                                         ((IData)(1U) 
                                                          << (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUHSIZEOut))) 
                                           - (IData)(1U)) 
                                          << (7U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUHADDROut))))),8);
    bufp->fullCData(oldp+29101,((7U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUHADDROut))),3);
    bufp->fullBit(oldp+29102,((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_0) 
                                   | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_22))) 
                               | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_23))));
    bufp->fullBit(oldp+29103,((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_22)) 
                               | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_23))));
    bufp->fullCData(oldp+29104,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache) 
                                  << 1U) | ((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                              & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_0) 
                                                 | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_22))) 
                                             | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_23)) 
                                            | (0xbU 
                                               != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState))))),2);
    bufp->fullCData(oldp+29105,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache) 
                                  << 1U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____VdfgRegularize_h1936c9d4_1_0))),2);
    bufp->fullCData(oldp+29106,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache) 
                                  << 1U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____VdfgRegularize_h1936c9d4_1_0) 
                                            | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT____Vcellinp__bus__DOT__dcache__DOT__dcache__Stall)))),2);
    bufp->fullQData(oldp+29107,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                [2U]),44);
    bufp->fullBit(oldp+29109,((((5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                & ((~ (IData)((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay)))) 
                                   & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__FlushFlag))) 
                               | ((6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                  & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__FlushFlag) 
                                     & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck))))));
    bufp->fullBit(oldp+29110,((((~ (IData)((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay)))) 
                                & (5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState))) 
                               | ((6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck)))));
    bufp->fullBit(oldp+29111,((((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck)) 
                                   | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_6))) 
                               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_21) 
                                  & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay))))));
    bufp->fullQData(oldp+29112,(((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                  [2U] << 0xcU) | (QData)((IData)(
                                                                  (0xfc0U 
                                                                   & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U]))))),56);
    bufp->fullQData(oldp+29114,(((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                  [2U] << 0xcU) | (QData)((IData)(
                                                                  ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__FlushAdr) 
                                                                   << 6U))))),56);
    bufp->fullCData(oldp+29116,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache) 
                                  << 1U) | (((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                             & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck)) 
                                                | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_6))) 
                                            | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_21) 
                                               & (0U 
                                                  != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay)))))),2);
    bufp->fullQData(oldp+29117,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid[0]),44);
    bufp->fullQData(oldp+29119,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid[1]),44);
    bufp->fullQData(oldp+29121,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid[2]),44);
    bufp->fullQData(oldp+29123,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__SetDirty)
                                  ? (~ vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__WriteSelLogic__DOT__DemuxedByteMask)
                                  : 0xffffffffffffffffULL)),64);
    bufp->fullQData(oldp+29125,((QData)((IData)(((1U 
                                                  == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState))
                                                  ? 
                                                 VL_SHIFTR_III(32,32,32, vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__swbytemask__DOT__genblk1__DOT__ExtendedByteMask, 0x10U)
                                                  : 
                                                 ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__SelSpillE)
                                                   ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ByteMaskM)
                                                   : 
                                                  ((0xffff0000U 
                                                    & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__swbytemask__DOT__genblk1__DOT__ExtendedByteMask) 
                                                   | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ByteMaskM))))))),64);
    bufp->fullBit(oldp+29127,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyUpdateHit));
    bufp->fullBit(oldp+29128,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyUpdateHit) 
                               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_1) 
                                  & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__HitWay))))));
    bufp->fullBit(oldp+29129,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyMiss));
    bufp->fullBit(oldp+29130,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__StallConditions));
    bufp->fullBit(oldp+29131,(((~ (IData)((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__HitWay)))) 
                               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_1))));
    bufp->fullCData(oldp+29132,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LRUWriteEn) 
                                  & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetLRU) 
                                     == (0x3fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 6U))))
                                  ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__NextLRU)
                                  : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__LRUMemory
                                 [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetLRU])),3);
    bufp->fullBit(oldp+29133,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__PreUpdateDA) 
                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h84efdca8_0_0) 
                                  & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__TLBPageFault)) 
                                     & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                                >> 0x3dU)))))));
    bufp->fullQData(oldp+29134,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__TLBHit)
                                  ? ((0xffffffffff0000ULL 
                                      & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed 
                                         << 0xcU)) 
                                     | (QData)((IData)(
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
    bufp->fullBit(oldp+29136,((IData)(((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM)) 
                                       & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__PMAAccessFault)))));
    bufp->fullBit(oldp+29137,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_27) 
                               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__PMAAccessFault))));
    bufp->fullQData(oldp+29138,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__TLBHit)
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
    bufp->fullBit(oldp+29140,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__PMAAccessFault));
    bufp->fullBit(oldp+29141,((((4U == vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.__PVT__PageTypeOr__DOT__genblk1__DOT__mid
                                 [0x1eU]) & (0U != 
                                             (0xfffffffffULL 
                                              & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                 [0x1eU] 
                                                 >> 0xaU)))) 
                               | (((3U == vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.__PVT__PageTypeOr__DOT__genblk1__DOT__mid
                                    [0x1eU]) & (0U 
                                                != 
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
                                         [0x1eU]) & 
                                        (0U != (0x1ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                           [0x1eU] 
                                                           >> 0xaU))))))))));
    bufp->fullQData(oldp+29142,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed),44);
    bufp->fullQData(oldp+29144,(((0xffffffffff0ULL 
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
                                                        : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed))))))),44);
    bufp->fullCData(oldp+29146,((0xfU & ((0x800U & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))
                                          ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              << 0x14U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0xcU))
                                          : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed)))),4);
    bufp->fullCData(oldp+29147,((0xfU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed))),4);
    bufp->fullBit(oldp+29148,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__MemAccessDoneM)) 
                               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__MemAccessPerformedM))));
    bufp->fullBit(oldp+29149,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__StartWalk));
    bufp->fullBit(oldp+29150,((((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__DCacheBusStallM)) 
                                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____VdfgRegularize_h1afdae1e_1_18)) 
                               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__UpdatePTE) 
                                  | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____VdfgRegularize_h1afdae1e_1_6)))));
    bufp->fullQData(oldp+29151,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____VdfgRegularize_h1afdae1e_1_6)
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
    bufp->fullCData(oldp+29153,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState),4);
    bufp->fullBit(oldp+29154,(((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState)) 
                               | ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState)) 
                                  | ((5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState)) 
                                     | ((7U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState)) 
                                        | (9U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState))))))));
    bufp->fullCData(oldp+29155,(((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState))
                                  ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__ValidSpillM)
                                      ? 1U : 0U) : 
                                 ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState))
                                   ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StallM)
                                       ? 1U : 0U) : 0U))),2);
    bufp->fullBit(oldp+29156,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushM)) 
                               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT____VdfgRegularize_h1c9cfb2e_0_0))));
    bufp->fullCData(oldp+29157,((((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState)) 
                                  << 1U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__SelSpillE))),2);
    bufp->fullBit(oldp+29158,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MTrapM) 
                               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMWriteM) 
                                  & (0x341U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                >> 0x14U))))));
    bufp->fullBit(oldp+29159,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MTrapM) 
                               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMWriteM) 
                                  & (0x342U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                >> 0x14U))))));
    bufp->fullBit(oldp+29160,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MTrapM) 
                               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMWriteM) 
                                  & (0x343U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                >> 0x14U))))));
    bufp->fullBit(oldp+29161,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__STrapM) 
                               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRSWriteM) 
                                  & (0x141U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                >> 0x14U))))));
    bufp->fullBit(oldp+29162,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__STrapM) 
                               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRSWriteM) 
                                  & (0x142U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                >> 0x14U))))));
    bufp->fullBit(oldp+29163,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__STrapM) 
                               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRSWriteM) 
                                  & (0x143U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                >> 0x14U))))));
    bufp->fullCData(oldp+29164,(((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrPageFaultF) 
                                   << 3U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrAccessFaultF) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__HPTWInstrAccessFaultHeldF) 
                                     << 1U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__HPTWInstrPageFaultHeldF)))),4);
    bufp->fullBit(oldp+29165,(((0xffffffffffffffULL 
                                == (0xffffffffffffffULL 
                                    & (0xfffULL | (~ 
                                                   (0x1000ULL 
                                                    ^ vlSelfRef.testbench__DOT__HADDR))))) 
                               & (0xfU >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->fullBit(oldp+29166,(((0xffffffffffffffULL 
                                == (0xffffffffffffffULL 
                                    & (0xffffULL | 
                                       (~ (0x2000000ULL 
                                           ^ vlSelfRef.testbench__DOT__HADDR))))) 
                               & (0xfU >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->fullBit(oldp+29167,(((0xffffffffffffffULL 
                                == (0xffffffffffffffULL 
                                    & (0xffULL | (~ 
                                                  (0x10060000ULL 
                                                   ^ vlSelfRef.testbench__DOT__HADDR))))) 
                               & (4U >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->fullBit(oldp+29168,(((0xffffffffffffffULL 
                                == (0xffffffffffffffULL 
                                    & (0x3ffffffULL 
                                       | (~ (0xc000000ULL 
                                             ^ vlSelfRef.testbench__DOT__HADDR))))) 
                               & (4U >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->fullBit(oldp+29169,(((0xffffffffffffffULL 
                                == (0xffffffffffffffULL 
                                    & (0xffULL | (~ 
                                                  (0x10020000ULL 
                                                   ^ vlSelfRef.testbench__DOT__HADDR))))) 
                               & (4U >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->fullBit(oldp+29170,(((0xffffffffffffffULL 
                                == (0xffffffffffffffULL 
                                    & (0xfffULL | (~ 
                                                   (0x10040000ULL 
                                                    ^ vlSelfRef.testbench__DOT__HADDR))))) 
                               & (4U >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->fullBit(oldp+29171,(((0xffffffffffffffULL 
                                == (0xffffffffffffffULL 
                                    & (7ULL | (~ (0x10000000ULL 
                                                  ^ vlSelfRef.testbench__DOT__HADDR))))) 
                               & (1U >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->fullBit(oldp+29172,(((0xffffffffffffffULL 
                                == (0xffffffffffffffULL 
                                    & (0x7ffffffULL 
                                       | (~ (0x80000000ULL 
                                             ^ vlSelfRef.testbench__DOT__HADDR))))) 
                               & (0xfU >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->fullBit(oldp+29173,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ahbapbbridge__DOT__initTrans) 
                               & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT____Vcellinp__ahbapbbridge__HSEL)))));
    bufp->fullCData(oldp+29174,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT____Vcellinp__ahbapbbridge__HSEL) 
                                 & (- (IData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ahbapbbridge__DOT__initTrans))))),7);
    bufp->fullBit(oldp+29175,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ram__DOT__ram__DOT__initTrans) 
                               & (IData)(vlSelfRef.testbench__DOT__HWRITE))));
    bufp->fullBit(oldp+29176,(((~ (IData)(vlSelfRef.testbench__DOT__HWRITE)) 
                               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ram__DOT__ram__DOT__initTrans))));
    bufp->fullBit(oldp+29177,((1U & (~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ram__DOT__ram__DOT__memwriteD) 
                                        & ((~ (IData)(vlSelfRef.testbench__DOT__HWRITE)) 
                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ram__DOT__ram__DOT__initTrans)))))));
    bufp->fullBit(oldp+29178,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__EdgePulse) 
                               & (2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__NextState)))));
    bufp->fullBit(oldp+29179,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__TransmitStartD) 
                               | (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__ContinueTransmit))));
    bufp->fullQData(oldp+29180,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET__.__PVT__SetValidWay)
                                  ? 0xffffffffffffffffULL
                                  : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineByteMask)),64);
    bufp->fullBit(oldp+29182,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                                  & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET__.__PVT__SelectedWay)))));
    bufp->fullBit(oldp+29183,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                               & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET__.__PVT__SelectedWay))));
    bufp->fullQData(oldp+29184,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__2__KET__.__PVT__SetValidWay)
                                  ? 0xffffffffffffffffULL
                                  : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineByteMask)),64);
    bufp->fullBit(oldp+29186,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                                  & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__2__KET__.__PVT__SelectedWay)))));
    bufp->fullBit(oldp+29187,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                               & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__2__KET__.__PVT__SelectedWay))));
    bufp->fullQData(oldp+29188,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__1__KET__.__PVT__SetValidWay)
                                  ? 0xffffffffffffffffULL
                                  : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineByteMask)),64);
    bufp->fullBit(oldp+29190,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                                  & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__1__KET__.__PVT__SelectedWay)))));
    bufp->fullBit(oldp+29191,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                               & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__1__KET__.__PVT__SelectedWay))));
    bufp->fullQData(oldp+29192,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__0__KET__.__PVT__SetValidWay)
                                  ? 0xffffffffffffffffULL
                                  : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineByteMask)),64);
    bufp->fullBit(oldp+29194,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                                  & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__0__KET__.__PVT__SelectedWay)))));
    bufp->fullBit(oldp+29195,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                               & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__0__KET__.__PVT__SelectedWay))));
}
