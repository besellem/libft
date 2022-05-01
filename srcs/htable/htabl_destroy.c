/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   htabl_destroy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 22:16:35 by besellem          #+#    #+#             */
/*   Updated: 2022/05/01 22:58:43 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "htabl.h"
#include "ft_string.h"
#include "ft_stdio.h"

void	htabl_destroy(t_htabl **ht, void (*del_intern)(t_htabl_node *))
{
	t_htabl_lst	**nodes;
	t_htabl_lst	*lst;
	size_t		i;

	if (!*ht)
		return ;
	nodes = (*ht)->_root;
	ft_printf("nodes: [%p]\n", ht);
	if (nodes)
	{
		i = 0;
		while (i < (*ht)->_size)
		{
			lst = nodes[i];
			while ((*del_intern) && lst)
			{
				(*del_intern)(lst->content);
				lst = lst->next;
			}
			lst_clear(&nodes[i], free);
			++i;
		}
	}
	ft_memdel((void **)&(*ht)->_root);
	ft_memdel((void **)&(*ht));
}
