/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 18:54:22 by besellem          #+#    #+#             */
/*   Updated: 2020/09/13 18:58:04 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int len;

	len = ft_strlen(s1);
	i = -1;
	while (s2[++i])
		s1[len + i] = s2[i];
	s1[len + i] = '\0';
	return (s1);
}
