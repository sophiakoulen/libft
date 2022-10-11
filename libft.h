/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulen <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:30:12 by skoulen           #+#    #+#             */
/*   Updated: 2022/10/11 10:30:25 by skoulen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
 #define LIBFT_H

 #include <stdio.h>

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);

int ft_tolower(int c);
int ft_toupper(int c);

    #include <stddef.h>

void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memset(void *s, int c, size_t n);
size_t  ft_strlen(const char *s);

size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);

char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);

int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);

int ft_atoi(const char *str);

//personnal additions
int     ft_isspace(int c);
void    *ft_realloc(void *ptr, size_t size);

 #include <stdlib.h>

void    *ft_calloc(size_t count, size_t size);
char    *ft_strdup(const char *s1);

//ft fonctions
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
 
#endif
