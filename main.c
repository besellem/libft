/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 12:20:58 by besellem          #+#    #+#             */
/*   Updated: 2020/11/15 15:52:40 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	char 		*str1;
	char 		*str2;
	long long	real;
	long long	mine;

	if (ac != 3)
	{
		dprintf(2, "Arg Error\n");
		return (1);
	}
	real = strtoll(av[2], &str1, ft_atoi(av[1]));
	mine = ft_strtoll(av[2], &str2, ft_atoi(av[1]));
	printf("REAL => [%lld] [%s]\n", real, str1);
	printf("MINE => [%lld] [%s]\n", mine, str2);
	return (0);
}
