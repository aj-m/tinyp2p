# Compiler
CC = gcc

# Compiler flags
CFLAGS = -g -Wall

# Source file
SOURCE = source/tinyp2p

# Output file
TARGET = bin/tinyp2p

all: $(TARGET)

$(TARGET): $(SOURCE).c
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE).c

bencode:
	$(CC) $(CFLAGS) -o bin/bencode source/bencode.c

clean:
	$(RM) $(TARGET)

