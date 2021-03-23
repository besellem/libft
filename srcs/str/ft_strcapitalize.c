/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 14:56:00 by besellem          #+#    #+#             */
/*   Updated: 2021/03/17 19:20:43 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_alphanum(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

static int	is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

static int	is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char		*ft_strcapitalize(char *str)
{
	int	i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (is_upper(str[i]))
			str[i] += 32;
		if (!is_alphanum(str[i - 1]) && is_alpha(str[i]))
			str[i] -= 32;
		++i;
	}
	return (str);
}