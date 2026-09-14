
.section .text.init
.globl rvtest_entry_point
rvtest_entry_point:
    li t0, -1
    csrw medeleg, t0
    csrr t1, medeleg
    la a0, tohost
    sd t1, 8(a0)
    li gp, 1
    sd gp, 0(a0)
    sw gp, 0(a0)
1:  j 1b

.section .tohost,"aw",@progbits
.align 6
.globl tohost
tohost: .dword 0
val:    .dword 0
.globl fromhost
fromhost: .dword 0
