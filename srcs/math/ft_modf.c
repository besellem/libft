/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:08:09 by besellem          #+#    #+#             */
/*   Updated: 2021/04/18 15:20:27 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_modff(float value, float *iptr)
{
	*iptr = ft_truncf(value);
	if (ft_isinff(value))
		return (ft_copysignf(0.0f, value));
	return (ft_copysignf(value - *iptr, value));
}

double	ft_modf(double value, double *iptr)
{
	*iptr = ft_trunc(value);
	if (ft_isinfd(value))
		return (ft_copysign(0.0, value));
	return (ft_copysign(value - *iptr, value));
}
