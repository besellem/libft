/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 17:04:17 by besellem          #+#    #+#             */
/*   Updated: 2021/04/16 17:18:43 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/ft_math.h"

int			ft_abs(int i)
{
	if (i < 0)
		return (-i);
	else
		return (i);
}

float		ft_fabsf(float x)
{
	if (x == 0.0)
		return (0.0F);
	if (x == -INFINITY)
		return (INFINITY);
	if (x < 0.0)
		return (-x);
	return (x);
}

double		ft_fabs(double x)
{
	if (x == 0.0)
		return (0.0);
	if (x == -INFINITY)
		return (INFINITY);
	if (x < 0.0)
		return (-x);
	return (x);
}

long double	ft_fabsl(long double x)
{
	if (x == 0.0)
		return (0.0L);
	if (x == -INFINITY)
		return (INFINITY);
	if (x < 0.0)
		return (-x);
	return (x);
}