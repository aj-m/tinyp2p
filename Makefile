# Compiler
CC = gcc
# Includes dir
INCLUDES = include
# Compiler flags
CFLAGS = -g -Wall -I $(INCLUDES)
# Source file
SOURCE = source/tinyp2p
# Output file
TARGET = bin/tinyp2p

all: $(TARGET)

$(TARGET): $(SOURCE).c
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE).c -D TINYP2P_MAIN

bencode:
	$(CC) $(CFLAGS) -o bin/bencode source/bencode.c -D BENCODE_MAIN

clean:
	$(RM) bin/*

