.section .text.init
.globl _start

_start:

    li t0, 5
    li t1, 7

    add t2, t0, t1

    # Save architectural result
    la t3, begin_signature
    sd t2, 0(t3)

    fence

    # Signal completion
    li t0, 1
    la t1, tohost
    sw t0, 0(t1)

1:
    j 1b


.section .tohost,"aw",@progbits
.align 3

.globl tohost
tohost:
    .dword 0

.globl fromhost
fromhost:
    .dword 0


.section .data
.align 3

.globl begin_signature
begin_signature:
    .dword 0

.globl end_signature
end_signature:

.globl sig_end_canary
sig_end_canary:
    .dword 0