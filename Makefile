WFLAGS:=-Wall -Werror -pedantic
LFLAGS:=-lcurses

all: main.c
	gcc main.c ${WFLAGS} ${LFLAGS} -o maze
