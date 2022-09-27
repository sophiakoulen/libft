CC=gcc
CFLAGS= -Wall -Wextra -Werror -I../.. -L../..

run: test-ctype
	./test-ctype

test-ctype: test-ctype.c
	$(CC) $(CFLAGS) test-ctype.c -lft -o $@