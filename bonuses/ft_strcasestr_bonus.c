/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasestr_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 13:09:11 by besellem          #+#    #+#             */
/*   Updated: 2020/09/13 13:09:13 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcasestr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j] && haystack[i + j] &&
				ft_tolower(haystack[i + j]) == ft_tolower(needle[j]))
			if (!needle[++j])
				return (*haystack + i);
		++i;
	}
	return (NULL);
}
