# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))
WRVX_COMPBASE := $(subst \,/,$(WRVX_COMPBASE))
WIND_KRNL_MK := $(subst \,/,$(WIND_KRNL_MK))
WIND_USR_MK := $(subst \,/,$(WIND_USR_MK))
WIND_BUILD := $(subst \,/,$(WIND_BUILD))
WIND_BUILD_TOOL := $(subst \,/,$(WIND_BUILD_TOOL))
WIND_LAYER_PATHS := $(subst \,/,$(WIND_LAYER_PATHS))

all : check_vsb pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

JOBS?=1
TARGET_JOBS?=$(JOBS)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = Test_Default_VSB_ARMARCH8Allvm_LP64_LARGE_SMP
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := E:/WindRiverWorkspaces
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/ARINC-Open-Source-Lib



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0
APICHECK_OPTIONS = -warning


#BuildSpec specific Build Macros
VX_CPU_FAMILY = arm
CPU = ARMARCH8A
TOOL_FAMILY = llvm
TOOL_VERSION = llvm_2016_04
_CC_VERSION = llvm_17_0_6_1
TOOL = llvm
TOOL_PATH = $(WIND_HOME)/compilers/llvm-17.0.6.1/$(WIND_VX7_LLVM_HOST_TYPE)/bin
CC_ARCH_SPEC = -fno-builtin --target=arm64 -ffixed-x18  -moutline-atomics
VSB_DIR = $(PRJ_ROOT_DIR)/../Test_Default_VSB
VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
LIBPATH = 
LIBS = 
DKM_LONGCALL =  
BDGEN_VSB_INCLUDE = $(VSB_DIR)/h/config/auto.conf
APICHECK_CMD = apicheck.sh -r "$(VSB_DIR)/krnl/apicheck/forbidden_api.lst" -n "nmarm64" -u -s "$<" "$@" $(APICHECK_OPTIONS)
APICHECK = 0

IDE_INCLUDES = -I$(VSB_DIR)/share/h -I$(VSB_DIR)/../ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha -I$(VSB_DIR)/../ARINC-Open-Source-Lib/include -I$(VSB_DIR)/../ARINC-Open-Source-Lib/src/lib -isystem$(VSB_DIR)/krnl/h/system -isystem$(VSB_DIR)/krnl/h/public 

IDE_LIBRARIES = 

IDE_DEFINES = -DCPU=_VX_$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL -D_WRS_VX_SMP -D_WRS_CONFIG_SMP -D_VSB_CONFIG_FILE=\"$(VSB_DIR)/h/config/vsbConfig.h\" -DARMEL  -U__USER_LABEL_PREFIX__ -D__USER_LABEL_PREFIX__= 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2
DEBUGFLAGS_C++-Compiler = -O2
DEBUGFLAGS_Linker = -O2
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2
endif


#Project Targets
PROJECT_TARGETS = ARINC-Open-Source-Lib/$(MODE_DIR)/ARINC-Open-Source-Lib.out \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.o


#Rules

# ARINC-Open-Source-Lib
ifeq ($(DEBUG_MODE),1)
ARINC-Open-Source-Lib/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
ARINC-Open-Source-Lib/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
ARINC-Open-Source-Lib/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
ARINC-Open-Source-Lib/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
ARINC-Open-Source-Lib/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
ARINC-Open-Source-Lib/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
ARINC-Open-Source-Lib/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2
ARINC-Open-Source-Lib/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2
ARINC-Open-Source-Lib/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2
ARINC-Open-Source-Lib/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
ARINC-Open-Source-Lib/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
ARINC-Open-Source-Lib/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2
endif
ARINC-Open-Source-Lib/$(MODE_DIR)/% : IDE_INCLUDES = -I$(VSB_DIR)/share/h -I$(VSB_DIR)/../ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha -I$(VSB_DIR)/../ARINC-Open-Source-Lib/include -I$(VSB_DIR)/../ARINC-Open-Source-Lib/src/lib -isystem$(VSB_DIR)/krnl/h/system -isystem$(VSB_DIR)/krnl/h/public 
ARINC-Open-Source-Lib/$(MODE_DIR)/% : IDE_LIBRARIES = 
ARINC-Open-Source-Lib/$(MODE_DIR)/% : IDE_DEFINES = -DCPU=_VX_$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL -D_WRS_VX_SMP -D_WRS_CONFIG_SMP -D_VSB_CONFIG_FILE=\"$(VSB_DIR)/h/config/vsbConfig.h\" -DARMEL  -U__USER_LABEL_PREFIX__ -D__USER_LABEL_PREFIX__= 
ARINC-Open-Source-Lib/$(MODE_DIR)/% : PROJECT_TYPE = DKM
ARINC-Open-Source-Lib/$(MODE_DIR)/% : DEFINES = 
ARINC-Open-Source-Lib/$(MODE_DIR)/% : EXPAND_DBG = 0
ARINC-Open-Source-Lib/$(MODE_DIR)/% : APICHECK_OPTIONS = -warning
ARINC-Open-Source-Lib/$(MODE_DIR)/% : VX_CPU_FAMILY = arm
ARINC-Open-Source-Lib/$(MODE_DIR)/% : CPU = ARMARCH8A
ARINC-Open-Source-Lib/$(MODE_DIR)/% : TOOL_FAMILY = llvm
ARINC-Open-Source-Lib/$(MODE_DIR)/% : TOOL_VERSION = llvm_2016_04
ARINC-Open-Source-Lib/$(MODE_DIR)/% : _CC_VERSION = llvm_17_0_6_1
ARINC-Open-Source-Lib/$(MODE_DIR)/% : TOOL = llvm
ARINC-Open-Source-Lib/$(MODE_DIR)/% : TOOL_PATH = $(WIND_HOME)/compilers/llvm-17.0.6.1/$(WIND_VX7_LLVM_HOST_TYPE)/bin
ARINC-Open-Source-Lib/$(MODE_DIR)/% : CC_ARCH_SPEC = -fno-builtin --target=arm64 -ffixed-x18  -moutline-atomics
ARINC-Open-Source-Lib/$(MODE_DIR)/% : VSB_DIR = $(PRJ_ROOT_DIR)/../Test_Default_VSB
ARINC-Open-Source-Lib/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
ARINC-Open-Source-Lib/$(MODE_DIR)/% : LIBPATH = 
ARINC-Open-Source-Lib/$(MODE_DIR)/% : LIBS = 
ARINC-Open-Source-Lib/$(MODE_DIR)/% : DKM_LONGCALL =  
ARINC-Open-Source-Lib/$(MODE_DIR)/% : BDGEN_VSB_INCLUDE = $(VSB_DIR)/h/config/auto.conf
ARINC-Open-Source-Lib/$(MODE_DIR)/% : APICHECK_CMD = apicheck.sh -r "$(VSB_DIR)/krnl/apicheck/forbidden_api.lst" -n "nmarm64" -u -s "$<" "$@" $(APICHECK_OPTIONS)
ARINC-Open-Source-Lib/$(MODE_DIR)/% : APICHECK = 0
ARINC-Open-Source-Lib/$(MODE_DIR)/% : OBJ_DIR := ARINC-Open-Source-Lib/$(MODE_DIR)

