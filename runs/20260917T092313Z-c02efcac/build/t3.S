
.section .text.init
.globl rvtest_entry_point
rvtest_entry_point:
    li t0, 0x00006000
    csrs mstatus, t0
    fld f2, val_2p31, t0
    fcvtmod.w.d a2, f2, rtz
    la s0, out_val
    sd a2, 0(s0)
    .option norvc
1:  j 1b

.section .data
.align 3
val_2p31: .double 2147483648.0
.align 3
.globl out_val
out_val: .dword 0

.section .tohost
.align 6
.globl tohost
tohost: .dword 0
.globl fromhost
fromhost: .dword 0
