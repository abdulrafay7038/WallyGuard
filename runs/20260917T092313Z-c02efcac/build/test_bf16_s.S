.section .text.init
.globl rvtest_entry_point
rvtest_entry_point:
    li t0, 0x00006000
    csrs mstatus, t0

    # Load NaN-boxed Single subnormal: 0x00010000
    la s0, val_s_subnorm
    fld f0, 0(s0)

    # Convert Single to BF16: fcvt.bf16.s
    fcvt.bf16.s f1, f0

    # Move result to integer register to examine
    fmv.x.w a0, f1

    # Clean termination
    la t0, tohost
    li t1, 1
    sd t1, 0(t0)
    .option norvc
1:  j 1b

.section .data
.align 3
val_s_subnorm: .dword 0xffffffff00010000

.section .tohost
.align 6
.globl tohost
tohost: .dword 0
.globl fromhost
fromhost: .dword 0
