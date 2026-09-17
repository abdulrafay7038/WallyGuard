  .section .text.init
  .globl rvtest_entry_point
rvtest_entry_point:
  j _start

  .section .tohost
  .align 6
  .globl tohost
tohost: .dword 0
  .align 6
  .globl fromhost
fromhost: .dword 0

  .text
  .globl _start
_start:
  la a0, test_val
  li a2, 42
  li a3, 100
  li a4, 99
  li a5, 999

  # amocas.q a2, a4, (a0)
  # Memory has {42, 777}. Compare is {42, 100} -> mismatch!
  # amocas.q loads {42, 777} into a2:a3.
  # So a3 becomes 777!
  # Immediately read a3 into a6:
  amocas.q a2, a4, (a0)
  addi a6, a3, 0

  # a6 should be 777!
  li t1, 777
  bne a6, t1, fail

pass:
  la t0, tohost
  li t1, 1
  sd t1, 0(t0)
1: j 1b

fail:
  csrw mtvec, x0
  jr x0

  .data
  .align 4
test_val:
  .dword 42
  .dword 777
