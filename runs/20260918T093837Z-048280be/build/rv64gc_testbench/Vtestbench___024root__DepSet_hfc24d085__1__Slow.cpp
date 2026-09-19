// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__6(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_sequent__TOP__6\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__HitDirtyWay 
        = ((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET__.HitDirtyWay) 
             << 3U) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__2__KET__.HitDirtyWay) 
                       << 2U)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__1__KET__.HitDirtyWay) 
                                   << 1U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__0__KET__.HitDirtyWay)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw1__DOT____Vcellinp__gm3____pinNumber1 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__sbox1__DOT__sbox0.y) 
           ^ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__sbox1__DOT__sbox3.y));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw1__DOT____Vcellinp__gm2____pinNumber1 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__sbox1__DOT__sbox0.y) 
           ^ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__sbox1__DOT__sbox1.y));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw1__DOT____Vcellinp__gm1____pinNumber1 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__sbox1__DOT__sbox1.y) 
           ^ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__sbox1__DOT__sbox2.y));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw1__DOT____Vcellinp__gm0____pinNumber1 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__sbox1__DOT__sbox2.y) 
           ^ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__sbox1__DOT__sbox3.y));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__SboxOut 
        = (((QData)((IData)(((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox7.y) 
                               << 0x18U) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox6.y) 
                                            << 0x10U)) 
                             | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox5.y) 
                                 << 8U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox4.y))))) 
            << 0x20U) | (QData)((IData)(((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox3.y) 
                                           << 0x18U) 
                                          | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox2.y) 
                                             << 0x10U)) 
                                         | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox1.y) 
                                             << 8U) 
                                            | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox0.y))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw0__DOT____Vcellinp__gm2____pinNumber1 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox0.y) 
           ^ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox1.y));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw0__DOT____Vcellinp__gm1____pinNumber1 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox1.y) 
           ^ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox2.y));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw0__DOT____Vcellinp__gm3____pinNumber1 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox0.y) 
           ^ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox3.y));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__Sbox0Out 
        = ((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox3.y) 
             << 0x18U) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox2.y) 
                          << 0x10U)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox1.y) 
                                         << 8U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox0.y)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw0__DOT____Vcellinp__gm0____pinNumber1 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox2.y) 
           ^ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox3.y));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw1__DOT__temp 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw1__DOT____Vcellinp__gm0____pinNumber1) 
           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw1__DOT____Vcellinp__gm2____pinNumber1));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
        = ((0x80U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT____Vcellout__controlregBMU____pinNumber6))
            ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__ABMU
            : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__SboxOut);
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw0__DOT__temp 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw0__DOT____Vcellinp__gm0____pinNumber1) 
           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw0__DOT____Vcellinp__gm2____pinNumber1));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__temp 
        = (0xffU & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                             >> 0x18U)) ^ ((IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                    >> 0x10U)) 
                                           ^ ((IData)(
                                                      (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                       >> 8U)) 
                                              ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__temp 
        = (0xffU & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                             >> 0x38U)) ^ ((IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                    >> 0x30U)) 
                                           ^ ((IData)(
                                                      (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                       >> 0x28U)) 
                                              ^ (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                         >> 0x20U))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor0 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__temp) 
            << 3U) ^ ((0x3fcU & (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn) 
                                  ^ (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                             >> 0x10U))) 
                                 << 2U)) ^ ((0x1feU 
                                             & (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn) 
                                                 ^ (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                            >> 8U))) 
                                                << 1U)) 
                                            ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__temp) 
                                               ^ (0xffU 
                                                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor1 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__temp) 
            << 3U) ^ ((0x3fcU & (((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                           >> 8U)) 
                                  ^ (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                             >> 0x18U))) 
                                 << 2U)) ^ ((0x1feU 
                                             & (((IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                          >> 8U)) 
                                                 ^ (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                            >> 0x10U))) 
                                                << 1U)) 
                                            ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__temp) 
                                               ^ (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                             >> 8U)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor2 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__temp) 
            << 3U) ^ ((0x3fcU & (((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                           >> 0x10U)) 
                                  ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn)) 
                                 << 2U)) ^ ((0x1feU 
                                             & (((IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                          >> 0x10U)) 
                                                 ^ (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                            >> 0x18U))) 
                                                << 1U)) 
                                            ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__temp) 
                                               ^ (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                             >> 0x10U)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor3 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__temp) 
            << 3U) ^ ((0x3fcU & (((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                           >> 0x18U)) 
                                  ^ (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                             >> 8U))) 
                                 << 2U)) ^ ((0x1feU 
                                             & (((IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                          >> 0x18U)) 
                                                 ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn)) 
                                                << 1U)) 
                                            ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__temp) 
                                               ^ (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                             >> 0x18U)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor0 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__temp) 
            << 3U) ^ ((0x3fcU & (((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                           >> 0x20U)) 
                                  ^ (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                             >> 0x30U))) 
                                 << 2U)) ^ ((0x1feU 
                                             & (((IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                          >> 0x20U)) 
                                                 ^ (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                            >> 0x28U))) 
                                                << 1U)) 
                                            ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__temp) 
                                               ^ (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                             >> 0x20U)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor1 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__temp) 
            << 3U) ^ ((0x3fcU & (((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                           >> 0x28U)) 
                                  ^ (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                             >> 0x38U))) 
                                 << 2U)) ^ ((0x1feU 
                                             & (((IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                          >> 0x28U)) 
                                                 ^ (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                            >> 0x30U))) 
                                                << 1U)) 
                                            ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__temp) 
                                               ^ (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                             >> 0x28U)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor2 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__temp) 
            << 3U) ^ ((0x3fcU & (((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                           >> 0x30U)) 
                                  ^ (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                             >> 0x20U))) 
                                 << 2U)) ^ ((0x1feU 
                                             & (((IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                          >> 0x30U)) 
                                                 ^ (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                            >> 0x38U))) 
                                                << 1U)) 
                                            ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__temp) 
                                               ^ (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                             >> 0x30U)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor3 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__temp) 
            << 3U) ^ ((0x3fcU & (((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                           >> 0x38U)) 
                                  ^ (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                             >> 0x28U))) 
                                 << 2U)) ^ ((0x1feU 
                                             & (((IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                          >> 0x38U)) 
                                                 ^ (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                            >> 0x20U))) 
                                                << 1U)) 
                                            ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__temp) 
                                               ^ (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                             >> 0x38U)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm0__DOT__temp0 
        = (0xffU & ((0x100U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor0))
                     ? (0x1bU ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor0))
                     : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor0)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm1__DOT__temp0 
        = (0xffU & ((0x100U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor1))
                     ? (0x1bU ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor1))
                     : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor1)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm2__DOT__temp0 
        = (0xffU & ((0x100U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor2))
                     ? (0x1bU ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor2))
                     : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor2)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm3__DOT__temp0 
        = (0xffU & ((0x100U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor3))
                     ? (0x1bU ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor3))
                     : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor3)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm0__DOT__temp0 
        = (0xffU & ((0x100U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor0))
                     ? (0x1bU ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor0))
                     : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor0)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm1__DOT__temp0 
        = (0xffU & ((0x100U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor1))
                     ? (0x1bU ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor1))
                     : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor1)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm2__DOT__temp0 
        = (0xffU & ((0x100U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor2))
                     ? (0x1bU ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor2))
                     : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor2)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm3__DOT__temp0 
        = (0xffU & ((0x100U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor3))
                     ? (0x1bU ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor3))
                     : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor3)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm0__DOT__temp1 
        = ((0x200U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor0))
            ? (0x36U ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm0__DOT__temp0))
            : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm0__DOT__temp0));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm1__DOT__temp1 
        = ((0x200U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor1))
            ? (0x36U ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm1__DOT__temp0))
            : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm1__DOT__temp0));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm2__DOT__temp1 
        = ((0x200U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor2))
            ? (0x36U ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm2__DOT__temp0))
            : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm2__DOT__temp0));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm3__DOT__temp1 
        = ((0x200U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor3))
            ? (0x36U ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm3__DOT__temp0))
            : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm3__DOT__temp0));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm0__DOT__temp1 
        = ((0x200U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor0))
            ? (0x36U ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm0__DOT__temp0))
            : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm0__DOT__temp0));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm1__DOT__temp1 
        = ((0x200U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor1))
            ? (0x36U ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm1__DOT__temp0))
            : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm1__DOT__temp0));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm2__DOT__temp1 
        = ((0x200U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor2))
            ? (0x36U ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm2__DOT__temp0))
            : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm2__DOT__temp0));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm3__DOT__temp1 
        = ((0x200U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor3))
            ? (0x36U ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm3__DOT__temp0))
            : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm3__DOT__temp0));
}

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__7(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_sequent__TOP__7\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__lru__DOT__RUBitsAccessed 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ITLBWriteF)
             ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__lru__DOT__WriteLines
             : vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches) 
           | vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__lru__DOT__RUBits);
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__ITLBMissF 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam.CAMHit)) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__Translate));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h6a8520a7_0_0 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__Translate) 
           & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam.CAMHit));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__lru__DOT__RUBitsAccessed 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__DTLBWriteM)
             ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__lru__DOT__WriteLines
             : vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.Matches) 
           | vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__lru__DOT__RUBits);
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__DTLBMissM 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.CAMHit)) 
           & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__TLBAccess) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__Translate)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__TLBHit 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.CAMHit) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__TLBAccess));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h84efdca8_0_0 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__Translate) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__TLBHit));
}

