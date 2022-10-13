/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulen <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:31:07 by skoulen           #+#    #+#             */
/*   Updated: 2022/10/11 10:31:11 by skoulen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t          i;
    char *          ptr_dst;
    const char *    ptr_src;

    ptr_dst = (char *)dest;
    ptr_src = (const char *)src;
    i = 0;
    while (i < n)
    {
        *ptr_dst = *ptr_src;
        (ptr_dst)++;
        (ptr_src)++;
        i++;
    }
    return (dest);
}
