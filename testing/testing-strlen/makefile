CC = gcc
CFLAGS = -Wall -Wextra -Werror -I../.. -L../..

run: test-strlen input-strlen.txt
	cat input-strlen.txt | ./test-strlen

test-strlen: test-strlen.c
	$(CC) $(CFLAGS) test-strlen.c -lft -o test-strlen