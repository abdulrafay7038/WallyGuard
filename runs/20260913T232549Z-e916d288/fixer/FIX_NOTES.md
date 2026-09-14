# Fix Notes: Incorrect cbo.inval with CBIE=01 Decode

## Root Cause
In `src/ieu/controller.sv` lines 392-393, the `CBIE == 2'b01` condition (which per the
RISC-V Zicbom specification mandates that `cbo.inval` perform a flush operation, identical
to `cbo.flush`) was erroneously OR'd into `CMOpD[1]` instead of `CMOpD[2]`.

The Zicbom spec defines:
- `cbo.inval` (funct12 = 0x000) 
- `cbo.clean` (funct12 = 0x001)
- `cbo.flush` (funct12 = 0x002)

In the RTL:
- `CMOpD[0]` = funct12 0x000 (cbo.inval)
- `CMOpD[1]` = funct12 0x001 (cbo.clean) ← CBIE=01 was wrongly here
- `CMOpD[2]` = funct12 0x002 (cbo.flush)

Since `cachefsm.sv` only asserts `ClearValid` for `CMOpM[0]` (cbo.inval with CBIE=11)
and `CMOpM[2]` (cbo.flush), `cbo.inval` with CBIE=01 mapped to `CMOpM[1]` (clean) never
invalidated the cache line, performing only a clean operation.

## Minimal Fix
Moved the `((InstrD[31:20] == 12'd0) & (ENVCFG_CBE[1:0] == 2'b01))` from `CMOpD[1]`
to `CMOpD[2]`, so that `cbo.inval` with `CBIE=01` correctly triggers the flush path
(`CMOpM[2]`), which asserts `ClearValid` and invalidates the cache line.

### Changed file: `src/ieu/controller.sv`
```diff
-      CMOpD[2] = (InstrD[31:20] == 12'd2); // cbo.clean
-      CMOpD[1] = (InstrD[31:20] == 12'd1) | ((InstrD[31:20] == 12'd0) & (ENVCFG_CBE[1:0] == 2'b01)); // cbo.flush
+      CMOpD[2] = (InstrD[31:20] == 12'd2) | ((InstrD[31:20] == 12'd0) & (ENVCFG_CBE[1:0] == 2'b01)); // cbo.flush
+      CMOpD[1] = (InstrD[31:20] == 12'd1); // cbo.clean
```

## Verification
- **Control test** (`test_cbo_flush_control.elf`): exit code 0 ✓ (positive control)
- **Bug reproducer** (`test_cbo_cbie.elf`): exit code 0 ✓ (was 134 before fix)
- Build: `make -C sim/verilator WALLYCONF=rv64gc TESTBENCH=testbench` succeeds
