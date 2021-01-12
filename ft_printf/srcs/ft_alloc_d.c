/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alloc_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:45:02 by besellem          #+#    #+#             */
/*   Updated: 2021/01/12 22:45:26 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf_internal.h"

void	ft_alloc_d(t_data **s, t_indicators t, va_list ap)
{
	char		*data;
	long long	n;

	n = d_spec(&t, ap);
	if (n < 0)
		data = conv_d(t, -n, 1, "0123456789");
	else
		data = conv_d(t, n, 0, "0123456789");
	add_lstd(s, data);
	ft_free(1, data);
}
