
.section .text.init
.globl rvtest_entry_point
rvtest_entry_point:
    li t0, 0x00006000
    csrs mstatus, t0
    fld f2, val_2p31, t0
    fcvtmod.w.d a2, f2, rtz

    # Test candidate:
    li t0, 2147483648
    beq a2, t0, pass

fail:
    csrw mtvec, zero
    jr zero

pass:
    .option norvc
1:  j 1b

.section .data
.align 3
val_2p31: .double 2147483648.0

.section .tohost
.align 6
.globl tohost
tohost: .dword 0
.globl fromhost
fromhost: .dword 0
