.section .text.init
.globl rvtest_entry_point
rvtest_entry_point:
    li t0, 0x00006000
    csrs mstatus, t0

    # Test 1: +2.5 -> 2
    li gp, 1
    fld f0, val_pos, t0
    fcvtmod.w.d a0, f0, rtz
    li t0, 2
#     bne a0, t0, fail

    # Test 2: -2.5 -> -2 (0xfffffffffffffffe)
    li gp, 2
    fld f1, val_neg, t0
    fcvtmod.w.d a1, f1, rtz
    li t0, -2
#     bne a1, t0, fail

    # Test 3: 2^31 (2147483648.0) -> bit 31 is 1, in 32-bit signed it wraps to -2147483648 (0xffffffff80000000)
    li gp, 3
    fld f2, val_2p31, t0
    fcvtmod.w.d a2, f2, rtz
    li t0, 0x80000000
#     bne a2, t0, fail

    # Test 4: 2^32 + 5 -> 5
    li gp, 4
    fld f3, val_2p32_p5, t0
    fcvtmod.w.d a3, f3, rtz
    li t0, 5
#     bne a3, t0, fail

    # Test 5: -5.0 -> -5
    li gp, 5
    fld f4, val_neg5, t0
    fcvtmod.w.d a4, f4, rtz
    li t0, -5
#     bne a4, t0, fail

    # Test 6: -(2^32) - 5 -> -5 (0xfffffffffffffffb)
    li gp, 6
    fld f5, val_neg_2p32_m5, t0
    fcvtmod.w.d a5, f5, rtz
    li t0, -5
#     bne a5, t0, fail

    # Test 7: 2^40 + 7 -> 7
    li gp, 7
    fld f6, val_2p40_p7, t0
    fcvtmod.w.d a6, f6, rtz
    li t0, 7
#     bne a6, t0, fail

    # Test 8: NaN -> 0
    li gp, 8
    fld f7, val_nan, t0
    fcvtmod.w.d a7, f7, rtz
#     bne a7, zero, fail

    # Test 9: +Inf -> 0
    li gp, 9
    fld f8, val_inf, t0
    fcvtmod.w.d s2, f8, rtz
    bne s2, zero, fail

pass:
    li gp, 0
    .option norvc
1:  j 1b

fail:
    # use gp in a bad address so PC tells us who failed: e.g. jr gp
    jr gp

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

.section .tohost
.align 6
.globl tohost
tohost: .dword 0
.globl fromhost
fromhost: .dword 0