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
    .option norvc
1:  j 1b

.section .tohost
.align 6
.globl tohost
tohost: .dword 0
.globl fromhost
fromhost: .dword 0
