/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitcount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulen <skoulen@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:12:56 by skoulen           #+#    #+#             */
/*   Updated: 2022/10/13 21:13:11 by skoulen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_digitcount(int n)
{
	size_t	len;

	len = 1;
	if (ft_sign(n) == -1)
		len++;
	while (n >= 10 || n <= -10)
	{
		n /= 10;
		len++;
	}
	return (len);
}
