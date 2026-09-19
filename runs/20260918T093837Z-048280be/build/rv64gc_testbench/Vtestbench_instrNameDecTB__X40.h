// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_INSTRNAMEDECTB__X40_H_
#define VERILATED_VTESTBENCH_INSTRNAMEDECTB__X40_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_instrNameDecTB__X40 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN(instr,31,0);
    std::string name;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench_instrNameDecTB__X40(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_instrNameDecTB__X40();
    VL_UNCOPYABLE(Vtestbench_instrNameDecTB__X40);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
