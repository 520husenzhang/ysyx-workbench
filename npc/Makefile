######################################################################
# 作者:张虎森
# 学号：ysyx_22040422
# 版本：v1.0
#
######################################################################

# Set up variables
VERILATOR =verilator
# Generate C++ in executable form
VERILATOR_FLAGS += -cc --exe
# Generate makefile dependencies (not shown as complicates the Makefile)
#VERILATOR_FLAGS += -MMD
# Optimize
# Warn abount lint issues; may not want this on less solid designs
VERILATOR_FLAGS += -Wall
# Make waveforms
VERILATOR_FLAGS += --trace
# Check SystemVerilog assertions
#VERILATOR_FLAGS += --assert
# Generate coverage analysis
# Run Verilator in debug mode
#VERILATOR_FLAGS += --debug
# Add this trace to get a backtrace in gdb
#VERILATOR_FLAGS += --gdbbt
VERILATOR_FLAGS += --build
# Input files for Verilator
#VERILATOR_INPUT =     csrc/top.v    vsrc/sim.cpp
VERILATOR_INPUT =     top.v    sim.cpp
all:
	@echo "Write this Makefile by your self."
	@echo "Write this Makefile by your self."
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."

	@echo
	@echo "-- VERILATE ----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)
	@echo
	@echo "-- BUILD -------------------"
###################################################
	@echo
	@echo "-- RUN ---------------------"
	@rm -rf logs
	@mkdir -p logs
	@obj_dir/Vtop

	@echo
	@echo "-- COVERAGE ----------------"
	@sed -i '3c $timescale 1us/1ns $end' dump.vcd
	@sleep 1s 
	@echo "-- DONE --------------------"
	@echo "To see waveforms"
	@gtkwave   dump.vcd
	@echo
include ../Makefile
