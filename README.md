This Repo is for the Chia Hackathon Project.

Commands:

The distributed loop first runs every `tests/*.elf` once, then starts remote
RISC-V-DV generation and local ELF materialization. `--num-tests N` counts only
the generated tests. Trace mismatches are automatically copied with their assembly
and original ELF into `mismatch_results/session_<timestamp>/`, with `index.csv`
and `seeds.txt`. Original run evidence remains in place.
See [generation and handoff documentation](tools/GENERATION.md)
for preflight, ten-test campaigns, and worker requirements. Use
`--existing-tests` for the original `tests/*.elf` sweep.

```bash
make help                         # Show available commands
make cluster                      # Start; on failure tear down and retry once
make down                         # Tear down wally_cluster.yaml
make run                          # Submit the loop through CHIA
make run RUN_ARGS="--num-tests 10 --seed 500 --color always"
```

## Exports
```bash
export HEAD_IP=$(hostname -I | awk '{print $1}')
export TS_AUTHKEY="your-tailscale-auth-key"
export GCP_PROJECT=project-0df87a12-e649-434b-84a
export GCP_PRIVATE_KEY_PATH=~/.ssh/chia_gcp
export GCP_PUBLIC_KEY_PATH=~/.ssh/chia_gcp.pub
```

## Gcloud Setup
```bash
pip install google-cloud-compute # In a python Venv
                      
gcloud auth application-default login                    
gcloud auth application-default set-quota-project <project>  
gcloud services enable compute.googleapis.com --project <project>

ssh-keygen -t ed25519 -f ~/.ssh/chia_gcp -N ""
ssh-add ~/.ssh/chia_gcp
```
