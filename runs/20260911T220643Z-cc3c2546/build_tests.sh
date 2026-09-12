#!/bin/bash
set -e

mkdir -p tester_llm/20260911T220643Z-cc3c2546/tests

cat << 'INEOF' > tester_llm/20260911T220643Z-cc3c2546/tests/test_a.S
# Test A: cbo.zero on Read-Only page with ADUE=1
.section .text.init
.globl _start
_start:
    # Setup PMP
    li t0, -1
    csrw pmpaddr0, t0
    li t0, 0x1F
    csrw pmpcfg0, t0

    # Setup Page Tables
    li t0, 0x80010000 # Root PT
    li t1, 0x80011000 # Level 1 PT
    
    # Root PT entry
    srli t2, t1, 2
    ori t2, t2, 1
    sd t2, 16(t0)
    
    # Level 1 PT entry for 0x80000000
    li t2, 0x200000CF
    sd t2, 0(t1)
    
    # Level 1 PT entry for 0x80200000 (Read-Only)
    li t2, 0x20080003
    sd t2, 8(t1)

    # Enable ADUE and CBZE
    li t0, 1
    slli t0, t0, 61
    ori t0, t0, 0x80
    csrs 0x30a, t0 # menvcfg

    # Setup satp (Sv39, PPN=0x80010)
    li t0, 1
    slli t0, t0, 63
    li t1, 0x80010
    or t0, t0, t1
    csrw satp, t0
    sfence.vma

    # Setup trap handler
    la t0, trap_handler
    csrw mtvec, t0

    # Drop to S-mode
    li t0, 0x800 # MPP=1 (S-mode)
    csrs mstatus, t0
    la t0, s_mode_code
    csrw mepc, t0
    mret

s_mode_code:
    li a1, 0x80200000
    cbo.zero 0(a1)
    j fail

.align 2
trap_handler:
    csrr t0, mcause
    li t1, 15
    bne t0, t1, fail
    
    # Check PTE
    li t0, 0x80011008
    ld t1, 0(t0)
    li t2, 0xC0
    and t1, t1, t2
    bnez t1, fail # PTE.A or PTE.D was set!
    
    j pass

pass:
    la t0, tohost
    li t1, 1
    sd t1, 0(t0)
    sw t1, 0(t0)
1:  j 1b

fail:
    csrw mtvec, zero
    jr zero

.section .data
.align 6
.globl tohost
tohost: .dword 0
.globl fromhost
fromhost: .dword 0
INEOF

cat << 'INEOF' > tester_llm/20260911T220643Z-cc3c2546/tests/test_b.S
# Test B: cbo.zero on Writable page with ADUE=1
.section .text.init
.globl _start
_start:
    li t0, -1
    csrw pmpaddr0, t0
    li t0, 0x1F
    csrw pmpcfg0, t0

    li t0, 0x80010000 # Root PT
    li t1, 0x80011000 # Level 1 PT
    
    srli t2, t1, 2
    ori t2, t2, 1
    sd t2, 16(t0)
    
    li t2, 0x200000CF
    sd t2, 0(t1)
    
    # Writable page (V=1, R=1, W=1)
    li t2, 0x20080007
    sd t2, 8(t1)

    li t0, 1
    slli t0, t0, 61
    ori t0, t0, 0x80
    csrs 0x30a, t0 # menvcfg

    li t0, 1
    slli t0, t0, 63
    li t1, 0x80010
    or t0, t0, t1
    csrw satp, t0
    sfence.vma

    la t0, trap_handler
    csrw mtvec, t0

    li t0, 0x800 # MPP=1 (S-mode)
    csrs mstatus, t0
    la t0, s_mode_code
    csrw mepc, t0
    mret

s_mode_code:
    li a1, 0x80200000
    cbo.zero 0(a1)
    
    # Check PTE
    li t0, 0x80011008
    ld t1, 0(t0)
    li t2, 0xC0
    and t1, t1, t2
    li t3, 0xC0
    bne t1, t3, fail # A and D must be set
    
    j pass

.align 2
trap_handler:
    j fail

pass:
    la t0, tohost
    li t1, 1
    sd t1, 0(t0)
    sw t1, 0(t0)
