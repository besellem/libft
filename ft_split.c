/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 22:07:09 by besellem          #+#    #+#             */
/*   Updated: 2020/09/13 22:20:28 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	w_count(char const *s, char c)
{
	int len;
	int i;

	len = 0;
	i = -1;
	while (s[++i])
	{
		if (s[i] == c)
			++len;
		while (s[i] && s[i] == c)
			++i;
	}
	return (len);
}

char		**ft_split(char const *s, char c)
{
	char	**strs;
	int		w_len;
	int		i;
	int		j;

	if (!(strs = (char **)malloc(sizeof(char *) * (w_count(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		w_len = 0;
		while (s[i] && s[i] == c)
			++i;
		while (s[i + w_len] && s[i + w_len] != c)
			++w_len;
		if (!(strs[j] = (char *)malloc(sizeof(char) * (w_len + 1))))
			return (NULL);
		ft_strlcpy(strs[j++], s + i, w_len + 1);
		i += w_len;
	}
	strs[j] = NULL;
	return (strs);
}