OBJECTS_ARINC-Open-Source-Lib = ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.o


ARINC-Open-Source-Lib/$(MODE_DIR)/ARINC-Open-Source-Lib.includes.list.new:checkDirARINC-Open-Source-Lib
	$(file >$@,$(IDE_INCLUDES))

ARINC-Open-Source-Lib/$(MODE_DIR)/ARINC-Open-Source-Lib.includes.list.flag:ARINC-Open-Source-Lib/$(MODE_DIR)/ARINC-Open-Source-Lib.includes.list.new
	@cmp -s ARINC-Open-Source-Lib/$(MODE_DIR)/ARINC-Open-Source-Lib.includes.list.new ARINC-Open-Source-Lib/$(MODE_DIR)/ARINC-Open-Source-Lib.includes.list; RETVAL=$$?;\
	if [ "$$RETVAL" -ne "0" ] || [ ! -f $@ ]; then \
		touch $@;\
	fi;

ARINC-Open-Source-Lib/$(MODE_DIR)/ARINC-Open-Source-Lib.includes.list:ARINC-Open-Source-Lib/$(MODE_DIR)/ARINC-Open-Source-Lib.includes.list.flag
	$(file >$@,$(IDE_INCLUDES))

checkDirARINC-Open-Source-Lib : 
	mkdir -p ARINC-Open-Source-Lib/$(MODE_DIR)/

ARINC-Open-Source-Lib/$(MODE_DIR)/.ARINC-Open-Source-LibObject.list.new:checkDirARINC-Open-Source-Lib
	$(file >$@,$(OBJECTS_ARINC-Open-Source-Lib))

ARINC-Open-Source-Lib/$(MODE_DIR)/.ARINC-Open-Source-LibObject.list.flag:ARINC-Open-Source-Lib/$(MODE_DIR)/.ARINC-Open-Source-LibObject.list.new
	@cmp -s ARINC-Open-Source-Lib/$(MODE_DIR)/.ARINC-Open-Source-LibObject.list.new ARINC-Open-Source-Lib/$(MODE_DIR)/.ARINC-Open-Source-LibObject.list; RETVAL=$$?;\
	if [ "$$RETVAL" -ne "0" ] || [ ! -f $@ ]; then \
		touch $@;\
	fi;

ARINC-Open-Source-Lib/$(MODE_DIR)/.ARINC-Open-Source-LibObject.list:$(OBJECTS_ARINC-Open-Source-Lib) ARINC-Open-Source-Lib/$(MODE_DIR)/.ARINC-Open-Source-LibObject.list.flag
	$(file >$@,$(OBJECTS_ARINC-Open-Source-Lib))

