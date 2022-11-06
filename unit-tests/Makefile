CC = gcc
CFLAGS = -Wall -Wextra -Werror -I../src -L../src

SRC= main.c \
test_ft_itoa_base.c \
test_ft_nbr_len.c \
test_ft_nbr_len_unsigned.c \
test_ft_putnbr_base_fd.c \
test_ft_itoa_base_unsigned.c \
test_ft_putnbr_base_unsigned_fd.c

all: test

test: $(SRC)
	$(CC) $(CFLAGS) $(SRC) -lft -o $@

fclean:
	rm -f test

re: fclean all