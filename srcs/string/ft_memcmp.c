/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 02:29:17 by besellem          #+#    #+#             */
/*   Updated: 2021/11/05 14:50:57 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_stdint.h"

inline static int	__get_diff__(const uintmax_t *p1, const uintmax_t *p2)
{
	const unsigned char	*s1 = (unsigned char *)p1;
	const unsigned char	*s2 = (unsigned char *)p2;
	size_t				i;

	i = 0;
	while (i < sizeof(uintmax_t) && s1[i] == s2[i])
		++i;
	return (s1[i] - s2[i]);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const size_t	_sz = sizeof(uintmax_t);
	const uintmax_t	*p1 = s1;
	const uintmax_t	*p2 = s2;
	unsigned char	*c1;
	unsigned char	*c2;

	if (n != 0)
	{
		while (n >= _sz)
		{
			if (*p1++ != *p2++)
				return (__get_diff__(p1 - 1, p2 - 1));
			n -= _sz;
		}
		c1 = (unsigned char *)p1;
		c2 = (unsigned char *)p2;
		while (n-- > 0)
		{
			if (*c1++ != *c2++)
				return ((int)(*--c1 - *--c2));
		}
	}
	return (0);
}
