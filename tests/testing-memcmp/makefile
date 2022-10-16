CC = gcc
CFLAGS = -Wall -Wextra -Werror -I../../rendu -L../../rendu

run: test input.txt
	cat input.txt | ./test

test: main.c
	$(CC) $(CFLAGS) main.c -lft -o test