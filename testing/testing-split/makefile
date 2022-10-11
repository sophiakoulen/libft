CC = gcc
CFLAGS = -Wall -Wextra -Werror -I../.. -L../..

run: test
	./test

test: main.c
	rm -rf test
	$(CC) $(CFLAGS) main.c -g3 -fsanitize=address -lft -o test