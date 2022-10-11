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

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *ptr;
    size_t  len;
    size_t  i;

    len = ft_strlen(s1);
    ptr = malloc(len + 1);
    if (!ptr)
        return (0);
    while (*s1)
    {
        i = 0;
        while (*s1 != set[i])
            i++;
        if ()
    }

    while (*s1)
    {
        i = 0;
        while (*s1 != set[i] && set[i])
            i++;
        if (!set[i])
        {
            *ptr = *s1;
            ptr++;
        }
        s1++;
    }
    return (ptr);
}