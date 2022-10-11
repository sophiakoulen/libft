CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address -I../.. -L../..

run: test input.txt
	cat input.txt | ./test

test: main.c
	$(CC) $(CFLAGS) main.c -lft -o test