ifeq ($(TARGET_JOBS),1)
ARINC-Open-Source-Lib/$(MODE_DIR)/ARINC-Open-Source-Lib.out : ARINC-Open-Source-Lib/$(MODE_DIR)/.ARINC-Open-Source-LibObject.list  ARINC-Open-Source-Lib/$(MODE_DIR)/ARINC-Open-Source-Lib.includes.list | check_objdirs
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";$(TOOL_PATH)/nmarm64 @ARINC-Open-Source-Lib/$(MODE_DIR)/.ARINC-Open-Source-LibObject.list | tclsh $(WIND_BUILD)/mk/tcl/munch.tcl -c arm64 -tags $(VSB_DIR)/krnl/tags/dkm.tags > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)/clang $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -std=c11 -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -fdollars-in-identifiers -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype   -MD -MP $(ADDED_CFLAGS) \@ARINC-Open-Source-Lib/$(MODE_DIR)/ARINC-Open-Source-Lib.includes.list $(ADDED_INCLUDES)  $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c && ls $(OBJ_DIR)/ctdt.o;  $(TOOL_PATH)/ld.lld.exe  -X -r -EL  --eh-frame-hdr  -T $(VSB_DIR)/krnl/ldscripts/dkm.ld  -o "$@" $(OBJ_DIR)/ctdt.o @ARINC-Open-Source-Lib/$(MODE_DIR)/.ARINC-Open-Source-LibObject.list $(IDE_LIBRARIES) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi && $(if $(_WRS_CONFIG_SECURE_LOADER),$(WIND_BUILD)/mk/scripts/signtool  --key=$(_WRS_CONFIG_SECURE_LOADER_PRIVATE_SIGNING_KEY_FILE) --cert=$(_WRS_CONFIG_SECURE_LOADER_PUBLIC_SIGNING_CERT_FILE) --type=ELF $@,true) && true && $(if $(_WRS_CONFIG_SBOM),vxsbomtool --database  --file $@ --map $@.map && mkdir -p  && cp $@*.spdx ,true)

else
ARINC-Open-Source-Lib/$(MODE_DIR)/ARINC-Open-Source-Lib.out : ARINC-Open-Source-Lib/$(MODE_DIR)/ARINC-Open-Source-Lib.out_jobs

endif
ARINC-Open-Source-Lib/$(MODE_DIR)/ARINC-Open-Source-Lib_compile_file : $(FILE) ;

_clean :: ARINC-Open-Source-Lib/$(MODE_DIR)/ARINC-Open-Source-Lib_clean

ARINC-Open-Source-Lib/$(MODE_DIR)/ARINC-Open-Source-Lib_clean : 
	$(TRACE_FLAG)if [ -d "ARINC-Open-Source-Lib" ]; then cd "ARINC-Open-Source-Lib"; rm -rf $(MODE_DIR); fi


