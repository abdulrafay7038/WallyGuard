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
  la t0, test_data
  li x1, 0x12345678
  # rs2 is x0 (pair x1:x0, so high half is x1, low half is x0)
  # rd is x2 (pair x3:x2)
  li x2, 0x11111111
  li x3, 0x22222222
  amocas.q x2, x0, (t0)

  # Check what was written to test_data
  # test_data[0..7] should be x0 (0)
  # test_data[8..15] should be x1 (0x12345678)
  ld t1, 0(t0)
  ld t2, 8(t0)

  bne t1, x0, fail
  li t3, 0x12345678
  bne t2, t3, fail

pass:
  la t0, tohost
  li t1, 1
  sd t1, 0(t0)
1: j 1b

fail:
  la t0, tohost
  li t1, 3
  sd t1, 0(t0)
1: j 1b

  .data
  .align 4
test_data:
  .dword 0x11111111
  .dword 0x22222222
