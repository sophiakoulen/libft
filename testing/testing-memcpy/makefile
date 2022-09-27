CC = gcc
CFLAGS = -Wall -Wextra -Werror -I../.. -L../..

run: test-memcpy input-memcpy.txt
	cat input-memcpy.txt | ./test-memcpy

test-memcpy: test-memcpy.c
	$(CC) $(CFLAGS) test-memcpy.c -lft -o test-memcpy