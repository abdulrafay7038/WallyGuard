# Reproducer for mstatus.MXR and sstatus.MXR Bug

## Configuration
- Target: `nodcache_rv64gc` (`P.S_SUPPORTED=1`, `P.VIRTMEM_SUPPORTED=0`)
- Positive Control: `rv64gc` (`P.S_SUPPORTED=1`, `P.VIRTMEM_SUPPORTED=1`)

## ISA / ABI
- ISA: `rv64gc`
- ABI: `lp64d`

## Exact Commands
```bash
./reproducer.sh
```

## Results
- **Observed:** `test_mxr_novm.elf` successfully writes and reads back 1 from MXR in `mstatus` when virtual memory is unsupported, trapping to address 0 and resulting in a Verilator watchdog abort (134). `test_sum_novm.elf` correctly traps when attempting to write `SUM` bit. `test_mxr_vm.elf` cleanly passes on `rv64gc`.
- **Expected:** MXR should be read-only 0 when virtual memory is unsupported, thus `test_mxr_novm.elf` should cleanly exit 0 by reading 0 back from the bit.
