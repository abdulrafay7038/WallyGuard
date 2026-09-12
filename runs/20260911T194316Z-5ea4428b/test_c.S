.section .text
.globl rvtest_entry_point
.type rvtest_entry_point, @function
rvtest_entry_point:
_start:
  la t0, trap_handler
  csrw mtvec, t0
  
  # Configure PMP
  li t0, 0xF
  csrw pmpcfg0, t0
  li t0, -1
  csrw pmpaddr0, t0

  li t0, 0x80010000
  li t1, 0x20004401
  sd t1, 16(t0)
  
  li t0, 0x80011000
  li t1, 0x200000CF
  sd t1, 0(t0)
  
  # Positive Control 2: S-mode load from User page with SUM=0
  li t1, 0x20080013 # PPN=0x80200, U=1, A=0, R=1, V=1
  sd t1, 8(t0)

  li t0, 0x80200000
  li t1, 0x00028067
  sw t1, 0(t0)

  fence.i

  li t0, 1
  slli t0, t0, 61
  csrs 0x30a, t0 # menvcfg.ADUE = 1

  # sstatus.SUM = 0
  li t0, 1
  slli t0, t0, 18
  csrc mstatus, t0

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
  
  la t0, smode_code
  csrw mepc, t0

  mret

smode_code:
  li t0, 0x80200000
  lw t1, 0(t0) # Should fault with mcause=13
  j fail

.align 2
trap_handler:
  csrr t0, mcause
  li t1, 13
  bne t0, t1, fail # Expected Load Page Fault
  
  li t0, 0x80011008
  ld t1, 0(t0)
  andi t1, t1, 0x40
  bnez t1, fail # PTE.A must be 0
  
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
