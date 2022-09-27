CC = gcc
CFLAGS = -Wall -Wextra -Werror -I../.. -L../..

run: test-memmove input-memmove.txt
	cat input-memmove.txt | ./test-memmove

test-memmove: test-memmove.c
	$(CC) $(CFLAGS) test-memmove.c -lft -o test-memmove