VL_ATTR_COLD void Vtestbench___024root___stl_comb__TOP__5(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_comb__TOP__5\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed 
        = (0xfffffffffffULL & ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                [0x1eU] >> 0xaU) | 
                               ((((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                  << 0x34U) | (((QData)((IData)(
                                                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                << 0x14U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                  >> 0xcU))) 
                                & ((4U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.__PVT__PageTypeOr__DOT__genblk1__DOT__mid
                                    [0x1eU]) ? 0xfffffffffULL
                                    : ((2U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.__PVT__PageTypeOr__DOT__genblk1__DOT__mid
                                        [0x1eU]) ? 
                                       ((1U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.__PVT__PageTypeOr__DOT__genblk1__DOT__mid
                                         [0x1eU]) ? 0x7ffffffULL
                                         : 0x3ffffULL)
                                        : ((1U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.__PVT__PageTypeOr__DOT__genblk1__DOT__mid
                                            [0x1eU])
                                            ? 0x1ffULL
                                            : 0ULL))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT____Vcellout__addressmux____pinNumber4 
        = (0xfffffffffffULL & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__Translate)
                                ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__TLBHit)
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
                                    : 0ULL) : (((QData)((IData)(
                                                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                << 0x34U) 
                                               | (((QData)((IData)(
                                                                   vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                   << 0x14U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                     >> 0xcU)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____Vcellinp__CacheBusAdrMux__d0 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT____Vcellout__addressmux____pinNumber4 
            << 0xcU) | (QData)((IData)((0xfc0U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U]))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT____Vcellinp__resadrreg____pinNumber4 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT____Vcellout__addressmux____pinNumber4 
            << 9U) | (QData)((IData)((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 3U)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT____Vcellout__addressmux____pinNumber4 
            << 0xcU) | (QData)((IData)((0xfffU & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U]))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT__SquashSCM 
        = ((~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM) 
               & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT____Vcellinp__resadrreg____pinNumber4 
                   == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT____Vcellout__resadrreg____pinNumber5) 
                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT__ReservationValidW)))) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT__scM));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_110 = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT__SquashSCM)) 
                                                  & (0U 
                                                     != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_111 = (1U 
                                                  & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT__SquashSCM)) 
                                                     & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_112 = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT__SquashSCM)) 
                                                  & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM) 
                                                     >> 1U));
}