# ARINC-Open-Source-Lib_partialImage
ifeq ($(DEBUG_MODE),1)
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2
endif
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(VSB_DIR)/share/h -I$(VSB_DIR)/../ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha -I$(VSB_DIR)/../ARINC-Open-Source-Lib/include -I$(VSB_DIR)/../ARINC-Open-Source-Lib/src/lib -isystem$(VSB_DIR)/krnl/h/system -isystem$(VSB_DIR)/krnl/h/public 
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = 
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : IDE_DEFINES = -DCPU=_VX_$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL -D_WRS_VX_SMP -D_WRS_CONFIG_SMP -D_VSB_CONFIG_FILE=\"$(VSB_DIR)/h/config/vsbConfig.h\" -DARMEL  -U__USER_LABEL_PREFIX__ -D__USER_LABEL_PREFIX__= 
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : DEFINES = 
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : APICHECK_OPTIONS = -warning
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = arm
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : CPU = ARMARCH8A
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = llvm
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : TOOL_VERSION = llvm_2016_04
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : _CC_VERSION = llvm_17_0_6_1
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : TOOL = llvm
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : TOOL_PATH = $(WIND_HOME)/compilers/llvm-17.0.6.1/$(WIND_VX7_LLVM_HOST_TYPE)/bin
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -fno-builtin --target=arm64 -ffixed-x18  -moutline-atomics
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : VSB_DIR = $(PRJ_ROOT_DIR)/../Test_Default_VSB
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : VSB_CONFIG_FILE = $(VSB_DIR)/h/config/vsbConfig.h
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : LIBPATH = 
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : LIBS = 
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : DKM_LONGCALL =  
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : BDGEN_VSB_INCLUDE = $(VSB_DIR)/h/config/auto.conf
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : APICHECK_CMD = apicheck.sh -r "$(VSB_DIR)/krnl/apicheck/forbidden_api.lst" -n "nmarm64" -u -s "$<" "$@" $(APICHECK_OPTIONS)
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : APICHECK = 0
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/% : OBJ_DIR := ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)

ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/dkm.o : $(PRJ_ROOT_DIR)/dkm.c $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -std=c11 -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_CFLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/DownloadOperationConfiguration.o : $(PRJ_ROOT_DIR)/src/app/arinc_615a_unit_test/arinc_615a_test_tha/DownloadOperationConfiguration.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/InformationOperationConfiguration.o : $(PRJ_ROOT_DIR)/src/app/arinc_615a_unit_test/arinc_615a_test_tha/InformationOperationConfiguration.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/OperationConfiguration.o : $(PRJ_ROOT_DIR)/src/app/arinc_615a_unit_test/arinc_615a_test_tha/OperationConfiguration.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/TargetDataLoaderConfiguration.o : $(PRJ_ROOT_DIR)/src/app/arinc_615a_unit_test/arinc_615a_test_tha/TargetDataLoaderConfiguration.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/TargetInformationOperation.o : $(PRJ_ROOT_DIR)/src/app/arinc_615a_unit_test/arinc_615a_test_tha/TargetInformationOperation.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/TargetMediaDefinedDownloadOperation.o : $(PRJ_ROOT_DIR)/src/app/arinc_615a_unit_test/arinc_615a_test_tha/TargetMediaDefinedDownloadOperation.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/TargetOperatorDefinedDownloadOperation.o : $(PRJ_ROOT_DIR)/src/app/arinc_615a_unit_test/arinc_615a_test_tha/TargetOperatorDefinedDownloadOperation.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/TargetUploadOperation.o : $(PRJ_ROOT_DIR)/src/app/arinc_615a_unit_test/arinc_615a_test_tha/TargetUploadOperation.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/ThaC.o : $(PRJ_ROOT_DIR)/src/app/arinc_615a_unit_test/arinc_615a_test_tha/ThaC.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/UploadOperationConfiguration.o : $(PRJ_ROOT_DIR)/src/app/arinc_615a_unit_test/arinc_615a_test_tha/UploadOperationConfiguration.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/arinc_615a_test_tha.o : $(PRJ_ROOT_DIR)/src/app/arinc_615a_unit_test/arinc_615a_test_tha/arinc_615a_test_tha.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/Arinc615a.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/Arinc615a.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/Arinc615aConfiguration.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/Arinc615aConfiguration.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/Arinc615aVersionDescription.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/Arinc615aVersionDescription.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/OperationTypeDescription.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/OperationTypeDescription.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/StatusCode.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/StatusCode.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/StatusCodeDescription.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/StatusCodeDescription.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/TargetId.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/TargetId.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/InitializationFile.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/files/InitializationFile.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/ProtocolFile.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/files/ProtocolFile.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/ProtocolFileLogger.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/files/ProtocolFileLogger.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/ProtocolFileStatistic.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/files/ProtocolFileStatistic.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/ProtocolFileTypeDescription.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/files/ProtocolFileTypeDescription.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/ProtocolFilename.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/files/ProtocolFilename.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/Ratio.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/files/Ratio.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/String.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/files/String.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/download/DownloadOperationAnswerFile.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/files/download/DownloadOperationAnswerFile.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/download/DownloadOperationListFile.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/files/download/DownloadOperationListFile.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/download/DownloadOperationRequestFile.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/files/download/DownloadOperationRequestFile.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/download/DownloadOperationStatusFile.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/files/download/DownloadOperationStatusFile.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/information/InformationOperationStatusFile.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/files/information/InformationOperationStatusFile.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/information/LoadConfigurationListFile.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/files/information/LoadConfigurationListFile.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/upload/UploadOperationRequestFile.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/files/upload/UploadOperationRequestFile.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/upload/UploadOperationStatusFile.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/files/upload/UploadOperationStatusFile.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/FindConfiguration.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/find/FindConfiguration.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/TargetInformation.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/find/TargetInformation.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/packets/OpcodeDescription.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/find/packets/OpcodeDescription.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/packets/Packet.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/find/packets/Packet.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/packets/PacketHandler.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/find/packets/PacketHandler.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/packets/PacketStatistic.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/find/packets/PacketStatistic.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/packets/Packets.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/find/packets/Packets.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/servers/Server.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/find/servers/Server.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/servers/implementation/ServerImpl.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/find/servers/implementation/ServerImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/DownloadFileStatus.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/information/DownloadFileStatus.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/DownloadStatus.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/information/DownloadStatus.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/InitializationResponse.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/information/InitializationResponse.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/PartNumber.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/information/PartNumber.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/Ratio.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/information/Ratio.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/Status.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/information/Status.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/TargetHardware.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/information/TargetHardware.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/UploadLoadStatus.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/information/UploadLoadStatus.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/UploadStatus.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/information/UploadStatus.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/Protocol.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/target/Protocol.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/implementation/ErrorOperationImpl.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/target/implementation/ErrorOperationImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/implementation/InformationOperationImpl.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/target/implementation/InformationOperationImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/implementation/MediaDefinedDownloadOperationImpl.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/target/implementation/MediaDefinedDownloadOperationImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/implementation/OperationImpl.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/target/implementation/OperationImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/implementation/OperatorDefinedDownloadOperationImpl.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/target/implementation/OperatorDefinedDownloadOperationImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/implementation/ProtocolImpl.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/target/implementation/ProtocolImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/implementation/UploadOperationImpl.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/target/implementation/UploadOperationImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/Arinc615aOptions.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/tftp/Arinc615aOptions.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/ErrorMessage.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/tftp/ErrorMessage.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/clients/Client.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/tftp/clients/Client.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/clients/implementation/ClientImpl.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/tftp/clients/implementation/ClientImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/clients/implementation/OperationImpl.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/tftp/clients/implementation/OperationImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/clients/implementation/ReadOperationImpl.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/tftp/clients/implementation/ReadOperationImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/clients/implementation/WriteOperationImpl.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/tftp/clients/implementation/WriteOperationImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/servers/Server.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/tftp/servers/Server.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/servers/implementation/ReadOperationImpl.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/tftp/servers/implementation/ReadOperationImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/servers/implementation/ServerImpl.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/tftp/servers/implementation/ServerImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/servers/implementation/WriteOperationImpl.o : $(PRJ_ROOT_DIR)/src/lib/arinc_615a/tftp/servers/implementation/WriteOperationImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/Arinc665.o : $(PRJ_ROOT_DIR)/src/lib/arinc_665/Arinc665.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/FileTypeDescription.o : $(PRJ_ROOT_DIR)/src/lib/arinc_665/FileTypeDescription.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/MediumNumber.o : $(PRJ_ROOT_DIR)/src/lib/arinc_665/MediumNumber.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/PartNumber.o : $(PRJ_ROOT_DIR)/src/lib/arinc_665/PartNumber.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/SupportedArinc665VersionDescription.o : $(PRJ_ROOT_DIR)/src/lib/arinc_665/SupportedArinc665VersionDescription.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/Arinc665File.o : $(PRJ_ROOT_DIR)/src/lib/arinc_665/files/Arinc665File.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/BatchFile.o : $(PRJ_ROOT_DIR)/src/lib/arinc_665/files/BatchFile.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/BatchInfo.o : $(PRJ_ROOT_DIR)/src/lib/arinc_665/files/BatchInfo.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/BatchListFile.o : $(PRJ_ROOT_DIR)/src/lib/arinc_665/files/BatchListFile.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/CheckValueUtils.o : $(PRJ_ROOT_DIR)/src/lib/arinc_665/files/CheckValueUtils.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/FileInfo.o : $(PRJ_ROOT_DIR)/src/lib/arinc_665/files/FileInfo.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/FileListFile.o : $(PRJ_ROOT_DIR)/src/lib/arinc_665/files/FileListFile.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/ListFile.o : $(PRJ_ROOT_DIR)/src/lib/arinc_665/files/ListFile.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/LoadFileInfo.o : $(PRJ_ROOT_DIR)/src/lib/arinc_665/files/LoadFileInfo.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/LoadHeaderFile.o : $(PRJ_ROOT_DIR)/src/lib/arinc_665/files/LoadHeaderFile.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/LoadInfo.o : $(PRJ_ROOT_DIR)/src/lib/arinc_665/files/LoadInfo.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/LoadListFile.o : $(PRJ_ROOT_DIR)/src/lib/arinc_665/files/LoadListFile.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/StringUtils.o : $(PRJ_ROOT_DIR)/src/lib/arinc_665/files/StringUtils.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_checksum/CheckValue.o : $(PRJ_ROOT_DIR)/src/lib/arinc_checksum/CheckValue.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_checksum/CheckValueGenerator.o : $(PRJ_ROOT_DIR)/src/lib/arinc_checksum/CheckValueGenerator.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_checksum/CheckValueTypeDescription.o : $(PRJ_ROOT_DIR)/src/lib/arinc_checksum/CheckValueTypeDescription.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_checksum/implementation/NopCheckValueGenerator.o : $(PRJ_ROOT_DIR)/src/lib/arinc_checksum/implementation/NopCheckValueGenerator.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/RequestTypeDescription.o : $(PRJ_ROOT_DIR)/src/lib/tftp/RequestTypeDescription.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/Tftp.o : $(PRJ_ROOT_DIR)/src/lib/tftp/Tftp.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/TftpConfiguration.o : $(PRJ_ROOT_DIR)/src/lib/tftp/TftpConfiguration.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/TftpOptionsConfiguration.o : $(PRJ_ROOT_DIR)/src/lib/tftp/TftpOptionsConfiguration.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/TransferStatusDescription.o : $(PRJ_ROOT_DIR)/src/lib/tftp/TransferStatusDescription.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/clients/Client.o : $(PRJ_ROOT_DIR)/src/lib/tftp/clients/Client.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/clients/implementation/ClientImpl.o : $(PRJ_ROOT_DIR)/src/lib/tftp/clients/implementation/ClientImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/clients/implementation/OperationImpl.o : $(PRJ_ROOT_DIR)/src/lib/tftp/clients/implementation/OperationImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/clients/implementation/ReadOperationImpl.o : $(PRJ_ROOT_DIR)/src/lib/tftp/clients/implementation/ReadOperationImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/clients/implementation/WriteOperationImpl.o : $(PRJ_ROOT_DIR)/src/lib/tftp/clients/implementation/WriteOperationImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/files/MemoryFile.o : $(PRJ_ROOT_DIR)/src/lib/tftp/files/MemoryFile.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/files/NullSinkFile.o : $(PRJ_ROOT_DIR)/src/lib/tftp/files/NullSinkFile.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/files/StreamFile.o : $(PRJ_ROOT_DIR)/src/lib/tftp/files/StreamFile.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/AcknowledgementPacket.o : $(PRJ_ROOT_DIR)/src/lib/tftp/packets/AcknowledgementPacket.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/BlockNumber.o : $(PRJ_ROOT_DIR)/src/lib/tftp/packets/BlockNumber.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/DataPacket.o : $(PRJ_ROOT_DIR)/src/lib/tftp/packets/DataPacket.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/ErrorCodeDescription.o : $(PRJ_ROOT_DIR)/src/lib/tftp/packets/ErrorCodeDescription.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/ErrorPacket.o : $(PRJ_ROOT_DIR)/src/lib/tftp/packets/ErrorPacket.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/Options.o : $(PRJ_ROOT_DIR)/src/lib/tftp/packets/Options.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/OptionsAcknowledgementPacket.o : $(PRJ_ROOT_DIR)/src/lib/tftp/packets/OptionsAcknowledgementPacket.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/Packet.o : $(PRJ_ROOT_DIR)/src/lib/tftp/packets/Packet.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/PacketHandler.o : $(PRJ_ROOT_DIR)/src/lib/tftp/packets/PacketHandler.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/PacketStatistic.o : $(PRJ_ROOT_DIR)/src/lib/tftp/packets/PacketStatistic.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/PacketTypeDescription.o : $(PRJ_ROOT_DIR)/src/lib/tftp/packets/PacketTypeDescription.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/ReadRequestPacket.o : $(PRJ_ROOT_DIR)/src/lib/tftp/packets/ReadRequestPacket.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/ReadWriteRequestPacket.o : $(PRJ_ROOT_DIR)/src/lib/tftp/packets/ReadWriteRequestPacket.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/TftpOptions.o : $(PRJ_ROOT_DIR)/src/lib/tftp/packets/TftpOptions.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/WriteRequestPacket.o : $(PRJ_ROOT_DIR)/src/lib/tftp/packets/WriteRequestPacket.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/servers/Server.o : $(PRJ_ROOT_DIR)/src/lib/tftp/servers/Server.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/servers/Servers.o : $(PRJ_ROOT_DIR)/src/lib/tftp/servers/Servers.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/servers/implementation/OperationImpl.o : $(PRJ_ROOT_DIR)/src/lib/tftp/servers/implementation/OperationImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/servers/implementation/ReadOperationImpl.o : $(PRJ_ROOT_DIR)/src/lib/tftp/servers/implementation/ReadOperationImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/servers/implementation/ServerImpl.o : $(PRJ_ROOT_DIR)/src/lib/tftp/servers/implementation/ServerImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/servers/implementation/WriteOperationImpl.o : $(PRJ_ROOT_DIR)/src/lib/tftp/servers/implementation/WriteOperationImpl.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/workbench/EntryPoints.o : $(PRJ_ROOT_DIR)/src/workbench/EntryPoints.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/workbench/TestSupport.o : $(PRJ_ROOT_DIR)/src/workbench/TestSupport.cpp $(FORCE_FILE_BUILD) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)/clang $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC)  -D__vxworks -D__VXWORKS__ -D__ELF__ -D_HAVE_TOOL_XTORS  -nostdlibinc -nostdinc++ -ftls-model=local-exec -fno-builtin -fno-strict-aliasing   -D_USE_INIT_ARRAY -fwrapv -mllvm -two-entry-phi-node-folding-threshold=2 -fno-unwind-tables -fno-asynchronous-unwind-tables -fdebug-default-version=4 -mno-implicit-float -Wall -Wconversion -Wno-sign-conversion -Wno-unused-but-set-variable -Wno-deprecated-non-prototype  -Wno-missing-braces -std=c++17    -MD -MP $(DKM_LONGCALL) $(IDE_DEFINES) $(DEFINES) $(ADDED_C++FLAGS) \@ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list $(ADDED_INCLUDES) -o "$@" -c "$<" && true && if [ "$(APICHECK)" = "1" ]; then $(APICHECK_CMD);fi


