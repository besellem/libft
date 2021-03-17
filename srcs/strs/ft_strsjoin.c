/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 13:58:36 by besellem          #+#    #+#             */
/*   Updated: 2021/03/17 19:27:25 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(size_t size, char **strs, char *sep)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i + 1 < size)
			len += ft_strlen(sep);
		++i;
	}
	return (len);
}

char		*ft_strsjoin(size_t size, char **strs, char *sep)
{
	char	*s;
	size_t	i;

	if (!strs || !sep)
		return (NULL);
	s = (char *)ft_calloc(ft_len(size, strs, sep) + 1, sizeof(char));
	if (!s)
		return (NULL);
	if (size <= 0)
		return (s);
	i = 0;
	while (i < size)
	{
		ft_strcat(s, strs[i]);
		if (i + 1 < size)
			ft_strcat(s, sep);
		++i;
	}
	return (s);
}
