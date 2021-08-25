/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 02:29:17 by besellem          #+#    #+#             */
/*   Updated: 2021/08/26 00:29:37 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_stdint.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < (n - 1) && str1[i] == str2[i])
		++i;
	return (str1[i] - str2[i]);
}

/*
** DOES NOT WORK - CANNOT FIND WHY
*/
// #include <libc.h>
// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	const size_t	_sz = sizeof(unsigned int);
// 	unsigned int	*l_s1;
// 	unsigned int	*l_s2;
// 	unsigned char			*c_s1;
// 	unsigned char			*c_s2;

// 	if (0 == n)
// 		return (0);
// 	l_s1 = (unsigned int *)s1;
// 	l_s2 = (unsigned int *)s2;
// 	--n;
// 	while (n >= _sz && *l_s1++ == *l_s2++)
// 		n -= _sz;
// 	c_s1 = (unsigned char *)(l_s1 - 1);
// 	c_s2 = (unsigned char *)(l_s2 - 1);
// 	while (n > 0 && *c_s1++ == *c_s2++)
// 		--n;
// 	return ((unsigned char)*--c_s1 - (unsigned char)*--c_s2);
// }

/*
** DOES NOT WORK - CANNOT FIND WHY
*/
// #include <libc.h>
// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
//	const size_t	_sz = sizeof(unsigned int);
// 	unsigned int	*l_s1;
// 	unsigned int	*l_s2;
// 	unsigned char	*c_s1;
// 	unsigned char	*c_s2;
// 	size_t			i;

// 	if (0 == n)
// 		return (0);
// 	l_s1 = (unsigned int *)s1;
// 	l_s2 = (unsigned int *)s2;
// 	i = 0;
// 	while ((i * _sz) < (n - _sz) && l_s1[i] == l_s2[i])
// 		++i;
// 	c_s1 = (unsigned char *)(l_s1 + i);
// 	c_s2 = (unsigned char *)(l_s2 + i);
// 	i = 0;
// 	while (i < (n - 1) && c_s1[i] == c_s2[i])
// 		++i;
// 	return (c_s1[i] - c_s2[i]);
// }
