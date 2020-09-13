/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 13:08:55 by besellem          #+#    #+#             */
/*   Updated: 2020/09/13 13:08:58 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j])
			if (!needle[++j])
				return (*haystack + i);
		++i;
	}
	return (NULL);
}