OBJECTS_ARINC-Open-Source-Lib_partialImage = ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/dkm.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/DownloadOperationConfiguration.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/InformationOperationConfiguration.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/OperationConfiguration.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/TargetDataLoaderConfiguration.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/TargetInformationOperation.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/TargetMediaDefinedDownloadOperation.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/TargetOperatorDefinedDownloadOperation.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/TargetUploadOperation.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/ThaC.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/UploadOperationConfiguration.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/arinc_615a_test_tha.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/Arinc615a.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/Arinc615aConfiguration.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/Arinc615aVersionDescription.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/OperationTypeDescription.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/StatusCode.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/StatusCodeDescription.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/TargetId.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/InitializationFile.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/ProtocolFile.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/ProtocolFileLogger.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/ProtocolFileStatistic.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/ProtocolFileTypeDescription.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/ProtocolFilename.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/Ratio.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/String.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/download/DownloadOperationAnswerFile.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/download/DownloadOperationListFile.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/download/DownloadOperationRequestFile.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/download/DownloadOperationStatusFile.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/information/InformationOperationStatusFile.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/information/LoadConfigurationListFile.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/upload/UploadOperationRequestFile.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/upload/UploadOperationStatusFile.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/FindConfiguration.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/TargetInformation.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/packets/OpcodeDescription.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/packets/Packet.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/packets/PacketHandler.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/packets/PacketStatistic.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/packets/Packets.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/servers/Server.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/servers/implementation/ServerImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/DownloadFileStatus.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/DownloadStatus.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/InitializationResponse.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/PartNumber.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/Ratio.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/Status.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/TargetHardware.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/UploadLoadStatus.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/UploadStatus.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/Protocol.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/implementation/ErrorOperationImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/implementation/InformationOperationImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/implementation/MediaDefinedDownloadOperationImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/implementation/OperationImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/implementation/OperatorDefinedDownloadOperationImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/implementation/ProtocolImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/implementation/UploadOperationImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/Arinc615aOptions.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/ErrorMessage.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/clients/Client.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/clients/implementation/ClientImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/clients/implementation/OperationImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/clients/implementation/ReadOperationImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/clients/implementation/WriteOperationImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/servers/Server.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/servers/implementation/ReadOperationImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/servers/implementation/ServerImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/servers/implementation/WriteOperationImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/Arinc665.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/FileTypeDescription.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/MediumNumber.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/PartNumber.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/SupportedArinc665VersionDescription.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/Arinc665File.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/BatchFile.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/BatchInfo.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/BatchListFile.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/CheckValueUtils.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/FileInfo.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/FileListFile.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/ListFile.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/LoadFileInfo.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/LoadHeaderFile.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/LoadInfo.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/LoadListFile.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/StringUtils.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_checksum/CheckValue.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_checksum/CheckValueGenerator.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_checksum/CheckValueTypeDescription.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_checksum/implementation/NopCheckValueGenerator.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/RequestTypeDescription.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/Tftp.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/TftpConfiguration.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/TftpOptionsConfiguration.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/TransferStatusDescription.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/clients/Client.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/clients/implementation/ClientImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/clients/implementation/OperationImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/clients/implementation/ReadOperationImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/clients/implementation/WriteOperationImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/files/MemoryFile.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/files/NullSinkFile.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/files/StreamFile.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/AcknowledgementPacket.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/BlockNumber.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/DataPacket.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/ErrorCodeDescription.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/ErrorPacket.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/Options.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/OptionsAcknowledgementPacket.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/Packet.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/PacketHandler.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/PacketStatistic.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/PacketTypeDescription.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/ReadRequestPacket.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/ReadWriteRequestPacket.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/TftpOptions.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/WriteRequestPacket.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/servers/Server.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/servers/Servers.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/servers/implementation/OperationImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/servers/implementation/ReadOperationImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/servers/implementation/ServerImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/servers/implementation/WriteOperationImpl.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/workbench/EntryPoints.o \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/workbench/TestSupport.o


ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list.new:checkDirARINC-Open-Source-Lib_partialImage
	$(file >$@,$(IDE_INCLUDES))

ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list.flag:ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list.new
	@cmp -s ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list.new ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list; RETVAL=$$?;\
	if [ "$$RETVAL" -ne "0" ] || [ ! -f $@ ]; then \
		touch $@;\
	fi;

ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list:ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.includes.list.flag
	$(file >$@,$(IDE_INCLUDES))

