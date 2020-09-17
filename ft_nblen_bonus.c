/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblen_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 22:32:26 by besellem          #+#    #+#             */
/*   Updated: 2020/09/13 22:34:26 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_nblen(unsigned int n)
{
	unsigned int len;
	unsigned int j;

	len = 1;
	j = 1;
	while ((n / len) >= 10)
	{
		len *= 10;
		++j;
	}
	return (j);
}
