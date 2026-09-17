# Reproducer for sfence.inval.ir Global Invalidation Bug

## Configuration
- ISA: rv64gc_svinval
- Configuration: rv64gc (SVINVAL_SUPPORTED=1, VIRTMEM_SUPPORTED=1, SV39/48/57_SUPPORTED=1)

## Observed vs Expected Results
- **Expected:** `sfence.inval.ir` synchronizes all subsequent instruction fetches with preceding page table modifications, invalidating the global ITLB entry. Fetch should miss in ITLB and execute the updated code, exiting cleanly.
- **Observed:** `sfence.inval.ir` (since it has bit 20 as 1) is incorrectly filtered by `sfencevmaAllM = sfencevmaM & ~|InstrM[24:20]`, resulting in `TLBFlushAll = 0`. Global PTEs are not flushed, causing the core to hit the stale ITLB entry and fetch old code. The unexpected return value triggers a jump to zero, which hits the Verilator watchdog abort.

## Exact Commands
```bash
./reproducer.sh
```
