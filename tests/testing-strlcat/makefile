CC = gcc
CFLAGS = -Wall -Wextra -Werror -I../.. -L../..

run: test-strlcat input-strlcat.txt
	cat input-strlcat.txt | ./test-strlcat

test-strlcat: test-strlcat.c
	$(CC) $(CFLAGS) test-strlcat.c -lft -o test-strlcat