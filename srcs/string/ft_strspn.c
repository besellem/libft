/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:11:54 by besellem          #+#    #+#             */
/*   Updated: 2022/07/25 14:24:51 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t	ft_strspn(const char *s, const char *accept)
{
	const char	*p = s;

	if (!s)
		return (0);
	while (*s && ft_strchr(accept, *s))
		++s;
	if (p > s)
		return ((size_t)p - (size_t)s);
	else
		return ((size_t)s - (size_t)p);
	return (0);
}
