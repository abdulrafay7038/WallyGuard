# Missing Quadword Misalignment Fault Detection for amocas.q in Zacas Extension

## Configuration
- ISA: rv64gc_zacas
- ABI: lp64d

## Description
When executing `amocas.q` on an address that is not 16-byte aligned, the RISC-V specification mandates that an address-misaligned or access-fault exception is raised. In Wally's LSU/MMU, the size passed to the MMU is truncated to 2 bits, causing `amocas.q` (encoded with `funct3 = 3'b100`) to be treated as a byte access (`2'b00`). As a result, the unaligned access incorrectly executes without trapping.

## Exact Commands
See `reproducer.sh`.

## Observed Results
Spike properly traps on the unaligned memory accesses. Wally DUT executes them without trapping, hitting a failure sequence that triggers a Watch Dog Time Out (exit code 134).

## Expected Results
Wally DUT should trap to the exception handler just like Spike on unaligned quadword atomic operations.
