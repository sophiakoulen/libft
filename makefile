CC = gcc
CFLAGS = -Wall -Wextra -Werror

libft.a: ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strlen.o
	ar r $@ ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strlen.o
	ranlib $@
	rm *.o

ft_isalnum.o: ft_isalnum.c
	$(CC) $(CFLAGS) -c ft_isalnum.c

ft_isalpha.o: ft_isalpha.c
	$(CC) $(CFLAGS) -c ft_isalpha.c

ft_isascii.o: ft_isascii.c
	$(CC) $(CFLAGS) -c ft_isascii.c

ft_isdigit.o: ft_isdigit.c
	$(CC) $(CFLAGS) -c ft_isdigit.c

ft_isprint.o: ft_isprint.c
	$(CC) $(CFLAGS) -c ft_isprint.c

ft_bzero.o: ft_bzero.c
	$(CC) $(CFLAGS) -c ft_bzero.c

ft_memcpy.o: ft_memcpy.c
	$(CC) $(CFLAGS) -c ft_memcpy.c

ft_memmove.o: ft_memmove.c
	$(CC) $(CFLAGS) -c ft_memmove.c

ft_memset.o: ft_memset.c
	$(CC) $(CFLAGS) -c ft_memset.c

ft_strlen.o: ft_strlen.c
	$(CC) $(CFLAGS) -c ft_strlen.c

clean:
	rm *.o
