# Reproducer for Wally cbo.inval Decode Bug under CBIE=01

## Issue
According to the RISC-V Zicbom specification, when `menvcfg.CBIE == 2'b01`, executing `cbo.inval` in S-mode or U-mode must perform a flush operation (the same as `cbo.flush`), which writes back dirty data and invalidates the cache line in all levels of the cache hierarchy.
In Wally, due to a semantic assignment swap in `src/ieu/controller.sv` lines 391-395, the condition `CBIE == 2'b01` causes `cbo.inval` to be decoded into `CMOpD[1]` (`cbo.clean` internal op) instead of `CMOpD[2]` (`cbo.flush` internal op). 
`src/cache/cachefsm.sv` only asserts `ClearValid` for `CMOpM[0]` and `CMOpM[2]`. As a result, the target cache line is never invalidated when executing `cbo.inval` under `CBIE=01`.

## Files
- `tests/test_cbo_cbie.S`: Test program that sets `menvcfg=0xD0` (CBIE=01), warms up the D-cache, executes `cbo.inval`, and verifies that the D-cache miss counter increments on a subsequent load. Fails if the line remains valid (diff==0).
- `tests/test_cbo_flush_control.S`: Positive control test that uses `cbo.flush` directly. Should pass unconditionally because Wally decodes `cbo.flush` into `CMOpD[2]`, correctly invalidating the line.
- `reproducer.sh`: Script to compile the tests, rebuild the Verilator testbench, and run both tests. Exits 1 when the bug is successfully reproduced on `test_cbo_cbie.S`.
