
.section .text.init
.globl rvtest_entry_point
rvtest_entry_point:
    la a0, data_word
    lr.w t0, (a0)
    sw zero, (a0)
    sc.w t1, t0, (a0)
    # t1 should be 0 or 1?
    la a1, tohost
    sd t1, 8(a1)
    li gp, 1
    sd gp, 0(a1)
    sw gp, 0(a1)
1:  j 1b

.section .data
.align 4
data_word: .word 0x12345678

.section .tohost,"aw",@progbits
.align 6
.globl tohost
tohost: .dword 0
.globl fromhost
fromhost: .dword 0
