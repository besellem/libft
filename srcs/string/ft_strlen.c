/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 02:29:36 by besellem          #+#    #+#             */
/*   Updated: 2021/09/01 03:18:18 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "defs.h"
#include <limits.h>

/*
** 1GB in ~280 ms (the real one does it in ~100 ms)
*/
size_t	ft_strlen(const char *s)
{
	const size_t	ones = (SIZE_T_MAX / UCHAR_MAX);
	const size_t	highs = ones * (UCHAR_MAX / 2 + 1);
	size_t			*l_str;
	char			*c_str;

	if (LIBC_NO_CRASH_ON_NULL && !s)
		return (0);
	c_str = (char *)s;
	while ((uintptr_t)c_str % sizeof(size_t))
	{
		if (!*c_str)
			return (c_str - s);
		++c_str;
	}
	l_str = (size_t *)c_str;
	while (!((*l_str) - ones & ~(*l_str) & highs))
		++l_str;
	c_str = (char *)l_str;
	while (*c_str)
		++c_str;
	return ((size_t)c_str - (size_t)s);
}
