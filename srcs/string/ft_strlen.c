/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 02:29:36 by besellem          #+#    #+#             */
/*   Updated: 2021/08/24 01:05:47 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "defs.h"
#include <limits.h>

/*
** 1GB in ~500 ms (the real one does it in ~100 ms)
*/
size_t	ft_strlen(const char *s)
{
	char	*cpy;

	if (LIBC_NO_CRASH_ON_NULL && !s)
		return (0);
	cpy = (char *)s;
	while (*cpy)
	{
		if (!cpy[1])
			return (cpy - s + 1);
		if (!cpy[2])
			return (cpy - s + 2);
		if (!cpy[3])
			return (cpy - s + 3);
		if (!cpy[4])
			return (cpy - s + 4);
		if (!cpy[5])
			return (cpy - s + 5);
		if (!cpy[6])
			return (cpy - s + 6);
		if (!cpy[7])
			return (cpy - s + 7);
		cpy += 8;
	}
	return (cpy - s);
}

/*
** THE BEST I CAME UP WITH (but segfault with -fsanitize=address in some cases)
** 1GB in ~280 ms (the real one does it in ~100 ms)
*/
// size_t	ft_strlen(const char *s)
// {
// 	const size_t	ones = (SIZE_T_MAX / UCHAR_MAX);
// 	const size_t	highs = ones * (UCHAR_MAX / 2 + 1);
// 	size_t			*l_str;
// 	char			*c_str;

// 	if (LIBC_NO_CRASH_ON_NULL && !s)
// 		return (0);
// 	c_str = (char *)s;
// 	while ((uintptr_t)c_str % sizeof(size_t))
// 	{
// 		if (!*c_str)
// 			return (c_str - s);
// 		++c_str;
// 	}
// 	l_str = (size_t *)c_str;
// 	while (!((*l_str) - ones & ~(*l_str) & highs))
// 		++l_str;
// 	c_str = (char *)l_str;
// 	while (*c_str)
// 		++c_str;
// 	return ((size_t)c_str - (size_t)s);
// }
