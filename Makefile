CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99

SRC = letter_count.c
OBJ = ${SRC:.c=.o}

all: letter_count

letter_count: ${OBJ}

.PHONY: clean

clean:
	${RM} ${OBJ}
	${RM} letter_count
