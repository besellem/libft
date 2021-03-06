/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 13:43:56 by besellem          #+#    #+#             */
/*   Updated: 2021/04/19 11:13:21 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

long	ft_atol(const char *str)
{
	long	nb;
	int		min;

	while (*str && (*str == ' ' || (*str >= '\t' && *str <= '\r')))
		++str;
	min = 1;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			min = -1;
	nb = 0;
	while (*str >= '0' && *str <= '9')
		nb = nb * 10 + *str++ - 48;
	return (nb * min);
}