VL_ATTR_COLD void Vtestbench___024root___stl_comb__TOP__10(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_comb__TOP__10\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmachecker__DOT__SelRegions 
        = (((IData)((0xffffffffffffffULL == (0xffffffffffffffULL 
                                             & (0x7ffffffULL 
                                                | (~ 
                                                   (0x80000000ULL 
                                                    ^ vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)))))) 
            << 5U) | (((IData)((0xffffffffffffffULL 
                                == (0xffffffffffffffULL 
                                    & (0xfffULL | (~ 
                                                   (0x1000ULL 
                                                    ^ vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)))))) 
                       << 4U) | (1U & (~ (IData)((0U 
                                                  != 
                                                  (0xfffU 
                                                   & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmachecker__DOT__SelRegions) 
                                                      >> 1U))))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrAccessFaultRawF 
        = (1U & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__ITLBMissF)) 
                 & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmachecker__DOT__SelRegions) 
                    | (((3U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                        | (0U != ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__L) 
                                  & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__FirstMatch)))) 
                       & (~ (IData)((0U != ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__X) 
                                            & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__FirstMatch)))))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrAccessFaultF 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrAccessFaultRawF) 
           | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__CurrState)) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT____Vcellout__SpillFaultReg____pinNumber5)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT____VdfgRegularize_h0e094b99_1_2 
        = (1U & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelIROM)) 
                 & (~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrAccessFaultF) 
                       | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrPageFaultF) 
                          | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__ITLBWalkFaultF))))));
}

