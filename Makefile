SHELL := /bin/bash
.SHELLFLAGS := -eu -o pipefail -c
.DEFAULT_GOAL := help
.NOTPARALLEL:

PROJECT_DIR := $(patsubst %/,%,$(dir $(abspath $(lastword $(MAKEFILE_LIST)))))
CHIA_ENV_BIN ?= $(HOME)/miniconda3/envs/chia_env/bin
export PATH := $(CHIA_ENV_BIN):$(PATH)
CHIA ?= chia
CLUSTER_CONFIG ?= $(PROJECT_DIR)/wally_cluster.yaml
CHIA_ADDRESS ?= http://127.0.0.1:8265
RUN_ARGS ?=
SUBMISSION_ID ?=

.PHONY: cluster down run help

cluster:
	@command -v "$(CHIA)" >/dev/null || { echo 'CHIA CLI missing: activate chia_env or set CHIA_ENV_BIN.' >&2; exit 1; }
	@test -f "$(CLUSTER_CONFIG)"
	@export HEAD_IP="$${HEAD_IP:-$$(hostname -I | awk '{print $$1}')}"; \
	if "$(CHIA)" up -y "$(CLUSTER_CONFIG)"; then \
		echo 'WallyGuard cluster is up.'; \
	else \
		echo 'Cluster startup failed; tearing down and retrying once.' >&2; \
		"$(CHIA)" down -y "$(CLUSTER_CONFIG)"; \
		"$(CHIA)" up -y "$(CLUSTER_CONFIG)"; \
	fi

down:
	@command -v "$(CHIA)" >/dev/null || { echo 'CHIA CLI missing: activate chia_env or set CHIA_ENV_BIN.' >&2; exit 1; }
	@test -f "$(CLUSTER_CONFIG)"
	@export HEAD_IP="$${HEAD_IP:-$$(hostname -I | awk '{print $$1}')}"; \
	"$(CHIA)" down -y "$(CLUSTER_CONFIG)"

run:
	@command -v "$(CHIA)" >/dev/null || { echo 'CHIA CLI missing: activate chia_env or set CHIA_ENV_BIN.' >&2; exit 1; }
	@job_id="$(SUBMISSION_ID)"; \
	if [[ -z "$$job_id" ]]; then job_id="WALLYGUARD_$$(date +%Y%m%d_%H%M%S_%N)"; fi; \
	"$(CHIA)" job submit --address "$(CHIA_ADDRESS)" \
		--submission-id "$$job_id" \
		-- python "$(PROJECT_DIR)/wally_loop.py" $(RUN_ARGS)

help:
	@printf '%s\n' \
	  'WallyGuard commands:' \
	  '  make cluster   Start wally_cluster.yaml; on failure, down then retry once.' \
	  '                 If teardown fails, stop and report the error.' \
	  '  make down      Tear down the configured cluster (without confirmation).' \
	  '  make run       Submit the continuous loop through CHIA and stream logs.' \
	  '  make help      Show this help (also the default target).' \
	  '' \
	  'Examples:' \
	  '  make run RUN_ARGS="--once --stop-on-failure"' \
	  '  make run RUN_ARGS="--sleep 5 --wally-timeout 900 --spike-timeout 120"' \
	  '  make run CHIA_ADDRESS=http://<head-ip>:8265' \
	  '' \
	  'Cluster prerequisites: export TS_AUTHKEY, GCP_PROJECT, GCP_PRIVATE_KEY_PATH.' \
	  'HEAD_IP defaults to this machine first IP when unset.' \
	  'CHIA_ENV_BIN defaults to ~/miniconda3/envs/chia_env/bin.' \
	  'Overrides: CHIA, CHIA_ENV_BIN, CLUSTER_CONFIG, CHIA_ADDRESS, RUN_ARGS, SUBMISSION_ID.' \
	  'The run target requires an existing cluster; it does not start one.'
