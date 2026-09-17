# Wally Zacas rd+1 Data Hazard Bug Reproducer

## Description
This directory contains a deterministic reproducer for a data hazard detection and forwarding bug in Wally's Zacas implementation. Specifically, for the `amocas.q` and `amocas.d` instructions, the pipeline hazard detection logic fails to track `rd+1` (the high half of the destination register pair). If an instruction immediately consumes `rd+1` after `amocas`, the pipeline does not stall, no forwarding occurs, and the consuming instruction reads stale data from the register file.

## Expected Behavior (Spike Oracle)
The Spike simulator correctly resolves the hazard and passes the test.

## Observed Behavior (Wally DUT)
The Wally DUT executes with the stale `rd+1` value, computing an incorrect result, branching to the failure handler (`csrw mtvec, x0; jr x0`), and triggering a Watch Dog Time Out / testbench assertion (exit code 134).

## Files
- `tests/test_zacas_rd1_hazard.S`: Tests back-to-back dependency on `rd+1` (fails on DUT).
- `tests/test_zacas_rd1_control.S`: Same test but with 3 NOPs to flush the pipeline (passes on DUT).
- `tests/test_zacas_rd0_hazard.S`: Tests back-to-back dependency on `rd` (passes on DUT, confirming the bug is isolated to `rd+1`).

## Execution
Run `./reproducer.sh` to compile, test against the Spike oracle, and reproduce the failure on the Wally DUT. The script exits with 1 on a confirmed mismatch.
