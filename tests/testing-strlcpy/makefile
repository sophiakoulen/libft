CC = gcc
CFLAGS = -Wall -Wextra -Werror -I../.. -L../..

run: test-strlcpy input-strlcpy.txt
	cat input-strlcpy.txt | ./test-strlcpy

test-strlcpy: test-strlcpy.c
	$(CC) $(CFLAGS) test-strlcpy.c -lft -o test-strlcpy