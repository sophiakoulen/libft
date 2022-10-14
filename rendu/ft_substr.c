/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulen <skoulen@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:34:20 by skoulen           #+#    #+#             */
/*   Updated: 2022/10/14 10:27:02 by skoulen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	ptr = malloc(len + 1);
	if (!ptr)
		return (0);
	while (*s && start)
	{
		s++;
		start--;
	}
	ft_strlcpy(ptr, s, len + 1);
	return (ptr);
}
