# Paths
ifeq ($(BCC_PATH),)
	BCC_PATH := /home/ryan/Desktop/BlitzMax/bin/bcc
endif
ifeq ($(BLITZMAX_PATH),)
	BLITZMAX_PATH := /home/ryan/Desktop/BlitzMax
endif
ifeq ($(PROJECT_PATH),)
	PROJECT_PATH := /home/ryan/Desktop/BlitzShmup
endif

OUTPUT_DIR = $(PROJECT_PATH)/.bmx
OUTPUT_EXEC = $(PROJECT_PATH)/shmup

# BlitzMax Compilation Flags
BCC_FLAGS = -g x64 -v -r -h -s -w -override -t console -p linux

# GCC Compilation Flags
GCC_FLAGS = -DNDEBUG -pg -w -DBMX_NG -fno-strict-aliasing -fpie -fno-exceptions -c -O3 -msse3 -s

# Linker Flags
LD_FLAGS = -m64 -no-pie -fpie -pg -pthread -L/usr/X11R6/lib -L/usr/lib

# Include all modules dynamically
MOD_INCLUDES = -I$(BLITZMAX_PATH)/mod/brl.mod -I$(BLITZMAX_PATH)/mod/pub.mod -I$(BLITZMAX_PATH)/mod

# Source files
SRC_FILE = $(PROJECT_PATH)/shmup.bmx
OBJ_FILE = $(OUTPUT_DIR)/shmup.bmx.console.release.linux.x64.o
C_FILE = $(OUTPUT_DIR)/shmup.bmx.console.release.linux.x64.c

release: $(OUTPUT_EXEC)

$(OUTPUT_EXEC): $(SRC_FILE)
	rm -f $(OUTPUT_EXEC)
	$(BCC_PATH) $(BCC_FLAGS) -o $(OBJ_FILE).s $(SRC_FILE)
	gcc $(MOD_INCLUDES) $(GCC_FLAGS) -o $(OBJ_FILE) $(C_FILE)
	g++ $(LD_FLAGS) -o $(OUTPUT_EXEC) $(BLITZMAX_PATH)/tmp/ld.tmp

clean:
	rm -f $(OUTPUT_FILE) $(OBJ_FILE)
