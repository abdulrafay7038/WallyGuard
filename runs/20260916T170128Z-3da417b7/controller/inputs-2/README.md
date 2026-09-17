# MHPMEvent Address Decoding Bug Reproducer

This directory contains targeted assembly tests to expose an off-by-index address decoding defect in `mhpmevent` CSR writes in Wally.

- `test_mhpmevent_write.S`: Writes 0x55 to `mhpmevent3` (CSR 0x323) and expects to read back 0x55. In the buggy DUT, it reads 0 and fails.
- `test_mhpmevent_cross.S`: Writes 0xAA to `mhpmevent6` (CSR 0x326) and reads `mhpmevent3` (CSR 0x323). In the buggy DUT, it reads 0xAA (indicating cross-register corruption) and fails.
- `test_positive_control.S`: Control test to verify general execution pipeline.

Bug confirmation triggers a Watch Dog Time Out (or illegal instruction fault) on Wally (exit 1), but passes cleanly on Spike (exit 0).
