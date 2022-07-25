/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:52:32 by besellem          #+#    #+#             */
/*   Updated: 2022/07/25 14:24:47 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strsep(char **stringp, const char *delim)
{
	char	*token;
	char	*s;
	char	*tmp;

	s = *stringp;
	if (!s)
		return (NULL);
	token = *stringp;
	while (*s)
	{
		tmp = ft_strchr(delim, *s);
		if (tmp)
		{
			*s = '\0';
			*stringp = s + 1;
			return (token);
		}
		++s;
	}
	*stringp = NULL;
	return (token);
}
