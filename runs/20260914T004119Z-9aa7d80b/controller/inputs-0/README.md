# Reproducer for Spurious Illegal Instruction Exception on sfence.vma

## Bug Description
When virtual memory is disabled or unsupported (e.g. `P.VIRTMEM_SUPPORTED == 0` in `nodcache_rv64gc`), executing `sfence.vma` raises a spurious Illegal Instruction exception (Cause 2) on Wally. This violates the RISC-V Privileged Architecture (v20211203, Section 4.2.1), which mandates that `sfence.vma` executes as a no-op when address translation is not supported (i.e. Bare mode). In Wally, `src/privileged/privdec.sv` improperly gates `sfence.vma` execution with `P.VIRTMEM_SUPPORTED`.

## Test Environment
- **Configuration:** `nodcache_rv64gc`
- **Simulation Executable:** `sim/verilator/wkdir/nodcache_rv64gc_testbench/Vtestbench`
- **Independent Oracle:** Spike (`/opt/riscv/bin/spike --isa=rv64gc`)

## Running the Reproducer
Execute the following script from the root of the test directory:
```bash
./reproducer.sh
```

## Expected Behavior (Spike)
Spike successfully executes the assembly test (evaluating `sfence.vma` in both M-mode and S-mode without exception when TVM=0, and correctly trapping with TVM=1 or in U-mode) and writes 1 to the `tohost` symbol. Spike exits with code 0.

## Observed Behavior (Wally)
Wally incorrectly raises an Illegal Instruction exception on `sfence.vma` during the primary test. This unexpected trap vectors to a failure handler (`csrw mtvec, x0; jr x0`) causing a continuous fetch from address 0x0. The Verilator testbench watchdog catches this and aborts with exit code 134.