1:  j 1b

fail:
    csrw mtvec, zero
    jr zero

.section .data
.align 6
.globl tohost
tohost: .dword 0
.globl fromhost
fromhost: .dword 0
INEOF

cat << 'INEOF' > tester_llm/20260911T220643Z-cc3c2546/tests/test_c.S
# Test C: normal store on Read-Only page with ADUE=1
.section .text.init
.globl _start
_start:
    li t0, -1
    csrw pmpaddr0, t0
    li t0, 0x1F
    csrw pmpcfg0, t0

    li t0, 0x80010000 # Root PT
    li t1, 0x80011000 # Level 1 PT
    
    srli t2, t1, 2
    ori t2, t2, 1
    sd t2, 16(t0)
    
    li t2, 0x200000CF
    sd t2, 0(t1)
    
    # Read-Only page
    li t2, 0x20080003
    sd t2, 8(t1)

    li t0, 1
    slli t0, t0, 61
    ori t0, t0, 0x80
    csrs 0x30a, t0 # menvcfg

    li t0, 1
    slli t0, t0, 63
    li t1, 0x80010
    or t0, t0, t1
    csrw satp, t0
    sfence.vma

    la t0, trap_handler
    csrw mtvec, t0

    li t0, 0x800 # MPP=1 (S-mode)
    csrs mstatus, t0
    la t0, s_mode_code
    csrw mepc, t0
    mret

s_mode_code:
    li a1, 0x80200000
    sd x0, 0(a1)
    j fail

.align 2
trap_handler:
    csrr t0, mcause
    li t1, 15
    bne t0, t1, fail
    
    # Check PTE
    li t0, 0x80011008
    ld t1, 0(t0)
    li t2, 0xC0
    and t1, t1, t2
    bnez t1, fail # PTE.A or PTE.D was set!
    
    j pass

pass:
    la t0, tohost
    li t1, 1
    sd t1, 0(t0)
    sw t1, 0(t0)
1:  j 1b

fail:
    csrw mtvec, zero
    jr zero

.section .data
.align 6
.globl tohost
tohost: .dword 0
.globl fromhost
fromhost: .dword 0
INEOF

cat << 'INEOF' > tester_llm/20260911T220643Z-cc3c2546/tests/test_d.S
# Test D: cbo.zero on Read-Only page with ADUE=0
.section .text.init
.globl _start
_start:
    li t0, -1
    csrw pmpaddr0, t0
    li t0, 0x1F
    csrw pmpcfg0, t0

    li t0, 0x80010000 # Root PT
    li t1, 0x80011000 # Level 1 PT
    
    srli t2, t1, 2
    ori t2, t2, 1
    sd t2, 16(t0)
    
    li t2, 0x200000CF
    sd t2, 0(t1)
    
    # Read-Only page
    li t2, 0x20080003
    sd t2, 8(t1)

    # ADUE=0, CBZE=1
    li t0, 0x80
    csrs 0x30a, t0 # menvcfg

    li t0, 1
    slli t0, t0, 63
    li t1, 0x80010
    or t0, t0, t1
    csrw satp, t0
    sfence.vma

    la t0, trap_handler
    csrw mtvec, t0

    li t0, 0x800 # MPP=1 (S-mode)
    csrs mstatus, t0
    la t0, s_mode_code
    csrw mepc, t0
    mret

s_mode_code:
    li a1, 0x80200000
    cbo.zero 0(a1)
    j fail

.align 2
trap_handler:
    csrr t0, mcause
    li t1, 15
    bne t0, t1, fail
    
    # Check PTE
    li t0, 0x80011008
    ld t1, 0(t0)
    li t2, 0xC0
    and t1, t1, t2
    bnez t1, fail # PTE.A or PTE.D was set!
    
    j pass

pass:
    la t0, tohost
    li t1, 1
    sd t1, 0(t0)
    sw t1, 0(t0)
1:  j 1b

fail:
    csrw mtvec, zero
    jr zero

.section .data
.align 6
.globl tohost
tohost: .dword 0
.globl fromhost
fromhost: .dword 0
INEOF

