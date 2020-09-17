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
#include <string.h>

int	main(int ac, char **av)
{
	char	*str;

	(void)ac;
	printf("o: %s\n", strcasestr(av[1], av[2]));
	printf("m: %s\n", ft_strcasestr(av[1], av[2]));
	return (0);
}
