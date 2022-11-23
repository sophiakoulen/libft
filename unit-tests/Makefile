CC = gcc
CFLAGS = -Wall -Wextra -Werror -I../src -L../src

SRC= main.c \
test_split2.c

all: test

test: $(SRC)
	$(CC) $(CFLAGS) $(SRC) -lft -o $@

fclean:
	rm -f test

re: fclean all