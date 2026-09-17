
.section .text.init
.globl rvtest_entry_point
rvtest_entry_point:
    li t0, 0x00006000
    csrs mstatus, t0
    la s0, val_bf16_subnorm
    fld f0, 0(s0)
    fcvt.s.bf16 f1, f0
    fmv.x.w a0, f1

    li t0, 2143289344
    beq a0, t0, pass

fail:
    csrw mtvec, zero
    jr zero

pass:
    .option norvc
1:  j 1b

.section .data
.align 3
val_bf16_subnorm: .dword 0xffffffffffff0001

.section .tohost
.align 6
.globl tohost
tohost: .dword 0
.globl fromhost
fromhost: .dword 0