checkDirARINC-Open-Source-Lib_partialImage : 
	mkdir -p ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/

ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/.ARINC-Open-Source-Lib_partialImageObject.list.new:checkDirARINC-Open-Source-Lib_partialImage
	$(file >$@,$(OBJECTS_ARINC-Open-Source-Lib_partialImage))

ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/.ARINC-Open-Source-Lib_partialImageObject.list.flag:ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/.ARINC-Open-Source-Lib_partialImageObject.list.new
	@cmp -s ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/.ARINC-Open-Source-Lib_partialImageObject.list.new ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/.ARINC-Open-Source-Lib_partialImageObject.list; RETVAL=$$?;\
	if [ "$$RETVAL" -ne "0" ] || [ ! -f $@ ]; then \
		touch $@;\
	fi;

ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/.ARINC-Open-Source-Lib_partialImageObject.list:$(OBJECTS_ARINC-Open-Source-Lib_partialImage) ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/.ARINC-Open-Source-Lib_partialImageObject.list.flag
	$(file >$@,$(OBJECTS_ARINC-Open-Source-Lib_partialImage))

ifeq ($(TARGET_JOBS),1)
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.o : ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/.ARINC-Open-Source-Lib_partialImageObject.list | check_objdirs
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";  $(TOOL_PATH)/ld.lld.exe  -X -r -EL  --eh-frame-hdr   -o "$@" @ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/.ARINC-Open-Source-Lib_partialImageObject.list $(ADDED_OBJECTS) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

