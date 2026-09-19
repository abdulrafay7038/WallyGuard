// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_TLBCAMLINE__PZ1_K3D_S9_H_
#define VERILATED_VTESTBENCH_TLBCAMLINE__PZ1_K3D_S9_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_tlbcamline__Pz1_K3d_S9 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__SV39Mode,0,0);
    VL_IN8(__PVT__SV48Mode,0,0);
    VL_IN8(__PVT__WriteEnable,0,0);
    VL_IN8(__PVT__PTE_G,0,0);
    VL_IN8(__PVT__PTE_NAPOT,0,0);
    VL_IN8(__PVT__PageTypeWriteVal,2,0);
    VL_IN8(__PVT__TLBFlush,0,0);
    VL_IN8(__PVT__TLBFlushAll,0,0);
    VL_OUT8(__PVT__PageTypeRead,2,0);
    VL_OUT8(__PVT__Match,0,0);
    CData/*0:0*/ __PVT__Valid;
    CData/*2:0*/ __PVT__PageType;
    CData/*0:0*/ __PVT__ShouldFlush;
    VL_IN16(__PVT__SATP_ASID,15,0);
    VL_IN64(__PVT__VPN,44,0);
    QData/*60:0*/ __PVT__Key;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench_tlbcamline__Pz1_K3d_S9(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_tlbcamline__Pz1_K3d_S9();
    VL_UNCOPYABLE(Vtestbench_tlbcamline__Pz1_K3d_S9);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
