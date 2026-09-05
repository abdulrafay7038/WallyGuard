// Directed collector regression: compressed encodings, a load/use stall,
// a taken branch with a flushed GPR write, repeated PCs, ECALL and MRET.
.section .text.init
.globl _start
_start:
    la t0, handler
    csrw mtvec, t0
    li t0, 5
    li t1, 7
    add t2, t0, t1
    la t3, begin_signature
    sd t2, 0(t3)
    ld t4, 0(t3)
    addi t4, t4, 1
    beq t4, t2, fail
    j taken
    li t2, 99
taken:
    li t1, 3
loop:
    addi t1, t1, -1
    bnez t1, loop
    addi zero, zero, 0
    ecall
    li t1, 12
    bne t2, t1, fail
    sd t2, 0(t3)
    fence
    li t0, 1
    la t1, tohost
    sw t0, 0(t1)
1:  j 1b
fail:
    li t2, 99
    sd t2, 0(t3)
    j 1b
.balign 4
handler:
    csrr t5, mepc
    addi t5, t5, 4
    csrw mepc, t5
    mret

.section .tohost,"aw",@progbits
.balign 8
.globl tohost, fromhost
tohost: .dword 0
fromhost: .dword 0
.section .data
.balign 8
.globl begin_signature, end_signature
begin_signature: .dword 0
end_signature:
.globl sig_end_canary
sig_end_canary: .dword 0
