.option norvc
.section .text
.globl _start
_start:
    # Setup trap handler
    la t0, trap_handler
    csrw mtvec, t0

    # Test reading mcounteren (0x306)
    li gp, 1
    csrr t1, 0x306

    # If we get here, no trap occurred. Failure!
    li a0, 1
    j fail

trap_handler:
    # If we trapped, check cause
    csrr t5, mcause
    li t6, 2 # Illegal instruction
    bne t5, t6, fail_wrong_cause

    # Success!
    li a0, 0
    j success

fail_wrong_cause:
    li a0, 2
    j fail

success:
    li a0, 1
    la t0, tohost
    sd a0, 0(t0)
1:  j 1b

fail:
    slli a0, a0, 1
    ori a0, a0, 1
    la t0, tohost
    sd a0, 0(t0)
    # trigger watchdog
    csrw mtvec, x0
    jr x0

.section .data
.align 6
.global tohost
tohost: .dword 0
.global fromhost
fromhost: .dword 0
