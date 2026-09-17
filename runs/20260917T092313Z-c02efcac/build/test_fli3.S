.section .text.init
.globl rvtest_entry_point
rvtest_entry_point:
    li t0, 0x00006000
    csrs mstatus, t0
    fli.h f0, 0x1p16
    fli.h f1, 0x1p15
    fli.h f2, inf
    fli.h f3, nan
    fmv.x.w t0, f0
    fmv.x.w t1, f1
    fmv.x.w t2, f2
    fmv.x.w t3, f3
    la s0, results
    sd t0, 0(s0)
    sd t1, 8(s0)
    sd t2, 16(s0)
    sd t3, 24(s0)
    li a0, 0
    # Write tohost to terminate Spike cleanly
    la t0, tohost
    li t1, 1
    sd t1, 0(t0)
    .option norvc
1:  j 1b

.section .data
.align 4
results:
    .dword 0, 0, 0, 0

.section .tohost
.align 6
.globl tohost
tohost: .dword 0
.globl fromhost
fromhost: .dword 0
