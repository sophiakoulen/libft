CC = gcc
CFLAGS = -Wall -Wextra -Werror -I../src -L../src

SRC= main.c test_ft_itoa_base.c test_ft_nbr_len.c

all: test

test: $(SRC)
	$(CC) $(CFLAGS) $(SRC) -lft -o $@

fclean:
	rm -f test

re: fclean all