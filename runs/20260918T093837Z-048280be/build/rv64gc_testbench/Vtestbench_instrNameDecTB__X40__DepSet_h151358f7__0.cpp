// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_instrNameDecTB__X40.h"

VL_INLINE_OPT void Vtestbench_instrNameDecTB__X40___nba_sequent__TOP__testbench__DOT__it__DOT__mdec__0(Vtestbench_instrNameDecTB__X40* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_instrNameDecTB__X40___nba_sequent__TOP__testbench__DOT__it__DOT__mdec__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgExtracted_hb777cb69__0;
    __VdfgExtracted_hb777cb69__0 = 0;
    CData/*0:0*/ __VdfgExtracted_hb7ad6d56__0;
    __VdfgExtracted_hb7ad6d56__0 = 0;
    std::string __VdfgExtracted_hcca323ba__0;
    std::string __VdfgExtracted_h4279ed65__0;
    // Body
    __VdfgExtracted_hcca323ba__0 = ((0U == (vlSymsp->TOP.testbench__DOT__InstrM 
                                            >> 0x19U))
                                     ? std::string{"ADD"}
                                     : ((1U == (vlSymsp->TOP.testbench__DOT__InstrM 
                                                >> 0x19U))
                                         ? std::string{"MUL"}
                                         : ((0x20U 
                                             == (vlSymsp->TOP.testbench__DOT__InstrM 
                                                 >> 0x19U))
                                             ? std::string{"SUB"}
                                             : ((0x15U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.testbench__DOT__InstrM 
                                                     >> 0x19U)))
                                                 ? 
                                                std::string{"AES32DSI"}
                                                 : 
                                                ((0x17U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP.testbench__DOT__InstrM 
                                                      >> 0x19U)))
                                                  ? 
                                                 std::string{"AES32DSMI"}
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (vlSymsp->TOP.testbench__DOT__InstrM 
                                                    >> 0x19U))
                                                   ? 
                                                  std::string{"AES64DS"}
                                                   : 
                                                  ((0x1fU 
                                                    == 
                                                    (vlSymsp->TOP.testbench__DOT__InstrM 
                                                     >> 0x19U))
                                                    ? 
                                                   std::string{"AES64DSM"}
                                                    : 
                                                   ((0x11U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x19U)))
                                                     ? 
                                                    std::string{"AES32ESI"}
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSymsp->TOP.testbench__DOT__InstrM 
                                                          >> 0x19U)))
                                                      ? 
                                                     std::string{"AES32ESMI"}
                                                      : 
                                                     ((0x19U 
                                                       == 
                                                       (vlSymsp->TOP.testbench__DOT__InstrM 
                                                        >> 0x19U))
                                                       ? 
                                                      std::string{"AES64ES"}
                                                       : 
                                                      ((0x1bU 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x19U))
                                                        ? 
                                                       std::string{"AES64ESM"}
                                                        : 
                                                       ((0x3fU 
                                                         == 
                                                         (vlSymsp->TOP.testbench__DOT__InstrM 
                                                          >> 0x19U))
                                                         ? 
                                                        std::string{"AES64KS2"}
                                                         : 
                                                        ((0x2eU 
                                                          == 
                                                          (vlSymsp->TOP.testbench__DOT__InstrM 
                                                           >> 0x19U))
                                                          ? 
                                                         std::string{"SHA512SIG0H"}
                                                          : 
                                                         ((0x2aU 
                                                           == 
                                                           (vlSymsp->TOP.testbench__DOT__InstrM 
                                                            >> 0x19U))
                                                           ? 
                                                          std::string{"SHA512SIG0L"}
                                                           : 
                                                          ((0x2fU 
                                                            == 
                                                            (vlSymsp->TOP.testbench__DOT__InstrM 
                                                             >> 0x19U))
                                                            ? 
                                                           std::string{"SHA512SIG1H"}
                                                            : 
                                                           ((0x2bU 
                                                             == 
                                                             (vlSymsp->TOP.testbench__DOT__InstrM 
                                                              >> 0x19U))
                                                             ? 
                                                            std::string{"SHA512SIG1L"}
                                                             : 
                                                            ((0x28U 
                                                              == 
                                                              (vlSymsp->TOP.testbench__DOT__InstrM 
                                                               >> 0x19U))
                                                              ? 
                                                             std::string{"SHA512SUM0R"}
                                                              : 
                                                             ((0x29U 
                                                               == 
                                                               (vlSymsp->TOP.testbench__DOT__InstrM 
                                                                >> 0x19U))
                                                               ? 
                                                              std::string{"SHA512SUM1R"}
                                                               : 
                                                              std::string{"ILLEGAL"}))))))))))))))))));
    __VdfgExtracted_h4279ed65__0 = ((0U == (vlSymsp->TOP.testbench__DOT__InstrM 
                                            >> 0x1bU))
                                     ? std::string{"FADD"}
                                     : ((1U == (vlSymsp->TOP.testbench__DOT__InstrM 
                                                >> 0x1bU))
                                         ? std::string{"FSUB"}
                                         : ((2U == 
                                             (vlSymsp->TOP.testbench__DOT__InstrM 
                                              >> 0x1bU))
                                             ? std::string{"FMUL"}
                                             : ((3U 
                                                 == 
                                                 (vlSymsp->TOP.testbench__DOT__InstrM 
                                                  >> 0x1bU))
                                                 ? 
                                                std::string{"FDIV"}
                                                 : 
                                                ((0xbU 
                                                  == 
                                                  (vlSymsp->TOP.testbench__DOT__InstrM 
                                                   >> 0x1bU))
                                                  ? 
                                                 std::string{"FSQRT"}
                                                  : 
                                                 ((IData)(
                                                          (0xc0000000U 
                                                           == 
                                                           (0xfff00000U 
                                                            & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                   ? 
                                                  std::string{"FCVT.W.S"}
                                                   : 
                                                  ((IData)(
                                                           (0xc0100000U 
                                                            == 
                                                            (0xfff00000U 
                                                             & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                    ? 
                                                   std::string{"FCVT.WU.S"}
                                                    : 
                                                   ((IData)(
                                                            (0xc0200000U 
                                                             == 
                                                             (0xfff00000U 
                                                              & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                     ? 
                                                    std::string{"FCVT.L.S"}
                                                     : 
                                                    ((IData)(
                                                             (0xc0300000U 
                                                              == 
                                                              (0xfff00000U 
                                                               & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                      ? 
                                                     std::string{"FCVT.LU.S"}
                                                      : 
                                                     ((IData)(
                                                              (0xd0000000U 
                                                               == 
                                                               (0xfff00000U 
                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                       ? 
                                                      std::string{"FCVT.S.W"}
                                                       : 
                                                      ((IData)(
                                                               (0xd0100000U 
                                                                == 
                                                                (0xfff00000U 
                                                                 & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                        ? 
                                                       std::string{"FCVT.S.WU"}
                                                        : 
                                                       ((IData)(
                                                                (0xd0200000U 
                                                                 == 
                                                                 (0xfff00000U 
                                                                  & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                         ? 
                                                        std::string{"FCVT.S.L"}
                                                         : 
                                                        ((IData)(
                                                                 (0xd0300000U 
                                                                  == 
                                                                  (0xfff00000U 
                                                                   & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                          ? 
                                                         std::string{"FCVT.S.LU"}
                                                          : 
                                                         ((IData)(
                                                                  (0xc2000000U 
                                                                   == 
                                                                   (0xfff00000U 
                                                                    & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                           ? 
                                                          std::string{"FCVT.W.D"}
                                                           : 
                                                          ((IData)(
                                                                   (0xc2100000U 
                                                                    == 
                                                                    (0xfff00000U 
                                                                     & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                            ? 
                                                           std::string{"FCVT.WU.D"}
                                                            : 
                                                           ((IData)(
                                                                    (0xc2200000U 
                                                                     == 
                                                                     (0xfff00000U 
                                                                      & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                             ? 
                                                            std::string{"FCVT.L.D"}
                                                             : 
                                                            ((IData)(
                                                                     (0xc2300000U 
                                                                      == 
                                                                      (0xfff00000U 
                                                                       & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                              ? 
                                                             std::string{"FCVT.LU.D"}
                                                              : 
                                                             ((IData)(
                                                                      (0xd2000000U 
                                                                       == 
                                                                       (0xfff00000U 
                                                                        & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                               ? 
                                                              std::string{"FCVT.D.W"}
                                                               : 
                                                              ((IData)(
                                                                       (0xd2100000U 
                                                                        == 
                                                                        (0xfff00000U 
                                                                         & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                ? 
                                                               std::string{"FCVT.D.WU"}
                                                                : 
                                                               ((IData)(
                                                                        (0xd2200000U 
                                                                         == 
                                                                         (0xfff00000U 
                                                                          & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                 ? 
                                                                std::string{"FCVT.D.L"}
                                                                 : 
                                                                ((IData)(
                                                                         (0xd2300000U 
                                                                          == 
                                                                          (0xfff00000U 
                                                                           & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                  ? 
                                                                 std::string{"FCVT.D.LU"}
                                                                  : 
                                                                 ((IData)(
                                                                          (0x40100000U 
                                                                           == 
                                                                           (0xfff00000U 
                                                                            & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                   ? 
                                                                  std::string{"FCVT.S.D"}
                                                                   : 
                                                                  ((IData)(
                                                                           (0x42000000U 
                                                                            == 
                                                                            (0xfff00000U 
                                                                             & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                    ? 
                                                                   std::string{"FCVT.D.S"}
                                                                    : 
                                                                   ((IData)(
                                                                            (0xc4000000U 
                                                                             == 
                                                                             (0xfff00000U 
                                                                              & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                     ? 
                                                                    std::string{"FCVT.W.H"}
                                                                     : 
                                                                    ((IData)(
                                                                             (0xc4100000U 
                                                                              == 
                                                                              (0xfff00000U 
                                                                               & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                      ? 
                                                                     std::string{"FCVT.WU.H"}
                                                                      : 
                                                                     ((IData)(
                                                                              (0xc4200000U 
                                                                               == 
                                                                               (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                       ? 
                                                                      std::string{"FCVT.L.H"}
                                                                       : 
                                                                      ((IData)(
                                                                               (0xc4300000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                        ? 
                                                                       std::string{"FCVT.LU.H"}
                                                                        : 
                                                                       ((IData)(
                                                                                (0xd4000000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                         ? 
                                                                        std::string{"FCVT.H.W"}
                                                                         : 
                                                                        ((IData)(
                                                                                (0xd4100000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                          ? 
                                                                         std::string{"FCVT.H.WU"}
                                                                          : 
                                                                         ((IData)(
                                                                                (0xd4200000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                           ? 
                                                                          std::string{"FCVT.H.L"}
                                                                           : 
                                                                          ((IData)(
                                                                                (0xd4300000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                            ? 
                                                                           std::string{"FCVT.H.LU"}
                                                                            : 
                                                                           ((IData)(
                                                                                (0xc6000000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                             ? 
                                                                            std::string{"FCVT.W.Q"}
                                                                             : 
                                                                            ((IData)(
                                                                                (0xc6100000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                              ? 
                                                                             std::string{"FCVT.WU.Q"}
                                                                              : 
                                                                             ((IData)(
                                                                                (0xc6200000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                               ? 
                                                                              std::string{"FCVT.L.Q"}
                                                                               : 
                                                                              ((IData)(
                                                                                (0xc6300000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                ? 
                                                                               std::string{"FCVT.LU.Q"}
                                                                                : 
                                                                               ((IData)(
                                                                                (0xd6000000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FCVT.Q.W"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0xd6100000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FCVT.Q.WU"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0xd6200000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FCVT.Q.L"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0xd6300000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FCVT.Q.LU"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x40100000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FCVT.S.D"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x40200000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FCVT.S.H"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x40300000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FCVT.S.Q"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x42000000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FCVT.D.S"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x42200000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FCVT.D.H"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x42300000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FCVT.D.Q"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x44000000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FCVT.H.S"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x44100000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FCVT.H.D"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x44300000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FCVT.H.Q"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x46000000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FCVT.Q.S"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x46100000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FCVT.Q.D"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x46200000U 
                                                                                == 
                                                                                (0xfff00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FCVT.Q.H"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0xe0000000U 
                                                                                == 
                                                                                (0xfff07000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FMV.X.W"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0xf0000000U 
                                                                                == 
                                                                                (0xfff07000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FMV.W.X"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0xe2000000U 
                                                                                == 
                                                                                (0xfff07000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FMV.X.D"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0xf2000000U 
                                                                                == 
                                                                                (0xfff07000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FMV.D.X"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0xe4000000U 
                                                                                == 
                                                                                (0xfff07000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FMV.X.H"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0xf4000000U 
                                                                                == 
                                                                                (0xfff07000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FMV.H.X"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x20000000U 
                                                                                == 
                                                                                (0xf8007000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FSGNJ"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x28000000U 
                                                                                == 
                                                                                (0xf8007000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FMIN"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xf8007000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FLE"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x20001000U 
                                                                                == 
                                                                                (0xf8007000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FSGNJN"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x28001000U 
                                                                                == 
                                                                                (0xf8007000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FMAX"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0xa0001000U 
                                                                                == 
                                                                                (0xf8007000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FLT"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0xe0001000U 
                                                                                == 
                                                                                (0xf8007000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FCLASS"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x20002000U 
                                                                                == 
                                                                                (0xf8007000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FSGNJX"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0xa0002000U 
                                                                                == 
                                                                                (0xf8007000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FEQ"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0xf0100000U 
                                                                                == 
                                                                                (0xf9f07000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FLI"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x28002000U 
                                                                                == 
                                                                                (0xf8007000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FMINM"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x28003000U 
                                                                                == 
                                                                                (0xf8007000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FMAXM"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x40400000U 
                                                                                == 
                                                                                (0xf9f00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FROUND"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x40500000U 
                                                                                == 
                                                                                (0xf9f00000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FROUNDNX"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0xa0004000U 
                                                                                == 
                                                                                (0xf8007000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FLEQ"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0xa0005000U 
                                                                                == 
                                                                                (0xf8007000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FLTQ"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0xe2100000U 
                                                                                == 
                                                                                (0xfff07000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FMVH.X.D"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0xe6100000U 
                                                                                == 
                                                                                (0xfff07000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FMVH.X.Q"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0xb2000000U 
                                                                                == 
                                                                                (0xfe007000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FMVP.D.X"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0xb6000000U 
                                                                                == 
                                                                                (0xfe007000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FMVP.Q.X"}
                                                                                 : 
                                                                                ((IData)(
                                                                                (0xc2801000U 
                                                                                == 
                                                                                (0xfff07000U 
                                                                                & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                                 ? 
                                                                                std::string{"FCVTMOD.W.D"}
                                                                                 : 
                                                                                std::string{"ILLEGAL"}))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __VdfgExtracted_hb777cb69__0 = (IData)(((0U == 
                                             (0x7cU 
                                              & vlSymsp->TOP.testbench__DOT__InstrM)) 
                                            & (0U != 
                                               (0x1fU 
                                                & (vlSymsp->TOP.testbench__DOT__InstrM 
                                                   >> 7U)))));
    __VdfgExtracted_hb7ad6d56__0 = ((0U != (0x1fU & 
                                            (vlSymsp->TOP.testbench__DOT__InstrM 
                                             >> 7U))) 
                                    & (0U != (0x1fU 
                                              & (vlSymsp->TOP.testbench__DOT__InstrM 
                                                 >> 2U))));
    if ((2U & vlSymsp->TOP.testbench__DOT__InstrM)) {
        if ((1U & vlSymsp->TOP.testbench__DOT__InstrM)) {
            vlSelfRef.name = ((0x40U & vlSymsp->TOP.testbench__DOT__InstrM)
                               ? ((0x20U & vlSymsp->TOP.testbench__DOT__InstrM)
                                   ? ((0x10U & vlSymsp->TOP.testbench__DOT__InstrM)
                                       ? ((8U & vlSymsp->TOP.testbench__DOT__InstrM)
                                           ? std::string{"ILLEGAL"}
                                           : ((4U & vlSymsp->TOP.testbench__DOT__InstrM)
                                               ? std::string{"ILLEGAL"}
                                               : ((2U 
                                                   & vlSymsp->TOP.testbench__DOT__InstrM)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP.testbench__DOT__InstrM)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSymsp->TOP.testbench__DOT__InstrM)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP.testbench__DOT__InstrM)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"CSRRCI"}
                                                       : 
                                                      std::string{"CSRRSI"})
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"CSRRWI"}
                                                       : 
                                                      std::string{"ILLEGAL"}))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP.testbench__DOT__InstrM)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"CSRRC"}
                                                       : 
                                                      std::string{"CSRRS"})
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"CSRRW"}
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x14U))
                                                        ? 
                                                       std::string{"ECALL"}
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (vlSymsp->TOP.testbench__DOT__InstrM 
                                                          >> 0x14U))
                                                         ? 
                                                        std::string{"EBREAK"}
                                                         : 
                                                        ((0x102U 
                                                          == 
                                                          (vlSymsp->TOP.testbench__DOT__InstrM 
                                                           >> 0x14U))
                                                          ? 
                                                         std::string{"SRET"}
                                                          : 
                                                         ((0x302U 
                                                           == 
                                                           (vlSymsp->TOP.testbench__DOT__InstrM 
                                                            >> 0x14U))
                                                           ? 
                                                          std::string{"MRET"}
                                                           : 
                                                          ((9U 
                                                            == 
                                                            (vlSymsp->TOP.testbench__DOT__InstrM 
                                                             >> 0x19U))
                                                            ? 
                                                           std::string{"SFENCE.VMA"}
                                                            : 
                                                           ((0xbU 
                                                             == 
                                                             (vlSymsp->TOP.testbench__DOT__InstrM 
                                                              >> 0x19U))
                                                             ? 
                                                            std::string{"SINVAL.VMA"}
                                                             : 
                                                            ((IData)(
                                                                     (0x18000000U 
                                                                      == 
                                                                      (0xfff00000U 
                                                                       & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                              ? 
                                                             std::string{"SFENCE.W.INVAL"}
                                                              : 
                                                             ((IData)(
                                                                      (0x18100000U 
                                                                       == 
                                                                       (0xfff00000U 
                                                                        & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                               ? 
                                                              std::string{"SFENCE.INVAL.IR"}
                                                               : 
                                                              ((0x103U 
                                                                == 
                                                                (vlSymsp->TOP.testbench__DOT__InstrM 
                                                                 >> 0x14U))
                                                                ? 
                                                               std::string{"WFI"}
                                                                : 
                                                               ((0x105U 
                                                                 == 
                                                                 (vlSymsp->TOP.testbench__DOT__InstrM 
                                                                  >> 0x14U))
                                                                 ? 
                                                                std::string{"WFI"}
                                                                 : 
                                                                std::string{"ILLEGAL"})))))))))))))
                                                    : 
                                                   std::string{"ILLEGAL"})
                                                   : 
                                                  std::string{"ILLEGAL"})))
                                       : ((8U & vlSymsp->TOP.testbench__DOT__InstrM)
                                           ? ((4U & vlSymsp->TOP.testbench__DOT__InstrM)
                                               ? ((2U 
                                                   & vlSymsp->TOP.testbench__DOT__InstrM)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP.testbench__DOT__InstrM)
                                                    ? 
                                                   std::string{"JAL"}
                                                    : 
                                                   std::string{"ILLEGAL"})
                                                   : 
                                                  std::string{"ILLEGAL"})
                                               : std::string{"ILLEGAL"})
                                           : ((4U & vlSymsp->TOP.testbench__DOT__InstrM)
                                               ? ((2U 
                                                   & vlSymsp->TOP.testbench__DOT__InstrM)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP.testbench__DOT__InstrM)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSymsp->TOP.testbench__DOT__InstrM)
                                                     ? 
                                                    std::string{"ILLEGAL"}
                                                     : 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP.testbench__DOT__InstrM)
                                                      ? 
                                                     std::string{"ILLEGAL"}
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"ILLEGAL"}
                                                       : 
                                                      std::string{"JALR"})))
                                                    : 
                                                   std::string{"ILLEGAL"})
                                                   : 
                                                  std::string{"ILLEGAL"})
                                               : ((2U 
                                                   & vlSymsp->TOP.testbench__DOT__InstrM)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP.testbench__DOT__InstrM)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSymsp->TOP.testbench__DOT__InstrM)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP.testbench__DOT__InstrM)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"BGEU"}
                                                       : 
                                                      std::string{"BLTU"})
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"BGE"}
                                                       : 
                                                      std::string{"BLT"}))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP.testbench__DOT__InstrM)
                                                      ? 
                                                     std::string{"ILLEGAL"}
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"BNE"}
                                                       : 
                                                      std::string{"BEQ"})))
                                                    : 
                                                   std::string{"ILLEGAL"})
                                                   : 
                                                  std::string{"ILLEGAL"}))))
                                   : ((0x10U & vlSymsp->TOP.testbench__DOT__InstrM)
                                       ? ((8U & vlSymsp->TOP.testbench__DOT__InstrM)
                                           ? std::string{"ILLEGAL"}
                                           : ((4U & vlSymsp->TOP.testbench__DOT__InstrM)
                                               ? std::string{"ILLEGAL"}
                                               : ((2U 
                                                   & vlSymsp->TOP.testbench__DOT__InstrM)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP.testbench__DOT__InstrM)
                                                    ? __VdfgExtracted_h4279ed65__0
                                                    : 
                                                   std::string{"ILLEGAL"})
                                                   : 
                                                  std::string{"ILLEGAL"})))
                                       : ((8U & vlSymsp->TOP.testbench__DOT__InstrM)
                                           ? ((4U & vlSymsp->TOP.testbench__DOT__InstrM)
                                               ? ((2U 
                                                   & vlSymsp->TOP.testbench__DOT__InstrM)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP.testbench__DOT__InstrM)
                                                    ? 
                                                   std::string{"FNMADD"}
                                                    : 
                                                   std::string{"ILLEGAL"})
                                                   : 
                                                  std::string{"ILLEGAL"})
                                               : ((2U 
                                                   & vlSymsp->TOP.testbench__DOT__InstrM)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP.testbench__DOT__InstrM)
                                                    ? 
                                                   std::string{"FNMSUB"}
                                                    : 
                                                   std::string{"ILLEGAL"})
                                                   : 
                                                  std::string{"ILLEGAL"}))
                                           : ((4U & vlSymsp->TOP.testbench__DOT__InstrM)
                                               ? ((2U 
                                                   & vlSymsp->TOP.testbench__DOT__InstrM)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP.testbench__DOT__InstrM)
                                                    ? 
                                                   std::string{"FMSUB"}
                                                    : 
                                                   std::string{"ILLEGAL"})
                                                   : 
                                                  std::string{"ILLEGAL"})
                                               : ((2U 
                                                   & vlSymsp->TOP.testbench__DOT__InstrM)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP.testbench__DOT__InstrM)
                                                    ? 
                                                   std::string{"FMADD"}
                                                    : 
                                                   std::string{"ILLEGAL"})
                                                   : 
                                                  std::string{"ILLEGAL"})))))
                               : ((0x20U & vlSymsp->TOP.testbench__DOT__InstrM)
                                   ? ((0x10U & vlSymsp->TOP.testbench__DOT__InstrM)
                                       ? ((8U & vlSymsp->TOP.testbench__DOT__InstrM)
                                           ? ((4U & vlSymsp->TOP.testbench__DOT__InstrM)
                                               ? std::string{"ILLEGAL"}
                                               : ((2U 
                                                   & vlSymsp->TOP.testbench__DOT__InstrM)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP.testbench__DOT__InstrM)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSymsp->TOP.testbench__DOT__InstrM)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP.testbench__DOT__InstrM)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      ((1U 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x19U))
                                                        ? 
                                                       std::string{"REMUW"}
                                                        : 
                                                       std::string{"ILLEGAL"})
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x19U))
                                                        ? 
                                                       std::string{"REMW"}
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (vlSymsp->TOP.testbench__DOT__InstrM 
                                                          >> 0x19U))
                                                         ? 
                                                        std::string{"SH3ADD.UW"}
                                                         : 
                                                        std::string{"ILLEGAL"})))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x19U))
                                                        ? 
                                                       std::string{"SRLW"}
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (vlSymsp->TOP.testbench__DOT__InstrM 
                                                          >> 0x19U))
                                                         ? 
                                                        std::string{"SRAW"}
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (vlSymsp->TOP.testbench__DOT__InstrM 
                                                           >> 0x19U))
                                                          ? 
                                                         std::string{"DIVUW"}
                                                          : 
                                                         ((0x30U 
                                                           == 
                                                           (vlSymsp->TOP.testbench__DOT__InstrM 
                                                            >> 0x19U))
                                                           ? 
                                                          std::string{"RORW"}
                                                           : 
                                                          std::string{"ILLEGAL"}))))
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x19U))
                                                        ? 
                                                       std::string{"SH2ADD.UW"}
                                                        : 
                                                       ((4U 
                                                         == 
                                                         (vlSymsp->TOP.testbench__DOT__InstrM 
                                                          >> 0x19U))
                                                         ? 
                                                        std::string{"ZEXT.H"}
                                                         : 
                                                        std::string{"ILLEGAL"}))))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP.testbench__DOT__InstrM)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"ILLEGAL"}
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x19U))
                                                        ? 
                                                       std::string{"SH1ADD.UW"}
                                                        : 
                                                       std::string{"ILLEGAL"}))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x19U))
                                                        ? 
                                                       std::string{"SLLW"}
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (vlSymsp->TOP.testbench__DOT__InstrM 
                                                          >> 0x19U))
                                                         ? 
                                                        std::string{"DIVW"}
                                                         : 
                                                        ((0x30U 
                                                          == 
                                                          (vlSymsp->TOP.testbench__DOT__InstrM 
                                                           >> 0x19U))
                                                          ? 
                                                         std::string{"ROLW"}
                                                          : 
                                                         std::string{"ILLEGAL"})))
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x19U))
                                                        ? 
                                                       std::string{"ADDW"}
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (vlSymsp->TOP.testbench__DOT__InstrM 
                                                          >> 0x19U))
                                                         ? 
                                                        std::string{"SUBW"}
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (vlSymsp->TOP.testbench__DOT__InstrM 
                                                           >> 0x19U))
                                                          ? 
                                                         std::string{"MULW"}
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (vlSymsp->TOP.testbench__DOT__InstrM 
                                                            >> 0x19U))
                                                           ? 
                                                          std::string{"ADD.UW"}
                                                           : 
                                                          std::string{"ILLEGAL"})))))))
                                                    : 
                                                   std::string{"ILLEGAL"})
                                                   : 
                                                  std::string{"ILLEGAL"}))
                                           : ((4U & vlSymsp->TOP.testbench__DOT__InstrM)
                                               ? ((2U 
                                                   & vlSymsp->TOP.testbench__DOT__InstrM)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP.testbench__DOT__InstrM)
                                                    ? 
                                                   std::string{"LUI"}
                                                    : 
                                                   std::string{"ILLEGAL"})
                                                   : 
                                                  std::string{"ILLEGAL"})
                                               : ((2U 
                                                   & vlSymsp->TOP.testbench__DOT__InstrM)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP.testbench__DOT__InstrM)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSymsp->TOP.testbench__DOT__InstrM)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP.testbench__DOT__InstrM)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x19U))
                                                        ? 
                                                       std::string{"AND"}
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (vlSymsp->TOP.testbench__DOT__InstrM 
                                                          >> 0x19U))
                                                         ? 
                                                        std::string{"REMU"}
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (vlSymsp->TOP.testbench__DOT__InstrM 
                                                           >> 0x19U))
                                                          ? 
                                                         std::string{"MAXU"}
                                                          : 
                                                         ((0x20U 
                                                           == 
                                                           (vlSymsp->TOP.testbench__DOT__InstrM 
                                                            >> 0x19U))
                                                           ? 
                                                          std::string{"ANDN"}
                                                           : 
                                                          ((7U 
                                                            == 
                                                            (vlSymsp->TOP.testbench__DOT__InstrM 
                                                             >> 0x19U))
                                                            ? 
                                                           std::string{"CZERO.NEZ"}
                                                            : 
                                                           std::string{"ILLEGAL"})))))
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x19U))
                                                        ? 
                                                       std::string{"OR"}
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (vlSymsp->TOP.testbench__DOT__InstrM 
                                                          >> 0x19U))
                                                         ? 
                                                        std::string{"REM"}
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (vlSymsp->TOP.testbench__DOT__InstrM 
                                                           >> 0x19U))
                                                          ? 
                                                         std::string{"SH3ADD"}
                                                          : 
                                                         ((5U 
                                                           == 
                                                           (vlSymsp->TOP.testbench__DOT__InstrM 
                                                            >> 0x19U))
                                                           ? 
                                                          std::string{"MAX"}
                                                           : 
                                                          ((0x20U 
                                                            == 
                                                            (vlSymsp->TOP.testbench__DOT__InstrM 
                                                             >> 0x19U))
                                                            ? 
                                                           std::string{"XNOR"}
                                                            : 
                                                           std::string{"ILLEGAL"}))))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x19U))
                                                        ? 
                                                       std::string{"SRL"}
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (vlSymsp->TOP.testbench__DOT__InstrM 
                                                          >> 0x19U))
                                                         ? 
                                                        std::string{"DIVU"}
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (vlSymsp->TOP.testbench__DOT__InstrM 
                                                           >> 0x19U))
                                                          ? 
                                                         std::string{"SRA"}
                                                          : 
                                                         ((5U 
                                                           == 
                                                           (vlSymsp->TOP.testbench__DOT__InstrM 
                                                            >> 0x19U))
                                                           ? 
                                                          std::string{"MINU"}
                                                           : 
                                                          ((0x30U 
                                                            == 
                                                            (vlSymsp->TOP.testbench__DOT__InstrM 
                                                             >> 0x19U))
                                                            ? 
                                                           std::string{"ROR"}
                                                            : 
                                                           ((0x24U 
                                                             == 
                                                             (vlSymsp->TOP.testbench__DOT__InstrM 
                                                              >> 0x19U))
                                                             ? 
                                                            std::string{"BEXT"}
                                                             : 
                                                            ((7U 
                                                              == 
                                                              (vlSymsp->TOP.testbench__DOT__InstrM 
                                                               >> 0x19U))
                                                              ? 
                                                             std::string{"CZERO.EQZ"}
                                                              : 
                                                             std::string{"ILLEGAL"})))))))
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x19U))
                                                        ? 
                                                       std::string{"XOR"}
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (vlSymsp->TOP.testbench__DOT__InstrM 
                                                          >> 0x19U))
                                                         ? 
                                                        std::string{"DIV"}
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (vlSymsp->TOP.testbench__DOT__InstrM 
                                                           >> 0x19U))
                                                          ? 
                                                         std::string{"SH2ADD"}
                                                          : 
                                                         ((5U 
                                                           == 
                                                           (vlSymsp->TOP.testbench__DOT__InstrM 
                                                            >> 0x19U))
                                                           ? 
                                                          std::string{"MIN"}
                                                           : 
                                                          ((0x20U 
                                                            == 
                                                            (vlSymsp->TOP.testbench__DOT__InstrM 
                                                             >> 0x19U))
                                                            ? 
                                                           std::string{"ORN"}
                                                            : 
                                                           ((IData)(
                                                                    (0x8000000U 
                                                                     == 
                                                                     (0xfff00000U 
                                                                      & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                             ? 
                                                            std::string{"ZEXT.H"}
                                                             : 
                                                            ((IData)(
                                                                     (0x8000033U 
                                                                      == 
                                                                      (0xfe00007fU 
                                                                       & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                              ? 
                                                             std::string{"PACK"}
                                                              : 
                                                             ((IData)(
                                                                      (0x800003bU 
                                                                       == 
                                                                       (0xfe00007fU 
                                                                        & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                               ? 
                                                              std::string{"PACKW"}
                                                               : 
                                                              std::string{"ILLEGAL"}))))))))))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP.testbench__DOT__InstrM)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x19U))
                                                        ? 
                                                       std::string{"SLTU"}
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (vlSymsp->TOP.testbench__DOT__InstrM 
                                                          >> 0x19U))
                                                         ? 
                                                        std::string{"MULHU"}
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (vlSymsp->TOP.testbench__DOT__InstrM 
                                                           >> 0x19U))
                                                          ? 
                                                         std::string{"CLMULH"}
                                                          : 
                                                         std::string{"ILLEGAL"})))
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x19U))
                                                        ? 
                                                       std::string{"SLT"}
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (vlSymsp->TOP.testbench__DOT__InstrM 
                                                          >> 0x19U))
                                                         ? 
                                                        std::string{"MULHSU"}
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (vlSymsp->TOP.testbench__DOT__InstrM 
                                                           >> 0x19U))
                                                          ? 
                                                         std::string{"SH1ADD"}
                                                          : 
                                                         ((5U 
                                                           == 
                                                           (vlSymsp->TOP.testbench__DOT__InstrM 
                                                            >> 0x19U))
                                                           ? 
                                                          std::string{"CLMULR"}
                                                           : 
                                                          std::string{"ILLEGAL"})))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x19U))
                                                        ? 
                                                       std::string{"SLL"}
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (vlSymsp->TOP.testbench__DOT__InstrM 
                                                          >> 0x19U))
                                                         ? 
                                                        std::string{"MULH"}
                                                         : 
                                                        ((0x30U 
                                                          == 
                                                          (vlSymsp->TOP.testbench__DOT__InstrM 
                                                           >> 0x19U))
                                                          ? 
                                                         std::string{"ROL"}
                                                          : 
                                                         ((5U 
                                                           == 
                                                           (vlSymsp->TOP.testbench__DOT__InstrM 
                                                            >> 0x19U))
                                                           ? 
                                                          std::string{"CLMUL"}
                                                           : 
                                                          ((0x24U 
                                                            == 
                                                            (vlSymsp->TOP.testbench__DOT__InstrM 
                                                             >> 0x19U))
                                                            ? 
                                                           std::string{"BCLR"}
                                                            : 
                                                           ((0x34U 
                                                             == 
                                                             (vlSymsp->TOP.testbench__DOT__InstrM 
                                                              >> 0x19U))
                                                             ? 
                                                            std::string{"BINV"}
                                                             : 
                                                            ((0x14U 
                                                              == 
                                                              (vlSymsp->TOP.testbench__DOT__InstrM 
                                                               >> 0x19U))
                                                              ? 
                                                             std::string{"BSET"}
                                                              : 
                                                             std::string{"ILLEGAL"})))))))
                                                       : __VdfgExtracted_hcca323ba__0)))
                                                    : 
                                                   std::string{"ILLEGAL"})
                                                   : 
                                                  std::string{"ILLEGAL"})))
                                       : ((8U & vlSymsp->TOP.testbench__DOT__InstrM)
                                           ? ((4U & vlSymsp->TOP.testbench__DOT__InstrM)
                                               ? ((2U 
                                                   & vlSymsp->TOP.testbench__DOT__InstrM)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP.testbench__DOT__InstrM)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSymsp->TOP.testbench__DOT__InstrM)
                                                     ? 
                                                    std::string{"ILLEGAL"}
                                                     : 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP.testbench__DOT__InstrM)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      ((2U 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x1bU))
                                                        ? 
                                                       std::string{"LR.D"}
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (vlSymsp->TOP.testbench__DOT__InstrM 
                                                          >> 0x1bU))
                                                         ? 
                                                        std::string{"SC.D"}
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (vlSymsp->TOP.testbench__DOT__InstrM 
                                                           >> 0x1bU))
                                                          ? 
                                                         std::string{"AMOSWAP.D"}
                                                          : 
                                                         ((0U 
                                                           == 
                                                           (vlSymsp->TOP.testbench__DOT__InstrM 
                                                            >> 0x1bU))
                                                           ? 
                                                          std::string{"AMOADD.D"}
                                                           : 
                                                          ((4U 
                                                            == 
                                                            (vlSymsp->TOP.testbench__DOT__InstrM 
                                                             >> 0x1bU))
                                                            ? 
                                                           std::string{"AMOAXOR.D"}
                                                            : 
                                                           ((0xcU 
                                                             == 
                                                             (vlSymsp->TOP.testbench__DOT__InstrM 
                                                              >> 0x1bU))
                                                             ? 
                                                            std::string{"AMOAND.D"}
                                                             : 
                                                            ((8U 
                                                              == 
                                                              (vlSymsp->TOP.testbench__DOT__InstrM 
                                                               >> 0x1bU))
                                                              ? 
                                                             std::string{"AMOOR.D"}
                                                              : 
                                                             ((0x10U 
                                                               == 
                                                               (vlSymsp->TOP.testbench__DOT__InstrM 
                                                                >> 0x1bU))
                                                               ? 
                                                              std::string{"AMOMIN.D"}
                                                               : 
                                                              ((0x14U 
                                                                == 
                                                                (vlSymsp->TOP.testbench__DOT__InstrM 
                                                                 >> 0x1bU))
                                                                ? 
                                                               std::string{"AMOMAX.D"}
                                                                : 
                                                               ((0x18U 
                                                                 == 
                                                                 (vlSymsp->TOP.testbench__DOT__InstrM 
                                                                  >> 0x1bU))
                                                                 ? 
                                                                std::string{"AMOMINU.D"}
                                                                 : 
                                                                ((0x1cU 
                                                                  == 
                                                                  (vlSymsp->TOP.testbench__DOT__InstrM 
                                                                   >> 0x1bU))
                                                                  ? 
                                                                 std::string{"AMOMAXU.D"}
                                                                  : 
                                                                 std::string{"ILLEGAL"})))))))))))
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x1bU))
                                                        ? 
                                                       std::string{"LR.W"}
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (vlSymsp->TOP.testbench__DOT__InstrM 
                                                          >> 0x1bU))
                                                         ? 
                                                        std::string{"SC.W"}
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (vlSymsp->TOP.testbench__DOT__InstrM 
                                                           >> 0x1bU))
                                                          ? 
                                                         std::string{"AMOSWAP.W"}
                                                          : 
                                                         ((0U 
                                                           == 
                                                           (vlSymsp->TOP.testbench__DOT__InstrM 
                                                            >> 0x1bU))
                                                           ? 
                                                          std::string{"AMOADD.W"}
                                                           : 
                                                          ((4U 
                                                            == 
                                                            (vlSymsp->TOP.testbench__DOT__InstrM 
                                                             >> 0x1bU))
                                                            ? 
                                                           std::string{"AMOAXOR.W"}
                                                            : 
                                                           ((0xcU 
                                                             == 
                                                             (vlSymsp->TOP.testbench__DOT__InstrM 
                                                              >> 0x1bU))
                                                             ? 
                                                            std::string{"AMOAND.W"}
                                                             : 
                                                            ((8U 
                                                              == 
                                                              (vlSymsp->TOP.testbench__DOT__InstrM 
                                                               >> 0x1bU))
                                                              ? 
                                                             std::string{"AMOOR.W"}
                                                              : 
                                                             ((0x10U 
                                                               == 
                                                               (vlSymsp->TOP.testbench__DOT__InstrM 
                                                                >> 0x1bU))
                                                               ? 
                                                              std::string{"AMOMIN.W"}
                                                               : 
                                                              ((0x14U 
                                                                == 
                                                                (vlSymsp->TOP.testbench__DOT__InstrM 
                                                                 >> 0x1bU))
                                                                ? 
                                                               std::string{"AMOMAX.W"}
                                                                : 
                                                               ((0x18U 
                                                                 == 
                                                                 (vlSymsp->TOP.testbench__DOT__InstrM 
                                                                  >> 0x1bU))
                                                                 ? 
                                                                std::string{"AMOMINU.W"}
                                                                 : 
                                                                ((0x1cU 
                                                                  == 
                                                                  (vlSymsp->TOP.testbench__DOT__InstrM 
                                                                   >> 0x1bU))
                                                                  ? 
                                                                 std::string{"AMOMAXU.W"}
                                                                  : 
                                                                 std::string{"ILLEGAL"}))))))))))))
                                                      : 
                                                     std::string{"ILLEGAL"}))
                                                    : 
                                                   std::string{"ILLEGAL"})
                                                   : 
                                                  std::string{"ILLEGAL"})
                                               : std::string{"ILLEGAL"})
                                           : ((4U & vlSymsp->TOP.testbench__DOT__InstrM)
                                               ? ((2U 
                                                   & vlSymsp->TOP.testbench__DOT__InstrM)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP.testbench__DOT__InstrM)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSymsp->TOP.testbench__DOT__InstrM)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP.testbench__DOT__InstrM)
                                                      ? 
                                                     std::string{"ILLEGAL"}
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"ILLEGAL"}
                                                       : 
                                                      std::string{"FSQ"}))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP.testbench__DOT__InstrM)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"FSD"}
                                                       : 
                                                      std::string{"FSW"})
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"FSH"}
                                                       : 
                                                      std::string{"ILLEGAL"})))
                                                    : 
                                                   std::string{"ILLEGAL"})
                                                   : 
                                                  std::string{"ILLEGAL"})
                                               : ((2U 
                                                   & vlSymsp->TOP.testbench__DOT__InstrM)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP.testbench__DOT__InstrM)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSymsp->TOP.testbench__DOT__InstrM)
                                                     ? 
                                                    std::string{"ILLEGAL"}
                                                     : 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP.testbench__DOT__InstrM)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"SD"}
                                                       : 
                                                      std::string{"SW"})
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"SH"}
                                                       : 
                                                      std::string{"SB"})))
                                                    : 
                                                   std::string{"ILLEGAL"})
                                                   : 
                                                  std::string{"ILLEGAL"}))))
                                   : ((0x10U & vlSymsp->TOP.testbench__DOT__InstrM)
                                       ? ((8U & vlSymsp->TOP.testbench__DOT__InstrM)
                                           ? ((4U & vlSymsp->TOP.testbench__DOT__InstrM)
                                               ? std::string{"ILLEGAL"}
                                               : ((2U 
                                                   & vlSymsp->TOP.testbench__DOT__InstrM)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP.testbench__DOT__InstrM)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSymsp->TOP.testbench__DOT__InstrM)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP.testbench__DOT__InstrM)
                                                      ? 
                                                     std::string{"ILLEGAL"}
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x19U))
                                                        ? 
                                                       std::string{"SRLIW"}
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (vlSymsp->TOP.testbench__DOT__InstrM 
                                                          >> 0x19U))
                                                         ? 
                                                        std::string{"SRAIW"}
                                                         : 
                                                        ((0x30U 
                                                          == 
                                                          (vlSymsp->TOP.testbench__DOT__InstrM 
                                                           >> 0x19U))
                                                          ? 
                                                         std::string{"RORIW"}
                                                          : 
                                                         std::string{"ILLEGAL"})))
                                                       : 
                                                      std::string{"ILLEGAL"}))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP.testbench__DOT__InstrM)
                                                      ? 
                                                     std::string{"ILLEGAL"}
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x19U))
                                                        ? 
                                                       std::string{"SLLIW"}
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (vlSymsp->TOP.testbench__DOT__InstrM 
                                                          >> 0x1aU))
                                                         ? 
                                                        std::string{"SLLI.UW"}
                                                         : 
                                                        ((0x30U 
                                                          == 
                                                          (vlSymsp->TOP.testbench__DOT__InstrM 
                                                           >> 0x19U))
                                                          ? 
                                                         ((0U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSymsp->TOP.testbench__DOT__InstrM 
                                                               >> 0x14U)))
                                                           ? 
                                                          std::string{"CLZW"}
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSymsp->TOP.testbench__DOT__InstrM 
                                                                >> 0x14U)))
                                                            ? 
                                                           std::string{"CPOPW"}
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSymsp->TOP.testbench__DOT__InstrM 
                                                                 >> 0x14U)))
                                                             ? 
                                                            std::string{"CTZW"}
                                                             : 
                                                            std::string{"ILLEGAL"})))
                                                          : 
                                                         std::string{"ILLEGAL"})))
                                                       : 
                                                      std::string{"ADDIW"})))
                                                    : 
                                                   std::string{"ILLEGAL"})
                                                   : 
                                                  std::string{"ILLEGAL"}))
                                           : ((4U & vlSymsp->TOP.testbench__DOT__InstrM)
                                               ? ((2U 
                                                   & vlSymsp->TOP.testbench__DOT__InstrM)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP.testbench__DOT__InstrM)
                                                    ? 
                                                   std::string{"AUIPC"}
                                                    : 
                                                   std::string{"ILLEGAL"})
                                                   : 
                                                  std::string{"ILLEGAL"})
                                               : ((2U 
                                                   & vlSymsp->TOP.testbench__DOT__InstrM)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP.testbench__DOT__InstrM)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSymsp->TOP.testbench__DOT__InstrM)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP.testbench__DOT__InstrM)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"ANDI"}
                                                       : 
                                                      ((IData)(
                                                               (0U 
                                                                == 
                                                                (0x1f00f80U 
                                                                 & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                        ? 
                                                       std::string{"PREFETCH.I"}
                                                        : 
                                                       ((IData)(
                                                                (0x100000U 
                                                                 == 
                                                                 (0x1f00f80U 
                                                                  & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                         ? 
                                                        std::string{"PREFETCH.R"}
                                                         : 
                                                        ((IData)(
                                                                 (0x300000U 
                                                                  == 
                                                                  (0x1f00f80U 
                                                                   & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                          ? 
                                                         std::string{"PREFETCH.W"}
                                                          : 
                                                         std::string{"ORI"}))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x1aU))
                                                        ? 
                                                       std::string{"SRLI"}
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (vlSymsp->TOP.testbench__DOT__InstrM 
                                                          >> 0x1aU))
                                                         ? 
                                                        std::string{"SRAI"}
                                                         : 
                                                        ((IData)(
                                                                 (0x69800000U 
                                                                  == 
                                                                  (0xfdf00000U 
                                                                   & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                          ? 
                                                         std::string{"REV8"}
                                                          : 
                                                         ((0x18U 
                                                           == 
                                                           (vlSymsp->TOP.testbench__DOT__InstrM 
                                                            >> 0x1aU))
                                                           ? 
                                                          std::string{"RORI"}
                                                           : 
                                                          ((0x12U 
                                                            == 
                                                            (vlSymsp->TOP.testbench__DOT__InstrM 
                                                             >> 0x1aU))
                                                            ? 
                                                           std::string{"BEXTI"}
                                                            : 
                                                           ((IData)(
                                                                    (0x28700000U 
                                                                     == 
                                                                     (0xfff00000U 
                                                                      & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                             ? 
                                                            std::string{"ORC.B"}
                                                             : 
                                                            ((0x687U 
                                                              == 
                                                              (vlSymsp->TOP.testbench__DOT__InstrM 
                                                               >> 0x14U))
                                                              ? 
                                                             std::string{"BREV8"}
                                                              : 
                                                             ((IData)(
                                                                      (0x8f00000U 
                                                                       == 
                                                                       (0xfff00000U 
                                                                        & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                               ? 
                                                              std::string{"UNZIP"}
                                                               : 
                                                              std::string{"ILLEGAL"}))))))))
                                                       : 
                                                      std::string{"XORI"}))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP.testbench__DOT__InstrM)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"SLTIU"}
                                                       : 
                                                      std::string{"SLTI"})
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x1aU))
                                                        ? 
                                                       std::string{"SLLI"}
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (vlSymsp->TOP.testbench__DOT__InstrM 
                                                          >> 0x1aU))
                                                         ? 
                                                        std::string{"BCLRI"}
                                                         : 
                                                        ((0x1aU 
                                                          == 
                                                          (vlSymsp->TOP.testbench__DOT__InstrM 
                                                           >> 0x1aU))
                                                          ? 
                                                         std::string{"BINVI"}
                                                          : 
                                                         ((0xaU 
                                                           == 
                                                           (vlSymsp->TOP.testbench__DOT__InstrM 
                                                            >> 0x1aU))
                                                           ? 
                                                          std::string{"BSETI"}
                                                           : 
                                                          ((IData)(
                                                                   (0x8f00000U 
                                                                    == 
                                                                    (0xfff00000U 
                                                                     & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                            ? 
                                                           std::string{"ZIP"}
                                                            : 
                                                           ((IData)(
                                                                    (0x30000000U 
                                                                     == 
                                                                     (0xfff00000U 
                                                                      & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                             ? 
                                                            std::string{"AES64IM"}
                                                             : 
                                                            ((IData)(
                                                                     (0x31000000U 
                                                                      == 
                                                                      (0xff000000U 
                                                                       & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                              ? 
                                                             std::string{"AES64KS1I"}
                                                              : 
                                                             ((IData)(
                                                                      (0x10200000U 
                                                                       == 
                                                                       (0xfff00000U 
                                                                        & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                               ? 
                                                              std::string{"SHA256SIG0"}
                                                               : 
                                                              ((IData)(
                                                                       (0x10300000U 
                                                                        == 
                                                                        (0xfff00000U 
                                                                         & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                ? 
                                                               std::string{"SHA256SIG1"}
                                                                : 
                                                               ((IData)(
                                                                        (0x10000000U 
                                                                         == 
                                                                         (0xfff00000U 
                                                                          & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                 ? 
                                                                std::string{"SHA256SUM0"}
                                                                 : 
                                                                ((IData)(
                                                                         (0x10100000U 
                                                                          == 
                                                                          (0xfff00000U 
                                                                           & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                  ? 
                                                                 std::string{"SHA256SUM1"}
                                                                  : 
                                                                 ((IData)(
                                                                          (0x10600000U 
                                                                           == 
                                                                           (0xfff00000U 
                                                                            & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                   ? 
                                                                  std::string{"SHA512SIG0"}
                                                                   : 
                                                                  ((IData)(
                                                                           (0x10700000U 
                                                                            == 
                                                                            (0xfff00000U 
                                                                             & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                    ? 
                                                                   std::string{"SHA512SIG1"}
                                                                    : 
                                                                   ((IData)(
                                                                            (0x10400000U 
                                                                             == 
                                                                             (0xfff00000U 
                                                                              & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                     ? 
                                                                    std::string{"SHA512SUM0"}
                                                                     : 
                                                                    ((IData)(
                                                                             (0x10500000U 
                                                                              == 
                                                                              (0xfff00000U 
                                                                               & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                                      ? 
                                                                     std::string{"SHA512SUM1"}
                                                                      : 
                                                                     ((0x30U 
                                                                       == 
                                                                       (vlSymsp->TOP.testbench__DOT__InstrM 
                                                                        >> 0x19U))
                                                                       ? 
                                                                      ((0x1000000U 
                                                                        & vlSymsp->TOP.testbench__DOT__InstrM)
                                                                        ? 
                                                                       std::string{"ILLEGAL"}
                                                                        : 
                                                                       ((0x800000U 
                                                                         & vlSymsp->TOP.testbench__DOT__InstrM)
                                                                         ? 
                                                                        std::string{"ILLEGAL"}
                                                                         : 
                                                                        ((0x400000U 
                                                                          & vlSymsp->TOP.testbench__DOT__InstrM)
                                                                          ? 
                                                                         ((0x200000U 
                                                                           & vlSymsp->TOP.testbench__DOT__InstrM)
                                                                           ? 
                                                                          std::string{"ILLEGAL"}
                                                                           : 
                                                                          ((0x100000U 
                                                                            & vlSymsp->TOP.testbench__DOT__InstrM)
                                                                            ? 
                                                                           std::string{"SEXT.H"}
                                                                            : 
                                                                           std::string{"SEXT.B"}))
                                                                          : 
                                                                         ((0x200000U 
                                                                           & vlSymsp->TOP.testbench__DOT__InstrM)
                                                                           ? 
                                                                          ((0x100000U 
                                                                            & vlSymsp->TOP.testbench__DOT__InstrM)
                                                                            ? 
                                                                           std::string{"ILLEGAL"}
                                                                            : 
                                                                           std::string{"CPOP"})
                                                                           : 
                                                                          ((0x100000U 
                                                                            & vlSymsp->TOP.testbench__DOT__InstrM)
                                                                            ? 
                                                                           std::string{"CTZ"}
                                                                            : 
                                                                           std::string{"CLZ"})))))
                                                                       : 
                                                                      std::string{"ILLEGAL"}))))))))))))))))
                                                       : 
                                                      ((IData)(
                                                               (0U 
                                                                == 
                                                                (0xffff8f80U 
                                                                 & vlSymsp->TOP.testbench__DOT__InstrM)))
                                                        ? 
                                                       std::string{"NOP/FLUSH"}
                                                        : 
                                                       std::string{"ADDI"}))))
                                                    : 
                                                   std::string{"ILLEGAL"})
                                                   : 
                                                  std::string{"ILLEGAL"})))
                                       : ((8U & vlSymsp->TOP.testbench__DOT__InstrM)
                                           ? ((4U & vlSymsp->TOP.testbench__DOT__InstrM)
                                               ? ((2U 
                                                   & vlSymsp->TOP.testbench__DOT__InstrM)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP.testbench__DOT__InstrM)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSymsp->TOP.testbench__DOT__InstrM)
                                                     ? 
                                                    std::string{"ILLEGAL"}
                                                     : 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP.testbench__DOT__InstrM)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"ILLEGAL"}
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (vlSymsp->TOP.testbench__DOT__InstrM 
                                                         >> 0x14U))
                                                        ? 
                                                       std::string{"CBO.INVAL"}
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (vlSymsp->TOP.testbench__DOT__InstrM 
                                                          >> 0x14U))
                                                         ? 
                                                        std::string{"CBO.CLEAN"}
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (vlSymsp->TOP.testbench__DOT__InstrM 
                                                           >> 0x14U))
                                                          ? 
                                                         std::string{"CBO.FLUSH"}
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (vlSymsp->TOP.testbench__DOT__InstrM 
                                                            >> 0x14U))
                                                           ? 
                                                          std::string{"CBO.ZERO"}
                                                           : 
                                                          std::string{"ILLEGAL"})))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"FENCE.I"}
                                                       : 
                                                      std::string{"FENCE"})))
                                                    : 
                                                   std::string{"ILLEGAL"})
                                                   : 
                                                  std::string{"ILLEGAL"})
                                               : std::string{"ILLEGAL"})
                                           : ((4U & vlSymsp->TOP.testbench__DOT__InstrM)
                                               ? ((2U 
                                                   & vlSymsp->TOP.testbench__DOT__InstrM)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP.testbench__DOT__InstrM)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSymsp->TOP.testbench__DOT__InstrM)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP.testbench__DOT__InstrM)
                                                      ? 
                                                     std::string{"ILLEGAL"}
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"ILLEGAL"}
                                                       : 
                                                      std::string{"FLQ"}))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP.testbench__DOT__InstrM)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"FLD"}
                                                       : 
                                                      std::string{"FLW"})
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"FLH"}
                                                       : 
                                                      std::string{"ILLEGAL"})))
                                                    : 
                                                   std::string{"ILLEGAL"})
                                                   : 
                                                  std::string{"ILLEGAL"})
                                               : ((2U 
                                                   & vlSymsp->TOP.testbench__DOT__InstrM)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP.testbench__DOT__InstrM)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSymsp->TOP.testbench__DOT__InstrM)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP.testbench__DOT__InstrM)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"ILLEGAL"}
                                                       : 
                                                      std::string{"LWU"})
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"LHU"}
                                                       : 
                                                      std::string{"LBU"}))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP.testbench__DOT__InstrM)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"LD"}
                                                       : 
                                                      std::string{"LW"})
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP.testbench__DOT__InstrM)
                                                       ? 
                                                      std::string{"LH"}
                                                       : 
                                                      std::string{"LB"})))
                                                    : 
                                                   std::string{"ILLEGAL"})
                                                   : 
                                                  std::string{"ILLEGAL"}))))));
        } else if ((0x8000U & vlSymsp->TOP.testbench__DOT__InstrM)) {
            if ((0x4000U & vlSymsp->TOP.testbench__DOT__InstrM)) {
                vlSelfRef.name = ((0x2000U & vlSymsp->TOP.testbench__DOT__InstrM)
                                   ? std::string{"C.SDSP"}
                                   : std::string{"C.SWSP"});
            } else if ((0x2000U & vlSymsp->TOP.testbench__DOT__InstrM)) {
                vlSelfRef.name = std::string{"C.FSDSP"};
            } else if ((0x1000U & vlSymsp->TOP.testbench__DOT__InstrM)) {
                if ((IData)((0U == (0xffcU & vlSymsp->TOP.testbench__DOT__InstrM)))) {
                    vlSelfRef.name = std::string{"C.EBREAK"};
                } else if (__VdfgExtracted_hb777cb69__0) {
                    vlSelfRef.name = std::string{"C.JALR"};
                } else if (__VdfgExtracted_hb7ad6d56__0) {
                    vlSelfRef.name = std::string{"C.ADD"};
                }
            } else if (__VdfgExtracted_hb777cb69__0) {
                vlSelfRef.name = std::string{"C.JR"};
            } else if (__VdfgExtracted_hb7ad6d56__0) {
                vlSelfRef.name = std::string{"C.MV"};
            }
        } else if ((0x4000U & vlSymsp->TOP.testbench__DOT__InstrM)) {
            if ((0x2000U & vlSymsp->TOP.testbench__DOT__InstrM)) {
                if ((0U != (0x1fU & (vlSymsp->TOP.testbench__DOT__InstrM 
                                     >> 7U)))) {
                    vlSelfRef.name = std::string{"C.LDSP"};
                }
            } else if ((0U != (0x1fU & (vlSymsp->TOP.testbench__DOT__InstrM 
                                        >> 7U)))) {
                vlSelfRef.name = std::string{"C.LWSP"};
            }
        } else if ((0x2000U & vlSymsp->TOP.testbench__DOT__InstrM)) {
            vlSelfRef.name = std::string{"C.FLDSP"};
        } else if ((0U != (0x1fU & (vlSymsp->TOP.testbench__DOT__InstrM 
                                    >> 7U)))) {
            vlSelfRef.name = std::string{"C.SLLI"};
        }
    } else if ((1U & vlSymsp->TOP.testbench__DOT__InstrM)) {
        if ((0x8000U & vlSymsp->TOP.testbench__DOT__InstrM)) {
            if ((0x4000U & vlSymsp->TOP.testbench__DOT__InstrM)) {
                vlSelfRef.name = ((0x2000U & vlSymsp->TOP.testbench__DOT__InstrM)
                                   ? std::string{"C.BNEZ"}
                                   : std::string{"C.BEQZ"});
            } else if ((0x2000U & vlSymsp->TOP.testbench__DOT__InstrM)) {
                vlSelfRef.name = std::string{"C.J"};
            } else if ((0x1000U & vlSymsp->TOP.testbench__DOT__InstrM)) {
                if ((0x800U & vlSymsp->TOP.testbench__DOT__InstrM)) {
                    if ((0x400U & vlSymsp->TOP.testbench__DOT__InstrM)) {
                        if ((0U == (3U & (vlSymsp->TOP.testbench__DOT__InstrM 
                                          >> 5U)))) {
                            vlSelfRef.name = std::string{"C.SUBW"};
                        } else if ((1U == (3U & (vlSymsp->TOP.testbench__DOT__InstrM 
                                                 >> 5U)))) {
                            vlSelfRef.name = std::string{"C.ADDW"};
                        } else if ((0x18U == (0x1fU 
                                              & (vlSymsp->TOP.testbench__DOT__InstrM 
                                                 >> 2U)))) {
                            vlSelfRef.name = std::string{"C.ZEXT.B"};
                        } else if ((0x19U == (0x1fU 
                                              & (vlSymsp->TOP.testbench__DOT__InstrM 
                                                 >> 2U)))) {
                            vlSelfRef.name = std::string{"C.SEXT.B"};
                        } else if ((0x1aU == (0x1fU 
                                              & (vlSymsp->TOP.testbench__DOT__InstrM 
                                                 >> 2U)))) {
                            vlSelfRef.name = std::string{"C.ZEXT.H"};
                        } else if ((0x1bU == (0x1fU 
                                              & (vlSymsp->TOP.testbench__DOT__InstrM 
                                                 >> 2U)))) {
                            vlSelfRef.name = std::string{"C.SEXT.H"};
                        } else if ((0x1dU == (0x1fU 
                                              & (vlSymsp->TOP.testbench__DOT__InstrM 
                                                 >> 2U)))) {
                            vlSelfRef.name = std::string{"C.NOT"};
                        } else if ((2U == (3U & (vlSymsp->TOP.testbench__DOT__InstrM 
                                                 >> 5U)))) {
                            vlSelfRef.name = std::string{"C.MUL"};
                        } else if ((0x1cU == (0x1fU 
                                              & (vlSymsp->TOP.testbench__DOT__InstrM 
                                                 >> 2U)))) {
                            vlSelfRef.name = std::string{"C.ZEXT.W"};
                        }
                    } else {
                        vlSelfRef.name = std::string{"C.ANDI"};
                    }
                } else {
                    vlSelfRef.name = ((0x400U & vlSymsp->TOP.testbench__DOT__InstrM)
                                       ? std::string{"C.SRAI"}
                                       : std::string{"C.SRLI"});
                }
            } else if ((0x800U & vlSymsp->TOP.testbench__DOT__InstrM)) {
                if ((0x400U & vlSymsp->TOP.testbench__DOT__InstrM)) {
                    if ((0U == (3U & (vlSymsp->TOP.testbench__DOT__InstrM 
                                      >> 5U)))) {
                        vlSelfRef.name = std::string{"C.SUB"};
                    } else if ((1U == (3U & (vlSymsp->TOP.testbench__DOT__InstrM 
                                             >> 5U)))) {
                        vlSelfRef.name = std::string{"C.XOR"};
                    } else if ((2U == (3U & (vlSymsp->TOP.testbench__DOT__InstrM 
                                             >> 5U)))) {
                        vlSelfRef.name = std::string{"C.OR"};
                    } else if ((3U == (3U & (vlSymsp->TOP.testbench__DOT__InstrM 
                                             >> 5U)))) {
                        vlSelfRef.name = std::string{"C.AND"};
                    }
                } else {
                    vlSelfRef.name = std::string{"C.ANDI"};
                }
            } else {
                vlSelfRef.name = ((0x400U & vlSymsp->TOP.testbench__DOT__InstrM)
                                   ? std::string{"C.SRAI"}
                                   : std::string{"C.SRLI"});
            }
        } else if ((0x4000U & vlSymsp->TOP.testbench__DOT__InstrM)) {
            if ((0x2000U & vlSymsp->TOP.testbench__DOT__InstrM)) {
                if ((((0U != (0x1fU & (vlSymsp->TOP.testbench__DOT__InstrM 
                                       >> 7U))) & (2U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP.testbench__DOT__InstrM 
                                                       >> 7U)))) 
                     & (0U != (0x1fU & (vlSymsp->TOP.testbench__DOT__InstrM 
                                        >> 2U))))) {
                    vlSelfRef.name = std::string{"C.LUI"};
                } else if ((IData)(((0x100U == (0xf80U 
                                                & vlSymsp->TOP.testbench__DOT__InstrM)) 
                                    & (0U != (0x1fU 
                                              & (vlSymsp->TOP.testbench__DOT__InstrM 
                                                 >> 2U)))))) {
                    vlSelfRef.name = std::string{"C.ADDI16SP"};
                }
            } else if ((0U != (0x1fU & (vlSymsp->TOP.testbench__DOT__InstrM 
                                        >> 7U)))) {
                vlSelfRef.name = std::string{"C.LI"};
            }
        } else if ((0x2000U & vlSymsp->TOP.testbench__DOT__InstrM)) {
            if ((0U != (0x1fU & (vlSymsp->TOP.testbench__DOT__InstrM 
                                 >> 7U)))) {
                vlSelfRef.name = std::string{"C.ADDIW"};
            }
        } else if ((IData)((0U == (0x1ffcU & vlSymsp->TOP.testbench__DOT__InstrM)))) {
            vlSelfRef.name = std::string{"C.NOP"};
        } else if (((0U != (0x1fU & (vlSymsp->TOP.testbench__DOT__InstrM 
                                     >> 7U))) & (0U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP.testbench__DOT__InstrM 
                                                     >> 2U))))) {
            vlSelfRef.name = std::string{"C.ADDI"};
        }
    } else if ((0x8000U & vlSymsp->TOP.testbench__DOT__InstrM)) {
        if ((0x4000U & vlSymsp->TOP.testbench__DOT__InstrM)) {
            vlSelfRef.name = ((0x2000U & vlSymsp->TOP.testbench__DOT__InstrM)
                               ? std::string{"C.SD"}
                               : std::string{"C.SW"});
        } else if ((0x2000U & vlSymsp->TOP.testbench__DOT__InstrM)) {
            vlSelfRef.name = std::string{"C.FSD"};
        } else if ((0x1000U & vlSymsp->TOP.testbench__DOT__InstrM)) {
            vlSelfRef.name = std::string{"ILLEGAL"};
        } else if ((0x800U & vlSymsp->TOP.testbench__DOT__InstrM)) {
            if ((0x400U & vlSymsp->TOP.testbench__DOT__InstrM)) {
                if ((1U & (~ (vlSymsp->TOP.testbench__DOT__InstrM 
                              >> 6U)))) {
                    vlSelfRef.name = std::string{"C.SH"};
                }
            } else {
                vlSelfRef.name = std::string{"C.SB"};
            }
        } else if ((0x400U & vlSymsp->TOP.testbench__DOT__InstrM)) {
            if ((0x40U & vlSymsp->TOP.testbench__DOT__InstrM)) {
                vlSelfRef.name = std::string{"C.LH"};
            } else if ((1U & (~ (vlSymsp->TOP.testbench__DOT__InstrM 
                                 >> 6U)))) {
                vlSelfRef.name = std::string{"C.LHU"};
            }
        } else {
            vlSelfRef.name = std::string{"C.LBU"};
        }
    } else if ((0x4000U & vlSymsp->TOP.testbench__DOT__InstrM)) {
        vlSelfRef.name = ((0x2000U & vlSymsp->TOP.testbench__DOT__InstrM)
                           ? std::string{"C.LD"} : 
                          std::string{"C.LW"});
    } else if ((0x2000U & vlSymsp->TOP.testbench__DOT__InstrM)) {
        vlSelfRef.name = std::string{"C.FLD"};
    } else if ((0U != (0xffU & (vlSymsp->TOP.testbench__DOT__InstrM 
                                >> 5U)))) {
        vlSelfRef.name = std::string{"C.ADDI4SPN"};
    } else if ((IData)((0U == (0xfc7fU & vlSymsp->TOP.testbench__DOT__InstrM)))) {
        vlSelfRef.name = std::string{"BAD"};
    }
}
