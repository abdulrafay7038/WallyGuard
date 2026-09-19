// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_TLBRAM__PZ1_T20_H_
#define VERILATED_VTESTBENCH_TLBRAM__PZ1_T20_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_tlbram__Pz1_T20 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT16(PTEAccessBits,11,0);
    VL_IN(Matches,31,0);
    VL_IN(WriteEnables,31,0);
    VL_OUT(PTE_Gs,31,0);
    VL_OUT(PTE_NAPOTs,31,0);
    VL_IN64(PTE,63,0);
    VL_OUT64(PPN,43,0);
    QData/*63:0*/ __Vcellout__tlbramline__BRA__1__KET____q;
    QData/*63:0*/ __Vcellout__tlbramline__BRA__0__KET____q;
    QData/*57:0*/ __PVT__tlbramline__BRA__31__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__30__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__29__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__28__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__27__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__26__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__25__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__24__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__23__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__22__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__21__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__20__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__19__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__18__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__17__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__16__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__15__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__14__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__13__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__12__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__11__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__10__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__9__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__8__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__7__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__6__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__5__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__4__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__3__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__2__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__1__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ __PVT__tlbramline__BRA__0__KET____DOT__genblk1__DOT__ptereg;
    QData/*57:0*/ tlbramline__BRA__0__KET____DOT____Vcellinp__genblk1__DOT__pteflop____pinNumber4;
    VlUnpacked<QData/*63:0*/, 32> __PVT__RamRead;
    VlUnpacked<QData/*63:0*/, 31> __PVT__PTEOr__DOT__genblk1__DOT__mid;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench_tlbram__Pz1_T20(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_tlbram__Pz1_T20();
    VL_UNCOPYABLE(Vtestbench_tlbram__Pz1_T20);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
