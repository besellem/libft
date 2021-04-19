/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 12:40:58 by besellem          #+#    #+#             */
/*   Updated: 2021/04/19 11:49:57 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	if (!s || maxlen == 0)
		return (0);
	i = 0;
	while (s[i] && i < maxlen)
		++i;
	return (i);
}