else
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.o : ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage.o_jobs

endif
ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage_compile_file : $(FILE) ;

_clean :: ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage_clean

ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/ARINC-Open-Source-Lib_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "ARINC-Open-Source-Lib_partialImage" ]; then cd "ARINC-Open-Source-Lib_partialImage"; rm -rf $(MODE_DIR); fi

force : 

TARGET_JOBS_RULE?=echo "Update the makefile template via File > Import > Build Settings : Update makefile template";exit 1
%_jobs : 
	$(TRACE_FLAG)$(TARGET_JOBS_RULE)

DEP_FILES := ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/dkm.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/DownloadOperationConfiguration.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/InformationOperationConfiguration.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/OperationConfiguration.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/TargetDataLoaderConfiguration.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/TargetInformationOperation.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/TargetMediaDefinedDownloadOperation.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/TargetOperatorDefinedDownloadOperation.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/TargetUploadOperation.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/ThaC.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/UploadOperationConfiguration.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha/arinc_615a_test_tha.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/Arinc615a.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/Arinc615aConfiguration.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/Arinc615aVersionDescription.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/OperationTypeDescription.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/StatusCode.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/StatusCodeDescription.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/TargetId.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/InitializationFile.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/ProtocolFile.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/ProtocolFileLogger.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/ProtocolFileStatistic.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/ProtocolFileTypeDescription.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/ProtocolFilename.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/Ratio.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/String.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/download/DownloadOperationAnswerFile.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/download/DownloadOperationListFile.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/download/DownloadOperationRequestFile.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/download/DownloadOperationStatusFile.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/information/InformationOperationStatusFile.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/information/LoadConfigurationListFile.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/upload/UploadOperationRequestFile.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/upload/UploadOperationStatusFile.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/FindConfiguration.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/TargetInformation.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/packets/OpcodeDescription.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/packets/Packet.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/packets/PacketHandler.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/packets/PacketStatistic.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/packets/Packets.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/servers/Server.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/servers/implementation/ServerImpl.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/DownloadFileStatus.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/DownloadStatus.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/InitializationResponse.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/PartNumber.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/Ratio.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/Status.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/TargetHardware.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/UploadLoadStatus.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information/UploadStatus.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/Protocol.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/implementation/ErrorOperationImpl.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/implementation/InformationOperationImpl.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/implementation/MediaDefinedDownloadOperationImpl.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/implementation/OperationImpl.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/implementation/OperatorDefinedDownloadOperationImpl.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/implementation/ProtocolImpl.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/implementation/UploadOperationImpl.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/Arinc615aOptions.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/ErrorMessage.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/clients/Client.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/clients/implementation/ClientImpl.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/clients/implementation/OperationImpl.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/clients/implementation/ReadOperationImpl.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/clients/implementation/WriteOperationImpl.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/servers/Server.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/servers/implementation/ReadOperationImpl.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/servers/implementation/ServerImpl.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/servers/implementation/WriteOperationImpl.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/Arinc665.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/FileTypeDescription.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/MediumNumber.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/PartNumber.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/SupportedArinc665VersionDescription.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/Arinc665File.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/BatchFile.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/BatchInfo.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/BatchListFile.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/CheckValueUtils.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/FileInfo.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/FileListFile.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/ListFile.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/LoadFileInfo.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/LoadHeaderFile.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/LoadInfo.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/LoadListFile.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files/StringUtils.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_checksum/CheckValue.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_checksum/CheckValueGenerator.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_checksum/CheckValueTypeDescription.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_checksum/implementation/NopCheckValueGenerator.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/RequestTypeDescription.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/Tftp.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/TftpConfiguration.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/TftpOptionsConfiguration.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/TransferStatusDescription.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/clients/Client.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/clients/implementation/ClientImpl.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/clients/implementation/OperationImpl.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/clients/implementation/ReadOperationImpl.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/clients/implementation/WriteOperationImpl.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/files/MemoryFile.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/files/NullSinkFile.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/files/StreamFile.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/AcknowledgementPacket.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/BlockNumber.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/DataPacket.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/ErrorCodeDescription.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/ErrorPacket.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/Options.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/OptionsAcknowledgementPacket.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/Packet.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/PacketHandler.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/PacketStatistic.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/PacketTypeDescription.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/ReadRequestPacket.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/ReadWriteRequestPacket.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/TftpOptions.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets/WriteRequestPacket.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/servers/Server.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/servers/Servers.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/servers/implementation/OperationImpl.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/servers/implementation/ReadOperationImpl.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/servers/implementation/ServerImpl.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/servers/implementation/WriteOperationImpl.*d ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/workbench/EntryPoints.*d \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/workbench/TestSupport.*d
-include $(DEP_FILES)

