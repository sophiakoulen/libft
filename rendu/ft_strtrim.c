/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulen <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:31:42 by skoulen           #+#    #+#             */
/*   Updated: 2022/10/11 10:31:46 by skoulen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  in_set(char c, char const *set)
{
    while (*set && *set != c)
        set++;
    return (*set != 0);
}

static char const *trim_begin(char const *s, char const *set)
{
    while (*s && in_set(*s, set))
        s++;
    return (s);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *ptr;
    size_t  i;
   
    s1 = trim_begin(s1, set);
    ptr = ft_strdup(s1);
    if (!ptr)
        return (0);
    i = 0;
    while (ptr[i])
        i++;
    i--;
    while(in_set(ptr[i], set))
    {
        ptr[i] = 0;
        i--;
    }
    return (ptr);
}