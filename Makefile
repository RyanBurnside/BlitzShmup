# Paths

BMK = bmk
OUTPUT_EXEC = shmup
SRC_FILES = shmup.bmx

release: $(OUTPUT_EXEC)

$(OUTPUT_EXEC): $(SRC_FILES)
	$(BMK) makeapp -w $(SRC_FILES)

clean:
	rm -f $(OUTPUT_EXEC)
