/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 21:53:35 by besellem          #+#    #+#             */
/*   Updated: 2020/09/13 22:06:53 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_set(char c, char const *set)
{
	size_t i;

	i = 0;
	while (set[i])
		if (set[i++] == c)
			return (1);
	return (0);
}

static size_t	head_index(char const *str, char const *set)
{
	size_t i;

	i = 0;
	while (str[i] && is_set(str[i], set))
		++i;
	return (i);
}

static size_t	tail_index(char const *str, char const *set)
{
	size_t i;

	i = ft_strlen(str);
	while (i-- > 0)
		if (!is_set(str[i], set))
			return (i);
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	head;
	size_t	tail;
	size_t	i;

	head = head_index(s1, set);
	tail = tail_index(s1, set);
	if (!(new = (char *)malloc(sizeof(char) * (tail - head + 1))))
		return (NULL);
	i = 0;
	while (head <= tail)
		new[i++] = s1[head++];
	new[i] = '\0';
	return (NULL);
}
