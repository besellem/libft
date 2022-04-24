/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_process.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 01:55:17 by besellem          #+#    #+#             */
/*   Updated: 2022/04/24 15:21:00 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_internal.h"

void	ft_printf_process(const char *fmt, t_pft *pft)
{
	int	check;

	while (*fmt)
	{
		check = 0;
		if (*fmt && *fmt == '%' && ++fmt)
		{
			check = ft_parse_conversion(pft, fmt);
		}
		else
		{
			check = pft->write2buf(pft, (char *)fmt);
		}
		if (PFT_ERR == check || PFT_ERR == pft->global_size)
			return ((void)_pft_error(pft));
		fmt += check;
	}
}
