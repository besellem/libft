/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copysign.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 11:03:04 by besellem          #+#    #+#             */
/*   Updated: 2021/04/18 15:20:55 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_copysignf(float x, float y)
{
	uint32_t	x_input;
	uint32_t	y_input;

	ft_memcpy(&y_input, &y, sizeof(float));
	ft_memcpy(&x_input, &x, sizeof(float));
	if ((y_input >> 31) == (x_input >> 31))
		return (x);
	else
		return (-x);
}

double	ft_copysign(double x, double y)
{
	uint64_t	x_input;
	uint64_t	y_input;

	ft_memcpy(&y_input, &y, sizeof(double));
	ft_memcpy(&x_input, &x, sizeof(double));
	if ((y_input >> 63) == (x_input >> 63))
		return (x);
	else
		return (-x);
}