VL_ATTR_COLD void Vtestbench___024root___stl_comb__TOP__13(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_comb__TOP__13\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__PrePageFault 
        = (1U & ((1U != (0x101U & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))) 
                 | (((((((((((~ ((8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU))))
                                  ? (((~ (IData)((0U 
                                                  != 
                                                  (0x1ffU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                                      >> 6U))))) 
                                      & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__vm64check__DOT____VdfgRegularize_hade852da_0_3)) 
                                     | (IData)(((0x7fc0U 
                                                 == 
                                                 (0x7fc0U 
                                                  & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__vm64check__DOT____VdfgRegularize_hade852da_0_4))))
                                  : ((9U == (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                             >> 0x3cU))))
                                      ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__vm64check__DOT____VdfgRegularize_hade852da_0_3) 
                                         | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__vm64check__DOT____VdfgRegularize_hade852da_0_4))
                                      : ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                                      >> 0x18U)))) 
                                         | (0xffU == 
                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 0x18U)))))) 
                             | ((4U == vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.__PVT__PageTypeOr__DOT__genblk1__DOT__mid
                                 [0x1eU]) & (0U != 
                                             (0xfffffffffULL 
                                              & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                 [0x1eU] 
                                                 >> 0xaU))))) 
                            | ((3U == vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.__PVT__PageTypeOr__DOT__genblk1__DOT__mid
                                [0x1eU]) & (0U != (0x7ffffffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                              [0x1eU] 
                                                              >> 0xaU)))))) 
                           | ((2U == vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.__PVT__PageTypeOr__DOT__genblk1__DOT__mid
                               [0x1eU]) & (0U != (0x3ffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                             [0x1eU] 
                                                             >> 0xaU)))))) 
                          | ((1U == vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam.__PVT__PageTypeOr__DOT__genblk1__DOT__mid
                              [0x1eU]) & (0U != (0x1ffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                            [0x1eU] 
                                                            >> 0xaU)))))) 
                         | ((~ ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                >> 4U)) & (0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__EffectivePrivilegeModeW)))) 
                        | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__EffectivePrivilegeModeW)) 
                           & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_SUM_INT)) 
                              & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                 >> 4U)))) | (~ ((IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                                          >> 0x3eU)) 
                                                 | (0U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                        >> 9U)))))) 
                      | (3U == (3U & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                      >> 9U)))) | (
                                                   (8U 
                                                    != 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                                [0x1eU] 
                                                                >> 0xaU)))) 
                                                   & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                      >> 0xbU))) 
                    | ((~ (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                   >> 0x3dU))) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__PreUpdateDA)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__TLBPageFault 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h84efdca8_0_0) 
           & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__PrePageFault) 
              | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM) 
                   >> 1U) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h84efdca8_0_3)) 
                 | (((~ ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                         >> 2U)) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM)) 
                    | (((0U != ((0xbU != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState))
                                 ? 0U : (7U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                                               >> 2U)))) 
                        & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h84efdca8_0_3)) 
                       | (((~ ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                               >> 2U)) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT____VdfgRegularize_he5ae956f_2_0)) 
                          | (IData)((4U == (6U & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))))))))));
    if ((0xbU != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LoadPageFaultM 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____Vcellout__HPTWAccesFaultReg____pinNumber4) 
                     >> 2U));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StoreAmoPageFaultM 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____Vcellout__HPTWAccesFaultReg____pinNumber4) 
                     >> 1U));
    } else {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LoadPageFaultM 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__TLBPageFault) 
                     & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__ReadNoAmoAccessM)));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StoreAmoPageFaultM 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__TLBPageFault) 
                     & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_27)));
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__DTLBMissOrUpdateDAM 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__DTLBMissM) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__PreUpdateDA) 
              & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h84efdca8_0_0) 
                 & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__TLBPageFault)) 
                    & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                               >> 0x3dU))))));
}

