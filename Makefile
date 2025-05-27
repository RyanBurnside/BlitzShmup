# Paths

BMK = bmk
OUTPUT_EXEC = shmup
OUTPUT_EXEC_DEBUG = $(OUTPUT_EXEC).debug
SRC_FILES = shmup.bmx

all: release debug

release: $(OUTPUT_EXEC)

debug: $(OUTPUT_EXEC_DEBUG)

$(OUTPUT_EXEC): $(SRC_FILES)
	$(BMK) makeapp -w -r -h -o $(OUTPUT_EXEC) $(SRC_FILES)

$(OUTPUT_EXEC_DEBUG): $(SRC_FILES)
	$(BMK) makeapp -w -d -o $(OUTPUT_EXEC_DEBUG) $(SRC_FILES)

clean:
	rm -f $(OUTPUT_EXEC) $(OUTPUT_EXEC_DEBUG)
