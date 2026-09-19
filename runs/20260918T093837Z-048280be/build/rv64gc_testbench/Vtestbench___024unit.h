// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024UNIT_H_
#define VERILATED_VTESTBENCH___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<std::string> arch64pmp;
    VlQueue<std::string> arch64i;
    VlQueue<std::string> arch64f_fma;
    VlQueue<std::string> arch64zfh_fma;
    VlQueue<std::string> arch64f;
    VlQueue<std::string> arch64zfh;
    VlQueue<std::string> arch64d_fma;
    VlQueue<std::string> arch64d;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench___024unit(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench___024unit();
    VL_UNCOPYABLE(Vtestbench___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
