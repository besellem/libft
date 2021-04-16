/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:25:11 by besellem          #+#    #+#             */
/*   Updated: 2021/04/16 17:12:40 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/ft_math.h"

float		ft_fminf(float x, float y)
{
	if (ft_isnanf(x) && ft_isnanf(y))
		return (NAN);
	else if (ft_isnanf(x))
		return (y);
	else if (ft_isnanf(y))
		return (x);
	if (x < y)
		return (x);
	else
		return (y);
}

double		ft_fmin(double x, double y)
{
	if (ft_isnan(x) && ft_isnan(y))
		return (NAN);
	else if (ft_isnan(x))
		return (y);
	else if (ft_isnan(y))
		return (x);
	if (x < y)
		return (x);
	else
		return (y);
}

long double	ft_fminl(long double x, long double y)
{
	if (ft_isnanl(x) && ft_isnanl(y))
		return (NAN);
	else if (ft_isnanl(x))
		return (y);
	else if (ft_isnanl(y))
		return (x);
	if (x < y)
		return (x);
	else
		return (y);
}
