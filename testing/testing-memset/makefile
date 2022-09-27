CC = gcc
CFLAGS = -Wall -Wextra -Werror -I../.. -L../..

run: test-memset input-memset.txt
	cat input-memset.txt | ./test-memset

test-memset: test-memset.c
	$(CC) $(CFLAGS) test-memset.c -lft -o test-memset