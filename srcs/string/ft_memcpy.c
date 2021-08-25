/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 02:29:21 by besellem          #+#    #+#             */
/*   Updated: 2021/08/25 04:52:51 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_stdint.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const size_t	_sz = sizeof(t_wide_int__);
	t_wide_int__	*l_src;
	t_wide_int__	*l_dst;
	char			*c_src;
	char			*c_dst;

	if (dst == src)
		return (dst);
	l_src = (t_wide_int__ *)src;
	l_dst = (t_wide_int__ *)dst;
	while (n >= _sz)
	{
		*l_dst++ = *l_src++;
		n -= _sz;
	}
	if (n > 0)
	{
		c_src = (char *)l_src;
		c_dst = (char *)l_dst;
		while (n--)
			*c_dst++ = *c_src++;
	}
	return (dst);
}
