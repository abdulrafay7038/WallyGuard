.section .text.init
.globl rvtest_entry_point
rvtest_entry_point:
    li t0, 0x00006000
    csrs mstatus, t0

    # Load NaN-boxed BF16 subnormal: 0x0001
    # In 64-bit: 0xffffffffffff0001
    la s0, val_bf16_subnorm
    fld f0, 0(s0)

    # Convert BF16 to Single: fcvt.s.bf16
    fcvt.s.bf16 f1, f0

    # Move result to integer register to examine
    fmv.x.w a0, f1

    # Save to memory
    la s0, res_fcvt
    sd a0, 0(s0)

    # Clean termination
    la t0, tohost
    li t1, 1
    sd t1, 0(t0)
    .option norvc
1:  j 1b

.section .data
.align 3
val_bf16_subnorm: .dword 0xffffffffffff0001
res_fcvt:         .dword 0

.section .tohost
.align 6
.globl tohost
tohost: .dword 0
.globl fromhost
fromhost: .dword 0
