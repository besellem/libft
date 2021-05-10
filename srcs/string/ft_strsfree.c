/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsfree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 22:30:57 by besellem          #+#    #+#             */
/*   Updated: 2021/05/10 22:31:36 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	*ft_strsfree(size_t size, char **s)
{
	if (s && *s)
	{
		while (size-- > 0)
		{
			free(s[size]);
			s[size] = NULL;
		}
	}
	return (NULL);
}
