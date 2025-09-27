
CC=gcc
CFLAGS=-Wall -Wextra -O0 -std=c11
SRC_ROOT=src
BUILD=build

ALL_C := $(shell find $(SRC_ROOT) -name "*.c" ! -path "*/organize_code/*")

all: $(ALL_C:$(SRC_ROOT)/%.c=$(BUILD)/%)) build-organize

$(BUILD)/%: $(SRC_ROOT)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $< -o $@

# Target khusus untuk contoh organize_code (multi-file)
build-organize:
	@mkdir -p $(BUILD)/03_more/organize_code
	$(CC) $(CFLAGS) $(SRC_ROOT)/03_more/organize_code/lib.c $(SRC_ROOT)/03_more/organize_code/main.c -o $(BUILD)/03_more/organize_code/main

clean:
	rm -rf $(BUILD)
