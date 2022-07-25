/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:12:12 by besellem          #+#    #+#             */
/*   Updated: 2022/07/25 14:24:39 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t	ft_strcspn(const char *s, const char *reject)
{
	const char	*p = s;

	if (!s)
		return (0);
	if (!*reject)
		return (ft_strlen(s));
	while (*s && !ft_strchr(reject, *s))
		++s;
	if (p > s)
		return ((size_t)p - (size_t)s);
	else
		return ((size_t)s - (size_t)p);
	return (0);
}
