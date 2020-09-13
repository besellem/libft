/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 02:29:11 by besellem          #+#    #+#             */
/*   Updated: 2020/09/13 21:22:37 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//	TO CHECK

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *s1;
	unsigned char *s2;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	while (n-- > 0)
	{
		*s1++ = *s2;
		if (*s2++ == (unsigned char)c)
			return (dst);
	}
	return (NULL);
}
