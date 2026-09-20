#include "selfcheck.h"
.section .text.init
.option norvc
.globl rvtest_entry_point
rvtest_entry_point:
    la t0, trap_handler
    csrw mtvec, t0
    
    // Set up PMP addresses
    la t0, test_buf
    
    // PMP0: test_buf + 4
    addi t1, t0, 4
    srli t1, t1, 2
    csrw pmpaddr0, t1
    
    // PMP1: test_buf + 16
    addi t1, t0, 16
    srli t1, t1, 2
    csrw pmpaddr1, t1
    
    // PMP2: max
    li t1, -1
    csrw pmpaddr2, t1
    
    // Write pmpcfg0
    li t1, 0x0F8D0F
    csrw pmpcfg0, t1
    
    fence.i
    
    // Now perform the 8-byte store
    la t0, test_buf
    li t1, 0xDEADBEEF
    sd t1, 0(t0)
    
    // If it doesn't trap, it's a fail because it should have raised an access fault.
    // Wally will fall through. Spike will trap.
    j wg_fail

.balign 4
trap_handler:
    // Expected to get a trap (mcause = 7, Store/AMO Access Fault)
    csrr t1, mcause
    li t2, 7
    bne t1, t2, unexpected_trap
    
    // Expected trap caught
    j wg_pass

unexpected_trap:
    // If trap but wrong cause
    li a0, 2
    li a1, 7      // expected
    mv a2, t1     // actual
    j wg_fail

WG_FINISH

.section .data
.balign 16
test_buf:
    .dword 0
    .dword 0
