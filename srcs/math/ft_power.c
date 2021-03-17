/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 15:03:36 by besellem          #+#    #+#             */
/*   Updated: 2021/03/17 19:19:37 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_power(long long nb, int power)
{
	long long	tmp;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	tmp = nb;
	while (--power > 0)
		nb *= tmp;
	return (nb);
}
