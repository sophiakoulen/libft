/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulen <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:34:20 by skoulen           #+#    #+#             */
/*   Updated: 2022/10/11 10:34:23 by skoulen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *ptr;

    ptr = malloc(len + 1);
    if (!ptr)
        return (0);
    ft_strlcpy(ptr, s + start, len + 1);
    return (ptr);
}
