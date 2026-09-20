.section .text.init
.globl _start
_start:
  la t0, trap_handler
  csrw mtvec, t0
  li t0, -1
  csrw pmpaddr0, t0
  li t0, 0x1F
  csrw pmpcfg0, t0
  
  # mstateen0[62] = 0 (ENVCFG)
  li t0, 1
  slli t0, t0, 62
  csrc 0x30c, t0
  
  # menvcfg.CBZE = 1 (bit 7)
  li t0, 0x80
  csrs 0x30a, t0
  
  # switch to S-mode
  li t0, 0x800
  csrs mstatus, t0
  la t0, smode_entry
  csrw mepc, t0
  mret

smode_entry:
  # This should trap!
  csrr t1, 0x10a
  
  # fail if we get here
  li t0, 3
  la t1, tohost
  sd t0, 0(t1)
1: j 1b

.balign 4
trap_handler:
  csrr t0, mcause
  li t1, 2
  bne t0, t1, fail
  
  # pass
  li t0, 1
  la t1, tohost
  sd t0, 0(t1)
1: j 1b

fail:
  li t0, 3
  la t1, tohost
  sd t0, 0(t1)
1: j 1b

.section .data
.balign 64
scratch: .dword 0,0,0,0,0,0,0,0

.section .tohost, "aw", @progbits
.balign 64
.globl tohost
.globl fromhost
tohost: .dword 0
fromhost: .dword 0
