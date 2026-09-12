.section .text
.globl rvtest_entry_point
.type rvtest_entry_point, @function
rvtest_entry_point:
_start:
  la t0, trap_handler
  csrw mtvec, t0
  
  li t0, 0x80010000
  li t1, 0x20004401
  sd t1, 16(t0)
  
  li t0, 0x80011000
  li t1, 0x200000CF
  sd t1, 0(t0)
  
  li t1, 0x2008000B # U=0, A=0
  sd t1, 8(t0)

  li t0, 0x80200000
  li t1, 0x00028067
  sw t1, 0(t0)

  fence.i

  li t0, 1
  slli t0, t0, 61
  csrs 0x30a, t0

  li t0, 8
  slli t0, t0, 60
  li t1, 0x80010
  or t0, t0, t1
  csrw satp, t0
  sfence.vma

  li t0, 0x1800
  csrc mstatus, t0
  li t0, 0x0800
  csrs mstatus, t0
  
  li t0, 0x80200000
  csrw mepc, t0

  la t0, check_pte_a
  mret

check_pte_a:
  j fail

.align 2
trap_handler:
  j pass

pass:
  la t0, tohost
  li t1, 1
  sd t1, 0(t0)
  sw t1, 0(t0)
1: j 1b

fail:
  csrw mtvec, zero
  jr zero

.section .data
.align 6
.globl tohost
tohost:   .dword 0
.globl fromhost
fromhost: .dword 0
