# Makefile

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -O2  # Enable all warnings and optimization level 2

# Source file
SRC = filename.c

# Output executable
TARGET = filename  # This will be the name of the output executable

# Build target for 'make filename'
filename: $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Clean target
clean:
	rm -f $(TARGET)
