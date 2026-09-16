# Wally ZACAS Data Hazard Reproducer

## Configuration
- Target Configuration: `WALLYCONF=rv64gc` (`config/rv64gc/config.vh`), where `ZACAS_SUPPORTED = 1`, `ZAAMO_SUPPORTED = 1`, and `XLEN = 64`.
- ISA/ABI: `-march=rv64gc_zacas -mabi=lp64d`
- Linker: `tests/riscof/spike/env/link.ld`

## Overview
This directory contains a reproducible test case for a data hazard bug in Wally's Zacas implementation. The `amocas` instruction does not properly hazard check or forward uncommitted register values for its `rd` operand.

## Tests
- `test_zacas_control.S`: Initialized `a0=42`, updates memory with `amocas.d` using 3 `nop`s to allow `a0` to commit. Passes on Spike and Wally DUT.
- `test_zacas_hazard.S`: Same as above, but with zero `nop`s. Passes on Spike. Fails on Wally DUT because `amocas.d` evaluates with the stale value of `a0`.

## Expected Results
`amocas.d` should stall and wait for `a0` to be updated, swapping memory to 99 and writing 42 to `a0`.

## Observed Results
The DUT evaluates the `amocas.d` using the stale uncommitted value of `a0=0`. The condition `(0 == 42)` fails, so memory is unmodified. The subsequent test for `a3=99` in memory fails, trapping the system and inducing a Watchdog Timeout.

## Exact Commands
Execute the reproducer directly:
```bash
/home/rafay/miniconda3/WallyGuard2/runs/20260916T152458Z-7ae13216/reproducer.sh
```
