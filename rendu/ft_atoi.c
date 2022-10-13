/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulen <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:33:04 by skoulen           #+#    #+#             */
/*   Updated: 2022/10/11 10:33:08 by skoulen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int sign;
    int nbr;

    while (ft_isspace(*str))
        str++;
    if (*str == '-')
        sign = -1;
    else
        sign = 1;
    if (*str == '-' || *str == '+')
        str++;
    nbr = 0;
    while (ft_isdigit(*str))
    {
        nbr = nbr * 10 + (*str - '0') * sign;
        str++;
    }
    return (nbr);
}