OBJ_DIRS := ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/app/arinc_615a_unit_test/arinc_615a_test_tha \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/target/implementation \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/information \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/clients/implementation \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/tftp/servers/implementation \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/download \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_checksum/implementation \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/files/upload \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/servers/implementation \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/clients/implementation \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/servers/implementation \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/information \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665 \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_615a/find/packets \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/packets \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/arinc_665/files \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/lib/tftp/files \
	 ARINC-Open-Source-Lib_partialImage/$(MODE_DIR)/Objects/ARINC-Open-Source-Lib/src/workbench
check_objdirs : 
	$(TRACE_FLAG)echo "Creating object dirs";\
	for dir in $(OBJ_DIRS); do\
		if [ ! -d "$$dir" ]; then mkdir -p "$$dir"; fi;\
	done


ifdef BDGEN_VSB_INCLUDE
include $(BDGEN_VSB_INCLUDE)
endif

-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

TARGET_JOBS_RULE=$(MAKE) -f $(MAKEFILE) --jobs $(TARGET_JOBS) $(MFLAGS) $* TARGET_JOBS=1
ifeq ($(JOBS),1)
main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"
else
main_all : external_build 
	@$(MAKE) -f $(MAKEFILE) --jobs $(JOBS) $(MFLAGS) $(PROJECT_TARGETS) TARGET_JOBS=1 &&\
	echo "make: built targets of `pwd`"
endif 

check_vsb :
	@if [ "$(SKIP_VSB_CHECK)" = "" ]; then\
		if [ -f $(WIND_BUILD)/mk/scripts/check_vsb.sh ]; then\
			jobsoption="";\
			if [ "$(JOBS)" != "" ]; then\
				jobsoption="-j $(JOBS)";\
			fi;\
			sh $(WIND_BUILD)/mk/scripts/check_vsb.sh $$jobsoption $(VSB_DIR);\
		fi;\
	fi

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: check_objdirs $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
