/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 02:29:24 by besellem          #+#    #+#             */
/*   Updated: 2021/08/25 19:47:36 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_stdint.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const size_t	l_size = sizeof(t_wide_int__);
	t_wide_int__	*l_src;
	t_wide_int__	*l_dst;
	unsigned char	*c_src;
	unsigned char	*c_dst;

	if (dst == src)
		return (dst);
	if (dst > src)
	{
		l_src = (t_wide_int__ *)(src + len);
		l_dst = (t_wide_int__ *)(dst + len);
		while (len >= l_size)
		{
			*--l_dst = *--l_src;
			len -= l_size;
		}
		c_src = (unsigned char *)l_src;
		c_dst = (unsigned char *)l_dst;
		while (len-- > 0)
			*--c_dst = *--c_src;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
