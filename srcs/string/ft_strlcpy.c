/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 02:29:35 by besellem          #+#    #+#             */
/*   Updated: 2021/05/09 18:59:14 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	if (!src)
		return (0);
	len = 0;
	while (src[len])
		++len;
	if (dstsize == 0)
		return (len);
	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (len);
}

// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
// {
// 	const size_t	_sz = ft_strlen(src);

// 	if (_sz + 1 > dstsize)
// 		ft_memcpy(dst, src, _sz + 1);
// 	else if (dstsize > 0)
// 	{
// 		ft_memcpy(dst, src, dstsize - 1);
// 		dst[dstsize - 1] = '\0';
// 	}
// 	return (_sz);
// }
