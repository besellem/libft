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
	char str[] = "";

	printf("bef: %s %lu\n", str, sizeof(str));
	ft_bzero(str, sizeof(str));
	printf("aft: %s %lu", str, sizeof(str));
	return (0);
}
