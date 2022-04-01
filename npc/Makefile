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
VERILATOR_FLAGS += -I ./vsrc/defines.v
# Input files for Verilator    包括 c 与  v
VERILATOR_INPUT +=     ./vsrc/ALU.v   ./vsrc/ALU_MEM.v     ./vsrc/ID.v    ./vsrc/ID_ALU.v    ./vsrc/IF.v    
VERILATOR_INPUT +=     ./vsrc/IF_ID.v    ./vsrc/MEM.v    ./vsrc/MEM_WB.v   ./vsrc/REG_files.v    ./vsrc/risc_v.v  ./vsrc/ROM.v  

VERILATOR_INPUT +=  ./csrc/sim.cpp
#VERILATOR_INPUT =     top.v    sim.cpp
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
	@sed -i "s/timescale 1s/timescale 1us/1"  dump.vcd

	@sleep 1s 
	@echo "-- DONE --------------------"
	@echo "To see waveforms"
	@gtkwave   dump.vcd
	@echo
include ../Makefile
export NVBOARD_HOME= 55


 export  NVBOARD_HOME="home/tiger/ysyx-workbench/nvboard"