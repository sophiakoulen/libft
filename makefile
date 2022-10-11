# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skoulen <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 10:31:58 by skoulen           #+#    #+#              #
#    Updated: 2022/10/11 10:32:04 by skoulen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc
CFLAGS = -Wall -Wextra -Werror

libft.a: ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strlen.o ft_strlcat.o ft_strlcpy.o ft_tolower.o ft_toupper.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_memcmp.o ft_memchr.o ft_strnstr.o ft_isspace.o ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_realloc.o
	ar r $@ ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strlen.o ft_strlcat.o ft_strlcpy.o ft_tolower.o ft_toupper.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_memcmp.o ft_memchr.o ft_strnstr.o ft_isspace.o ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_realloc.o
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

ft_strlcat.o: ft_strlcat.c
	$(CC) $(CFLAGS) -c ft_strlcat.c

ft_strlcpy.o: ft_strlcpy.c
	$(CC) $(CFLAGS) -c ft_strlcpy.c

ft_tolower.o: ft_tolower.c
	$(CC) $(CFLAGS) -c ft_tolower.c

ft_toupper.o: ft_toupper.c
	$(CC) $(CFLAGS) -c ft_toupper.c

ft_strchr.o: ft_strchr.c
	$(CC) $(CFLAGS) -c ft_strchr.c

ft_strrchr.o: ft_strrchr.c
	$(CC) $(CFLAGS) -c ft_strrchr.c

ft_strncmp.o: ft_strncmp.c
	$(CC) $(CFLAGS) -c ft_strncmp.c

ft_memcmp.o: ft_memcmp.c
	$(CC) $(CFLAGS) -c ft_memcmp.c

ft_strnstr.o: ft_strnstr.c
	$(CC) $(CFLAGS) -c ft_strnstr.c

ft_isspace.o: ft_isspace.c
	$(CC) $(CFLAGS) -c ft_isspace.c

ft_atoi.o: ft_atoi.c
	$(CC) $(CFLAGS) -c ft_atoi.c

ft_calloc.o: ft_calloc.c
	$(CC) $(CFLAGS) -c ft_calloc.c

ft_strdup.o: ft_strdup.c
	$(CC) $(CFLAGS) -c ft_strdup.c

ft_substr.o: ft_substr.c
	$(CC) $(CFLAGS) -c ft_substr.c

ft_strjoin.o: ft_strjoin.c
	$(CC) $(CFLAGS) -c ft_strjoin.c

ft_strtrim.o: ft_strtrim.c
	$(CC) $(CFLAGS) -c ft_strtrim.c

ft_realloc.o: ft_realloc.c
	$(CC) $(CFLAGS) -c ft_realloc.c

clean:
	rm *.o
