
.section .text.init
.globl rvtest_entry_point
rvtest_entry_point:
    li t0, 0x00006000
    csrs mstatus, t0
    la s0, val_s_subnorm
    fld f0, 0(s0)
    fcvt.bf16.s f1, f0
    fmv.x.w a0, f1

    li t0, 0x0001
    # Check if lower 16 bits match 0x0001
    slli a1, a0, 48
    srli a1, a1, 48
    bne a1, t0, fail

pass:
    .option norvc
1:  j 1b

fail:
    csrw mtvec, zero
    jr zero

.section .data
.align 3
val_s_subnorm: .dword 0xffffffff00010000

.section .tohost
.align 6
.globl tohost
tohost: .dword 0
.globl fromhost
fromhost: .dword 0
