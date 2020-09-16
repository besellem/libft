/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 22:27:52 by besellem          #+#    #+#             */
/*   Updated: 2020/09/13 22:42:47 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nblen(int nb)
{
	int len;

	len = 0;
	while (nb > 0)
	{
		++len;
		nb /= 10;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*s;
	int		len;
	int		div;
	int		i;

	len = n < 0 ? ft_nblen(-n) + 1 : ft_nblen(n);
	if (!(s = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = -1;
	if (n < 0)
		s[++i] = '-';
	div = 1;
	while (len-- > 0)
	{
		s[++i] = n / div % 10 + 48;
		div *= 10;
	}
	s[i + 1] = '\0';
	return (s);
}
