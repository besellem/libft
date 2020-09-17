/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 02:01:59 by besellem          #+#    #+#             */
/*   Updated: 2020/09/13 02:02:08 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	char	*str;

	str = ft_substr(av[3], atoi(av[1]), atoi(av[2]));
	printf("orig: %s\n", av[3]);
	printf("mine: %s\n", str);
	return (0);
}
