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
RUN_ARGS ?= --once
SUBMISSION_ID ?=

.PHONY: cluster down _cluster _down run help

cluster down:
	@flock -n -E 75 "$(PROJECT_DIR)/.cluster.lock" \
		$(MAKE) --no-print-directory -f "$(PROJECT_DIR)/Makefile" _$@ || { \
		status=$$?; \
		if [ "$$status" -eq 75 ]; then \
			echo 'Another cluster operation is active or suspended. Finish it, or use fg then Ctrl+C to cancel it.' >&2; \
		fi; \
		exit "$$status"; \
	}

_cluster:
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

_down:
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
	  'Verification API (compatibility checked before generation):' \
	  '  make general|arithmetic|branch CONFIG=rv64gc NUM_TESTS=100' \
	  '  make test AREA=<area> CONFIG=<config> NUM_TESTS=100 [DV_TEST=<exact-test>]' \
	  '  make reproduce AREA=branch CONFIG=rv64gc SEED=5382' \
	  '  make all-areas CONFIG=all NUM_TESTS_PER_AREA=10' \
	  '  make campaign CONFIG=all NUM_TESTS=100' \
	  '  make list-areas | list-riscv-dv-tests | list-configs | matrix' \
	  '  make qualify-configs | qualify-config CONFIG=<config> | qualify-tests [CONFIG=<config>]' \
	  '  Qualification is sequential, cached, and distinguishes UNQUALIFIED from UNSUPPORTED.' \
	  '  CONFIG=all means NUM_TESTS per compatible configuration.' \
	  '  Unsupported areas/configurations produce explicit SKIPPED_UNSUPPORTED evidence.' \
	  '  Consult listings for SUPPORTED, UNQUALIFIED and UNSUPPORTED combinations.' \
	  '  TEST_ARGS forwards timeout, --stop-on-failure, --color and other CLI options.' \
	  ''
	@printf '%s\n' \
	  'WallyGuard commands:' \
	  '  make cluster   Start wally_cluster.yaml; on failure, down then retry once.' \
	  '                 If teardown fails, stop and report the error.' \
	  '  make down      Tear down the configured cluster (without confirmation).' \
	  '  make run       Run directed tests, then one generated test through CHIA.' \
	  '  make help      Show this help (also the default target).' \
	  '' \
	  'Examples:' \
	  '  make run RUN_ARGS="--preflight --seed 100 --stop-on-failure"' \
	  '  make run RUN_ARGS="--num-tests 10 --seed 101"' \
	  '  make run RUN_ARGS="--num-tests 10 --seed 500 --color always"' \
	  '  make run RUN_ARGS=""  # continuous generation' \
	  '  make run RUN_ARGS="--existing-tests --once"' \
	  '  make run RUN_ARGS="--once --stop-on-failure"' \
	  '  make run RUN_ARGS="--sleep 5 --wally-timeout 900 --spike-timeout 120"' \
	  '  make run CHIA_ADDRESS=http://<head-ip>:8265' \
	  '' \
	  'Cluster prerequisites: export TS_AUTHKEY, GCP_PROJECT, GCP_PRIVATE_KEY_PATH.' \
	  'HEAD_IP defaults to this machine first IP when unset.' \
	  'CHIA_ENV_BIN defaults to ~/miniconda3/envs/chia_env/bin.' \
	  'Overrides: CHIA, CHIA_ENV_BIN, CLUSTER_CONFIG, CHIA_ADDRESS, RUN_ARGS, SUBMISSION_ID.' \
	  'The run target requires an existing cluster; it does not start one.'
	@printf '%s\n' 'Cluster operations are serialized. Ctrl+Z suspends a command; use Ctrl+C to cancel.'

# Stable verification API. Selection and compatibility live in Python.
CONFIG ?= rv64gc
AREA ?= general
NUM_TESTS ?= 100
NUM_TESTS_PER_AREA ?= 10
SEED ?=
DV_TEST ?=
TEST_ARGS ?=
SEED_ARG = $(if $(strip $(SEED)),--seed $(SEED),)
DV_TEST_ARG = $(if $(strip $(DV_TEST)),--riscv-dv-test $(DV_TEST),)
API_ARGS = --wally-config $(CONFIG) $(SEED_ARG) $(TEST_ARGS)
.PHONY: general arithmetic branch memory compressed fence loop csr exception privilege mmu test reproduce all-areas campaign list-areas list-riscv-dv-tests list-configs matrix

general arithmetic branch memory compressed fence loop csr exception privilege mmu:
	@$(MAKE) --no-print-directory test AREA=$@

test:
	@$(MAKE) --no-print-directory run RUN_ARGS="--test-area $(AREA) $(API_ARGS) $(DV_TEST_ARG) --num-tests $(NUM_TESTS)"

reproduce:
	@test -n "$(SEED)" || { echo 'SEED is required for reproduction.' >&2; exit 2; }
	@test "$(CONFIG)" != all || { echo 'Reproduction requires one CONFIG.' >&2; exit 2; }
	@$(MAKE) --no-print-directory test NUM_TESTS=1 TEST_ARGS="--skip-directed $(TEST_ARGS)"

all-areas:
	@$(MAKE) --no-print-directory run RUN_ARGS="--all-areas $(API_ARGS) --num-tests-per-area $(NUM_TESTS_PER_AREA)"

campaign:
	@$(MAKE) --no-print-directory run RUN_ARGS="--campaign $(API_ARGS) --num-tests $(NUM_TESTS)"

list-areas:
	@python "$(PROJECT_DIR)/wally_loop.py" --list-test-areas
list-riscv-dv-tests:
	@python "$(PROJECT_DIR)/wally_loop.py" --list-riscv-dv-tests
list-configs:
	@python "$(PROJECT_DIR)/wally_loop.py" --list-wally-configs
matrix:
	@python "$(PROJECT_DIR)/wally_loop.py" --compatibility-matrix

QUALIFY_ARGS ?=
.PHONY: qualify-configs qualify-config qualify-tests _qualify
qualify-configs:
	@$(MAKE) --no-print-directory _qualify QUALIFY_MODE=configs QUALIFY_CONFIG=all
qualify-config:
	@$(MAKE) --no-print-directory _qualify QUALIFY_MODE=configs QUALIFY_CONFIG=$(CONFIG)
qualify-tests:
	@$(MAKE) --no-print-directory _qualify QUALIFY_MODE=tests QUALIFY_CONFIG=$(CONFIG)
_qualify:
	@"$(CHIA)" job submit --address "$(CHIA_ADDRESS)" \
		--submission-id "WALLYGUARD_QUALIFY_$$(date +%Y%m%d_%H%M%S_%N)" \
		-- python "$(PROJECT_DIR)/tools/qualify.py" $(QUALIFY_MODE) --config $(QUALIFY_CONFIG) $(QUALIFY_ARGS)
