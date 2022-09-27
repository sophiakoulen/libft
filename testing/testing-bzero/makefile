CC = gcc
CFLAGS = -Wall -Wextra -Werror -I../.. -L../..

run: test-bzero input-bzero.txt
	cat input-bzero.txt | ./test-bzero

test-bzero: test-bzero.c
	$(CC) $(CFLAGS) test-bzero.c -lft -o test-bzero