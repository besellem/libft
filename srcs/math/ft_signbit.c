/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signbit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:48:09 by besellem          #+#    #+#             */
/*   Updated: 2021/04/18 21:16:10 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

int	ft_signbitf(float x)
{
	uint32_t	nb;

	nb = *(uint32_t *)(&x);
	return (nb >> 31);
}

int	ft_signbit(double x)
{
	uint64_t	nb;

	nb = *(uint64_t *)(&x);
	return (nb >> 63);
}

int	ft_signbitl(long double x)
{
	union u_dbl80	u;

	u.ld = x;
	return (u.exp >> 15);
}
