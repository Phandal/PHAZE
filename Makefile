CC=gcc
CFLAGS:=-Wall -Werror -pedantic --std=c17
LFLAGS:=-lcurses

all: main

main: main.c stack.o
	$(CC) $(CFLAGS) $(LFLAGS) -o $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -f main *.o

stack: stacktest

stacktest: stackmain.c stack.o
	$(CC) $(CFLAGS) -o $@ $^

cleanstack:
	rm -f stacktest *.o
