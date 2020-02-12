CC=clang
CFLAGS=-Wall -fno-stack-protector

all:
	 $(CC) $(CFLAGS) main.c -o bin
