CC=gcc
CFLAGS=-I.
DEPS = functions.h
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
functions: factorial.o hello.o main.o
	$(CC) -o functions factorial.o hello.o main.o

