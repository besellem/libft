/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   htabl_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 22:20:59 by besellem          #+#    #+#             */
/*   Updated: 2022/05/01 22:29:03 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "htabl.h"
#include "ft_stdio.h"

void	htabl_print(const t_htabl *ht)
{
	t_htabl_lst		**nodes;
	t_htabl_lst		*lst;
	size_t			i;
	bool			newline;

	nodes = ht->_root;
	i = 0;
	while (i < ht->_size)
	{
		lst = nodes[i];
		newline = (lst && lst->content);
		if (newline)
			ft_printf("[" B_YELLOW "#%4zu" CLR_COLOR "] {\n", i);
		while (lst)
		{
			if (lst->content)
			{
				ft_printf("\t[" B_CYAN "ptr" CLR_COLOR ": %11p, "
					B_CYAN "key" CLR_COLOR ": '%s']",
					lst->content->value, lst->content->key);
				if (lst->next)
					ft_putstr(",");
				ft_putstr("\n");
			}
			lst = lst->next;
		}
		if (newline)
			ft_putstr("}\n");
		++i;
	}
}
