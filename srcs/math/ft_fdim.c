/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:37:39 by besellem          #+#    #+#             */
/*   Updated: 2021/04/16 17:16:59 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/ft_math.h"

float		ft_fdimf(float x, float y)
{
	const float r = x - y;

	if ((x == INFINITY && y == INFINITY)
		|| (x == -INFINITY && y == -INFINITY))
	{
		return (0.0F);
	}
	if (r < 0.0)
		return (0.0F);
	return (r);
}

double		ft_fdim(double x, double y)
{
	const double r = x - y;

	if ((x == INFINITY && y == INFINITY)
		|| (x == -INFINITY && y == -INFINITY))
	{
		return (0.0);
	}
	if (r < 0.0)
		return (0.0);
	return (r);
}

long double	ft_fdiml(long double x, long double y)
{
	const long double r = x - y;

	if ((x == INFINITY && y == INFINITY)
		|| (x == -INFINITY && y == -INFINITY))
	{
		return (0.0L);
	}
	if (r < 0.0)
		return (0.0L);
	return (r);
}
