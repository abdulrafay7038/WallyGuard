// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_TLBCAM__PZ1_T20_K3D_S9_H_
#define VERILATED_VTESTBENCH_TLBCAM__PZ1_T20_K3D_S9_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtestbench_tlbcamline__Pz1_K3d_S9;


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_tlbcam__Pz1_T20_K3d_S9 final : public VerilatedModule {
  public:
    // CELLS
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__31__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__30__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__29__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__28__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__27__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__26__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__25__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__24__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__23__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__22__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__21__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__20__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__19__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__18__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__17__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__16__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__15__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__14__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__13__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__12__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__11__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__10__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__9__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__8__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__7__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__6__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__5__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__4__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__3__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__2__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__1__KET__;
    Vtestbench_tlbcamline__Pz1_K3d_S9* __PVT__camlines__BRA__0__KET__;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(PageTypeWriteVal,2,0);
    VL_IN8(SV39Mode,0,0);
    VL_IN8(SV48Mode,0,0);
    VL_IN8(TLBFlush,0,0);
    VL_IN8(TLBFlushAll,0,0);
    VL_OUT8(HitPageType,2,0);
    VL_OUT8(CAMHit,0,0);
    VL_IN16(SATP_ASID,15,0);
    VL_IN(WriteEnables,31,0);
    VL_IN(PTE_Gs,31,0);
    VL_IN(PTE_NAPOTs,31,0);
    VL_OUT(Matches,31,0);
    VL_IN64(VPN,44,0);
    VlUnpacked<CData/*2:0*/, 32> __PVT__PageTypeRead;
    VlUnpacked<CData/*2:0*/, 31> __PVT__PageTypeOr__DOT__genblk1__DOT__mid;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench_tlbcam__Pz1_T20_K3d_S9(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_tlbcam__Pz1_T20_K3d_S9();
    VL_UNCOPYABLE(Vtestbench_tlbcam__Pz1_T20_K3d_S9);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
