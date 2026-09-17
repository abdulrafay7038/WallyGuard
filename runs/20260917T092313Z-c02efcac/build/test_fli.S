.section .text.init
.globl rvtest_entry_point
rvtest_entry_point:
    # enable FP
    li t0, 0x00006000
    csrs mstatus, t0
    .insn i 0x53, 0x0, f0, x29, 0x752 # fli.h f0, 29: funct7=0111010 (0x3a), rs1=29, funct3=000
    .insn i 0x53, 0x0, f1, x28, 0x752 # fli.h f1, 28: funct7=0111010 (0x3a), rs1=28, funct3=000
    .insn i 0x53, 0x0, f2, x30, 0x752 # fli.h f2, 30: funct7=0111010 (0x3a), rs1=30, funct3=000
    fmv.x.w t1, f0
    fmv.x.w t2, f1
    fmv.x.w t3, f2
    .option norvc
1:  j 1b

.section .tohost
.align 6
.globl tohost
tohost: .dword 0
.globl fromhost
fromhost: .dword 0
