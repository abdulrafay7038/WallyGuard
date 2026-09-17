#!/bin/bash
cd $WALLY/sim/verilator
make compile WALLYCONF=rv64gc TESTBENCH=testbench -j4 2>&1 | tail -50
echo "EXIT_CODE=$?"
