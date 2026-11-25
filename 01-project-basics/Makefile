CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -std=c17 -Iinclude

SRC = ${wildcard src/*.c}
TARGET=build/app

all:
	${CC} ${CFLAGS} ${SRC} -o ${TARGET}

clean:
	rm -f ${TARGET}
