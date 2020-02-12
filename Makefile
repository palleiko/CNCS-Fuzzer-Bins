CC=clang
CFLAGS=-Wall -fno-stack-protector -z execstack

all:
	 $(CC) $(CFLAGS) main.c -o bin
