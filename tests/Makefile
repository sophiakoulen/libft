NAME = libft_test

CC = gcc
CFLAGS = -Wall -Wextra

CHECK = /Users/skoulen/.brew/Cellar/check/0.15.2

INCLUDES_PATH = -I. -I../libft/includes -I$(CHECK)/include
LIBS_PATH = -L. -L../libft -L$(CHECK)/lib
LIBS = -lft -lcheck

LIBFT = ../libft/libft.a

FILES = test
SRCS = $(addsuffix .c, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES_PATH) -c -o $@ $<

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(LIBS_PATH) $(LIBS) -o $@ $(OBJS)

clean:
	rm -f $(OBJS)
	make clean -C ../libft

fclean: clean
	rm -f $(NAME)
	make clean -C ../libft

re: fclean all

.PHONY: all fclean clean re

$(LIBFT):
	make -C ../libft
