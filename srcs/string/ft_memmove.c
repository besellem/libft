/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 02:29:24 by besellem          #+#    #+#             */
/*   Updated: 2021/11/06 21:39:13 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_stdint.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	t_uwide_int		*l_src;
	t_uwide_int		*l_dst;
	unsigned char	*c_src;
	unsigned char	*c_dst;

	if (dst == src)
		return (dst);
	if (dst > src)
	{
		l_src = (t_uwide_int *)(src + len);
		l_dst = (t_uwide_int *)(dst + len);
		while (len >= sizeof(t_uwide_int))
		{
			*--l_dst = *--l_src;
			len -= sizeof(t_uwide_int);
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
