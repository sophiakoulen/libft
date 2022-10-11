/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulen <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:29:39 by skoulen           #+#    #+#             */
/*   Updated: 2022/10/11 10:29:41 by skoulen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    const char    *ptr;

    ptr = 0;
    while (*s)
    {
        if (*s == (char)c)
            ptr = s;
        s++;
    }
    if (*s == (char)c)
        ptr = s;
    return ((char *)ptr);
}
