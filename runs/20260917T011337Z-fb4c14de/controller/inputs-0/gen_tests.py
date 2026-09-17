import os

test_dir = "/home/rafay/miniconda3/WallyGuard2/runs/20260917T011337Z-fb4c14de"
os.makedirs(f"{test_dir}/tests", exist_ok=True)

asm_template = """
.section .text.init
.globl _start
_start:
    # Setup PMP
    li t0, -1
    csrw pmpaddr0, t0
    li t0, 0x1f
    csrw pmpcfg0, t0

    # Delegate traps to M-mode
    csrw medeleg, zero
    csrw mideleg, zero

    # Set up mtvec to failure handler
    la t0, fail
    csrw mtvec, t0

    # Setup page tables
    la t0, root_pt
    
    # 1. Identity map 0x80000000 to 0xBFFFFFFF (1GB) at VPN2=2
    li t1, 0x200000CF
    sd t1, 16(t0) # index 2 * 8 = 16

    # 2. Map 0xC0000000 (1GB) at VPN2=3 to next level
    la t1, level1_pt
    srli t1, t1, 12
    slli t1, t1, 10
    ori t1, t1, 1
    sd t1, 24(t0) # index 3 * 8 = 24

    # Level 1 page table at 0x80011000
    la t0, level1_pt
    # Map 0xC0000000 (2MB) at VPN1=0 to next level
    la t1, level0_pt
    srli t1, t1, 12
    slli t1, t1, 10
    ori t1, t1, 1
    sd t1, 0(t0)

    # Level 0 page table at 0x80012000
    la t0, level0_pt
    # Map 0xC0001000 (4KB) at VPN0=1 to code_page_a
    la t1, code_page_a
    srli t1, t1, 12
    slli t1, t1, 10
    ori t1, t1, {FLAGS}
    sd t1, 8(t0) # index 1 * 8 = 8

    # Set satp
    la t0, root_pt
    srli t0, t0, 12
    li t1, 1
    slli t1, t1, 44
    or t0, t0, t1
    li t1, 8
    slli t1, t1, 60
    or t0, t0, t1

    csrw satp, t0
    sfence.vma

    # Set up stvec
    la t0, fail
    csrw stvec, t0

    # Set up sret
    la t0, smode_entry
    csrw mepc, t0

    # Set mstatus.MPP = 1 (S-mode), MPIE = 0
    li t0, 0x00000800
    csrw mstatus, t0

    sret

smode_entry:
    # We are in S-mode. Virtual memory is enabled.
    # Execute 0xC0001000
    li s1, 0xC0001000
    jalr ra, 0(s1)

    # Check a5 == 0x11
    li t0, 0x11
    bne a5, t0, fail

    # Update Level 0 PTE for 0xC0001000 to point to code_page_b
    la t0, level0_pt
    la t1, code_page_b
    srli t1, t1, 12
    slli t1, t1, 10
    ori t1, t1, {FLAGS}
    sd t1, 8(t0)

    # Fence instruction
    {FENCE_INST}

    # Execute 0xC0001000 again
    jalr ra, 0(s1)

    # Check a5 == 0x22
    li t0, 0x22
    bne a5, t0, fail

pass:
    la t0, tohost
    li t1, 1
    sw t1, 0(t0)
    .option norvc
1:  j 1b

fail:
    csrw mtvec, x0
    jr x0

    .align 12
code_page_a:
    li a5, 0x11
    ret

    .align 12
code_page_b:
    li a5, 0x22
    ret

.align 12
root_pt:
    .fill 4096, 1, 0
level1_pt:
    .fill 4096, 1, 0
level0_pt:
    .fill 4096, 1, 0

.data
.align 6
.global tohost
tohost: .dword 0
.global fromhost
fromhost: .dword 0
"""

tests = [
    {
        "name": "test_sfence_inval_ir_global.S",
        "flags": "0xEB",
        "fence": ".word 0x18100073 # sfence.inval.ir"
    },
    {
        "name": "test_sfence_vma_control.S",
        "flags": "0xEB",
        "fence": "sfence.vma x0, x0"
    },
    {
        "name": "test_sfence_inval_ir_nonglobal.S",
        "flags": "0xCB",
        "fence": ".word 0x18100073 # sfence.inval.ir"
    }
]

for t in tests:
    content = asm_template.replace("{FLAGS}", t["flags"]).replace("{FENCE_INST}", t["fence"])
    with open(f"{test_dir}/tests/{t['name']}", "w") as f:
        f.write(content)

