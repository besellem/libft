/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:54:34 by besellem          #+#    #+#             */
/*   Updated: 2021/04/18 15:21:37 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_fmod is imprecise with very large numbers
*/

float	ft_fmodf(float x, float y)
{
	long double	r;

	if (ft_isinff(y) && !ft_isinff(x))
		return (x);
	r = ft_trunc(x / y);
	return ((float)ft_copysign(x - (r * y), x));
}

double	ft_fmod(double x, double y)
{
	long double	r;

	if (ft_isinfd(y) && !ft_isinfd(x))
		return (x);
	r = ft_trunc(x / y);
	return (ft_copysign(x - (r * y), x));
}
