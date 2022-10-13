/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulen <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:33:49 by skoulen           #+#    #+#             */
/*   Updated: 2022/10/11 10:33:52 by skoulen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t          i;
    char *          ptr_dst;
    const char *    ptr_src;
/*
    if buffers overlap, one must be careful not to copy in the wrong order:
    if overlap copy backwards
*/
    ptr_src = (const char *)src;
    ptr_dst = (char *)dest;
    if (ptr_src < ptr_dst && ptr_src + n >= ptr_dst)
    {
        ptr_src += n - 1;
        ptr_dst += n - 1;
        i = 0;
        while (i < n)
        {
            *ptr_dst = *ptr_src;
            ptr_src--;
            ptr_dst--;
            i++;
        }
    }
    else
    {
        ft_memcpy(dest, src, n);
    }
    return (dest);
}
