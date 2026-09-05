THis REpo is for the CHia Hackathon Project.

Commands:

```bash
make help                         # Show available commands
make cluster                      # Start; on failure tear down and retry once
make down                         # Tear down wally_cluster.yaml
make run                          # Submit the continuous loop through CHIA
make run RUN_ARGS="--once"         # Submit one sweep of all tests/*.elf
```

Cluster commands use the environment variables listed below and automatically
detect `HEAD_IP` when unset. They skip CHIA confirmation prompts. A failed
teardown stops the startup retry. `make run` uses the existing dashboard at
`http://127.0.0.1:8265`; override with `CHIA_ADDRESS=http://<head-ip>:8265`.
The CLI defaults to `~/miniconda3/envs/chia_env/bin` on PATH; override
`CHIA_ENV_BIN` for another installation. Logs stream while the submitted job
runs. Tests are rebuilt separately with `make -C tests`.

Every time:

export HEAD_IP=$(hostname -I | awk '{print $1}')
export TS_AUTHKEY=tskey-auth-k2Lg6FtRUu11CNTRL-jJ5mCpoiNLbrGKjZdvfGLbxCd2nABAsf
export GCP_PROJECT=project-0df87a12-e649-434b-84a
export GCP_PRIVATE_KEY_PATH=~/.ssh/chia_gcp


First time:

pip install google-cloud-compute # In a python Venv
# Can also be installed with system package manager
                      
gcloud auth application-default login                    
gcloud auth application-default set-quota-project <project>  
gcloud services enable compute.googleapis.com --project <project>

ssh-keygen -t ed25519 -f ~/.ssh/chia_gcp -N ""
ssh-add ~/.ssh/chia_gcp
