/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnan.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:14:42 by besellem          #+#    #+#             */
/*   Updated: 2021/04/16 17:12:42 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/ft_math.h"

int	ft_isnanf(float x)
{
	return (x != x);
}

int	ft_isnan(double x)
{
	return (x != x);
}

int	ft_isnanl(long double x)
{
	return (x != x);
}