VL_ATTR_COLD void Vtestbench___024root___stl_comb__TOP__20(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_comb__TOP__20\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_5;
    testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_5 = 0;
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_11 
        = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_23) 
           & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_111));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSULoadAccessFaultM 
        = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__DTLBMissM)) 
           & ((IData)(((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM)) 
                       & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__PMAAccessFault))) 
              | ((((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingR)) 
                   & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__VdfgRegularize_hb013dbb0_1_4)) 
                  | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__VdfgRegularize_hb013dbb0_1_4) 
                     & ((~ (IData)((0U != ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__R) 
                                           & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__EndFirstMatch))))) 
                        & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__VdfgRegularize_hb013dbb0_1_0)))) 
                 | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__MisalignedCausesAccessFaultM) 
                    & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__ReadNoAmoAccessM)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUStoreAmoAccessFaultM 
        = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__DTLBMissM)) 
           & (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_27) 
               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__PMAAccessFault)) 
              | ((((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingW)) 
                   & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__VdfgRegularize_hb013dbb0_1_1)) 
                  | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__EnforcePMP) 
                      & (((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingW)) 
                          & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUCMOpM) 
                             >> 3U)) | ((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingR)) 
                                        & (0U != (7U 
                                                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUCMOpM)))))) 
                     | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__VdfgRegularize_hb013dbb0_1_1) 
                        & ((~ (IData)((0U != ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__W) 
                                              & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__EndFirstMatch))))) 
                           & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__VdfgRegularize_hb013dbb0_1_0))))) 
                 | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__MisalignedCausesAccessFaultM) 
                    & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_0 
        = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_24) 
           & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_111));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_1 
        = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_24) 
           & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_112));
    if ((0xbU != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LoadAccessFaultM 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____Vcellout__HPTWAccesFaultReg____pinNumber4) 
                     >> 5U));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StoreAmoAccessFaultM 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____Vcellout__HPTWAccesFaultReg____pinNumber4) 
                     >> 4U));
    } else {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LoadAccessFaultM 
            = (1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSULoadAccessFaultM));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StoreAmoAccessFaultM 
            = (1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUStoreAmoAccessFaultM));
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__LSUAccessFaultM 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSULoadAccessFaultM) 
           | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUStoreAmoAccessFaultM));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyUpdateHit 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_0) 
           & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__HitWay)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyMiss 
        = ((~ (IData)((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__HitWay)))) 
           & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_0) 
              | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_1)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____VdfgRegularize_h1afdae1e_1_0 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__LSUAccessFaultM) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__DTLBWalkPending));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__HPTWFaultM 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__LSUAccessFaultM) 
           | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NonLeafPageFaultM));
    testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_5 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__EcallFaultM)
            ? (8U | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW))
            : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StoreAmoPageFaultM)
                ? 0xfU : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LoadPageFaultM)
                           ? 0xdU : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StoreAmoAccessFaultM)
                                      ? 7U : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LoadAccessFaultM)
                                               ? 5U
                                               : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StoreAmoMisalignedFaultM)
                                                   ? 6U
                                                   : 
                                                  ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LoadMisalignedFaultM)
                                                    ? 4U
                                                    : 0U)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__ExceptionM 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrMisalignedFaultM) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__BothInstrAccessFaultM) 
              | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__IllegalInstrFaultM) 
                 | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LoadMisalignedFaultM) 
                    | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StoreAmoMisalignedFaultM) 
                       | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__BothInstrPageFaultM) 
                          | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LoadPageFaultM) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StoreAmoPageFaultM) 
                                | ((((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                                     | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                                        | (0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)))) 
                                    & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__BreakpointFaultM)) 
                                   | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__EcallFaultM) 
                                      | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LoadAccessFaultM) 
                                         | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StoreAmoAccessFaultM))))))))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_22 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyMiss) 
           | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_11));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_21 
        = ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyMiss));
    if (vlSelfRef.testbench__DOT__reset) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_13 = 0U;
    } else if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_12) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM = 0xbU;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_13 = 0xbU;
    } else if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_11) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM = 3U;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_13 = 3U;
    } else if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_10) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM = 7U;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_13 = 7U;
    } else if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_2) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM = 9U;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_13 = 9U;
    } else if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_3) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM = 1U;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_13 = 1U;
    } else if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_4) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM = 5U;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_13 = 5U;
    } else if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_9) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM = 9U;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_13 = 9U;
    } else if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_8) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM = 1U;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_13 = 1U;
    } else if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_7) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM = 5U;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_13 = 5U;
    } else if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__BothInstrPageFaultM) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM = 0xcU;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_13 = 0xcU;
    } else if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__BothInstrAccessFaultM) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM = 1U;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_13 = 1U;
    } else if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__IllegalInstrFaultM) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM = 2U;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_13 = 2U;
    } else if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrMisalignedFaultM) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_13 = 0U;
    } else if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__BreakpointFaultM) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM = 3U;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_13 = 3U;
    } else {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM 
            = testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_5;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_13 
            = (0xfU & (IData)(testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_5));
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__CounterInc__BRA__23__KET__ 
        = ((~ ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MCOUNTINHIBIT_REGW 
                >> 0x17U) | (0ULL == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__MHPMEVENT_REGW
                             [0x14U]))) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__ExceptionM));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__TrapM 
        = (((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__CommittedF)) 
            & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__ExceptionM)) 
           | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__InterruptM));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____VdfgRegularize_h1936c9d4_1_0 
        = ((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_22)) 
            | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_23)) 
           | (0xbU != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__StallConditions 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache) 
           | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_22));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT____VdfgRegularize_h961e3454_2_32 
        = (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__HPMCOUNTER_REGW
           [0x17U] + (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__CounterInc__BRA__23__KET__)));
    if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__TrapM) {
        vlSelfRef.testbench__DOT__watchdog__DOT__TrapEvent 
            = (1U & (~ (IData)(vlSelfRef.testbench__DOT__watchdog__DOT__TrapMD)));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__UnalignedNextEPCM 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCM;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__NextCauseM 
            = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__InterruptM) 
                << 5U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__NextXtvalM 
            = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__InterruptM)
                ? 0ULL : (((0xcU == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM)) 
                           || (1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM)))
                           ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__SelSpillM)
                               ? (2ULL + vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCM)
                               : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCM)
                           : ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM))
                               ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCM
                               : ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM))
                                   ? (QData)((IData)(
                                                     ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__genblk13__DOT__CompressedM)
                                                       ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawM)
                                                       : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)))
                                   : ((((((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM)) 
                                            || (4U 
                                                == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM))) 
                                           || (6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM))) 
                                          || (0xdU 
                                              == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM))) 
                                         || (0xfU == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM))) 
                                        || (5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM))) 
                                       || (7U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM)))
                                       ? ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState))
                                           ? (0xfffffffffffffff0ULL 
                                              & (0x10ULL 
                                                 + vlSelfRef.testbench__DOT__dut__DOT__core__DOT__IEUAdrM))
                                           : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__IEUAdrM)
                                       : 0ULL)))));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__NextPrivilegeModeM 
            = ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__InterruptM)
                  ? ((0xbU >= (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_13)) 
                     && (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__MIDELEG_REGW) 
                               >> (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_13))))
                  : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__MEDELEG_REGW) 
                     >> (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT____VdfgRegularize_h83ba0308_0_13))) 
                & ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                   | (1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW))))
                ? 1U : 3U);
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__hzu__DOT__FlushWCause 
            = (1U & (~ ((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__PendingIntsM)) 
                        & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__pmd__DOT__wfiMPreDebug))));
    } else {
        vlSelfRef.testbench__DOT__watchdog__DOT__TrapEvent = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__UnalignedNextEPCM 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__NextCauseM 
            = ((0x20U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                                  >> 0x3fU)) << 5U)) 
               | (0x1fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM)));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__NextXtvalM 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__NextPrivilegeModeM 
            = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__mretM)
                ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__STATUS_MPP)
                : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__sretM)
                    ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__STATUS_SPP)
                    : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__hzu__DOT__FlushWCause = 0U;
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__hzu__DOT____VdfgRegularize_hbc39849a_0_3 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__TrapM) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__CSRWriteFenceM) 
              | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__RetM)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__DCacheStallM 
        = (((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
            & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__StallConditions)) 
           | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
              | ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                 | ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                    | ((5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                       | (6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__HPMCOUNTERPlusM[0x17U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT____VdfgRegularize_h961e3454_2_32;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__MCAUSEreg____pinNumber4 
        = (((QData)((IData)((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__NextCauseM) 
                                   >> 5U)))) << 0x3fU) 
           | (QData)((IData)((0x1fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__NextCauseM)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MTrapM 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__TrapM) 
           & (3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__NextPrivilegeModeM)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__STrapM 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__TrapM) 
           & (1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__NextPrivilegeModeM)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__TVecM 
        = ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__NextPrivilegeModeM))
            ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MTVEC_REGW
            : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__STVEC_REGW);
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__hzu__DOT____VdfgRegularize_hbc39849a_0_3) 
           | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__BPWrongE));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__CounterInc__BRA__15__KET__ 
        = ((~ ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MCOUNTINHIBIT_REGW 
                >> 0xfU) | (0ULL == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__MHPMEVENT_REGW
                            [0xcU]))) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__DCacheStallM));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h97605dfa_0_11 
        = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__IFUHREADY));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT____VdfgRegularize_h961e3454_2_24 
        = (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__HPMCOUNTER_REGW
           [0xfU] + (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__CounterInc__BRA__15__KET__)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__HPMCOUNTERPlusM[0xfU] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT____VdfgRegularize_h961e3454_2_24;
}
