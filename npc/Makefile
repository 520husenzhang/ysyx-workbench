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
# VERILATOR_FLAGS += --debug
# Add this trace to get a backtrace in gdb
#VERILATOR_FLAGS += --gdb
VERILATOR_FLAGS += --build
# 关闭 警告 unused  
VERILATOR_FLAGS += -Wno-UNUSED 
VERILATOR_FLAGS += -Wno-PINCONNECTEMPTY
VERILATOR_FLAGS += -Wno-UNDRIVEN
#包含的头文件
VERILATOR_FLAGS += -I./vsrc  -y ./vsrc 
VERILATOR_FLAGS += --top-module npc_onecycle

# Input files for Verilator    包括 c 与  v
VERILATOR_INPUT +=     ./vsrc/CSR_REGS.v   ./vsrc/EX.v     ./vsrc/ID.v    ./vsrc/GEN_REGS.v    ./vsrc/IF.v    
VERILATOR_INPUT +=     ./vsrc/MEM.v    ./vsrc/npc_onecycle.v    


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
	@obj_dir/Vnpc_onecycle

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