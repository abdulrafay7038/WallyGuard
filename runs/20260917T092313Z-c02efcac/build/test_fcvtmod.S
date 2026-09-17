.section .text.init
.globl rvtest_entry_point
rvtest_entry_point:
    li t0, 0x00006000
    csrs mstatus, t0

    # Test 1: +2.5 -> 2
    fld f0, val_pos, t0
    fcvtmod.w.d a0, f0, rtz

    # Test 2: -2.5 -> -2 (0xfffffffffffffffe)
    fld f1, val_neg, t0
    fcvtmod.w.d a1, f1, rtz

    # Test 3: 2^31 (2147483648.0) -> bit 31 is 1, in 32-bit signed it wraps to -2147483648 (0xffffffff80000000)
    fld f2, val_2p31, t0
    fcvtmod.w.d a2, f2, rtz

    # Test 4: 2^32 + 5 -> 5
    fld f3, val_2p32_p5, t0
    fcvtmod.w.d a3, f3, rtz

    # Test 5: -5.0 -> -5
    fld f4, val_neg5, t0
    fcvtmod.w.d a4, f4, rtz

    # Test 6: -(2^32) - 5 -> -5 (0xfffffffffffffffb)
    fld f5, val_neg_2p32_m5, t0
    fcvtmod.w.d a5, f5, rtz

    # Test 7: 2^40 + 7 -> 7
    fld f6, val_2p40_p7, t0
    fcvtmod.w.d a6, f6, rtz

    # Test 8: NaN -> 0
    fld f7, val_nan, t0
    fcvtmod.w.d a7, f7, rtz

    # Test 9: +Inf -> 0
    fld f8, val_inf, t0
    fcvtmod.w.d s2, f8, rtz

    # Save results to memory
    la s0, results
    sd a0, 0(s0)
    sd a1, 8(s0)
    sd a2, 16(s0)
    sd a3, 24(s0)
    sd a4, 32(s0)
    sd a5, 40(s0)
    sd a6, 48(s0)
    sd a7, 56(s0)
    sd s2, 64(s0)

    # Clean termination
    la t0, tohost
    li t1, 1
    sd t1, 0(t0)
    .option norvc
1:  j 1b

.section .data
.align 3
val_pos:        .double 2.5
val_neg:        .double -2.5
val_2p31:       .double 2147483648.0
val_2p32_p5:    .double 4294967301.0
val_neg5:       .double -5.0
val_neg_2p32_m5:.double -4294967301.0
val_2p40_p7:    .double 1099511627783.0
val_nan:        .dword 0x7ff8000000000000
val_inf:        .dword 0x7ff0000000000000

.align 4
results:
    .dword 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

.section .tohost
.align 6
.globl tohost
tohost: .dword 0
.globl fromhost
fromhost: .dword 0
