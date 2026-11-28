CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -std=c17 -Iinclude

SRC = ${wildcard src/*.c}
TARGET=build/app

all:
	mkdir -p build
	${CC} ${CFLAGS} ${SRC} -o ${TARGET}

clean:
	rm -f ${TARGET}
