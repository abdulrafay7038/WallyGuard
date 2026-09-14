# Reproducer: mstatus.MXR and sstatus.MXR are Incorrectly Writable When Address Translation is Disabled

## Bug Description
In Wally's CSR unit (`src/privileged/csrsr.sv`), the `mstatus.MXR` (Make eXecutable Readable, bit 19) and `sstatus.MXR` fields are left writable in configurations where virtual memory is disabled (e.g., `nodcache_rv64gc` with `P.VIRTMEM_SUPPORTED == 0`). According to the RISC-V Privileged Architecture Specification (v20211203), Sections 3.1.6.3 and 4.1.1, the MXR bit must be read-only 0 when address translation is not supported.

While the adjacent `SUM` bit correctly checks `P.VIRTMEM_SUPPORTED`, `MXR` only checks `P.S_SUPPORTED`, allowing it to be improperly set and read back as 1.

## Environment & Configuration
- **Configurations Tested:**
  - `nodcache_rv64gc` (Virtual Memory Disabled): `P.S_SUPPORTED = 1`, `P.VIRTMEM_SUPPORTED = 0`
  - `rv64gc` (Virtual Memory Enabled): `P.S_SUPPORTED = 1`, `P.VIRTMEM_SUPPORTED = 1`
- **ISA/ABI:** `rv64gc` / `lp64d`
- **Compiler:** `riscv64-unknown-elf-gcc`
- **Simulation:** Verilator testbench (`Vtestbench`)

## Test Design
1. `test_mxr_novm.S`: Attempts to write 1 to `mstatus.MXR` and `sstatus.MXR` in M-mode under `nodcache_rv64gc`. Expects the bits to remain 0. If they change to 1, jumps to an unhandled exception to trigger Verilator's watchdog abort (exit 134).
2. `test_sum_novm.S` (Negative Control): Attempts to write 1 to `mstatus.SUM` and `sstatus.SUM`. Verifies they correctly remain 0 on `nodcache_rv64gc`.
3. `test_mxr_vm.S` (Positive Control): Attempts to write 1 to `MXR` on `rv64gc`. Verifies the bit successfully sets to 1 since virtual memory is enabled.

## Exact Commands to Reproduce
Run the provided `reproducer.sh` script from the `$test_dir`:
```bash
./reproducer.sh
```

### Script Execution Steps:
1. Builds `nodcache_rv64gc` and `rv64gc` Verilator models.
2. Compiles `test_mxr_novm.S`, `test_sum_novm.S`, and `test_mxr_vm.S`.
3. Runs the compiled binaries using the testbench.

## Results
- **Expected:** `test_mxr_novm.elf` successfully exits with 0 because MXR is read-only 0.
- **Observed:** `test_mxr_novm.elf` triggers an abort (exit code 134) because writing to MXR succeeds and reads back as 1, violating the specification. Control tests pass successfully.
