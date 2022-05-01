/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   htabl_insert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 16:25:01 by besellem          #+#    #+#             */
/*   Updated: 2022/05/01 22:58:49 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "htabl.h"
#include "ft_stdlib.h"
#include "ft_string.h"

#define HTABL_DEFAULT_SIZE  4096

static void	*htabl_search_key(const t_htabl *ht, const char *key)
{
	const size_t		idx = htabl_hash(key) % ht->_size;
	const t_htabl_lst	*lst = ht->_root[idx];

	while (lst)
	{
		if (lst->content && lst->content->key
			&& 0 == ft_strcmp(lst->content->key, key))
			return (lst->content);
		lst = lst->next;
	}
	return (NULL);
}
#include "ft_stdio.h"
t_htabl_node	*htabl_insert(t_htabl **ht, char *key, void *value)
{
	t_htabl_node	*node;
	size_t			idx;

	if (!*ht)
	{
		*ht = ft_calloc(1, sizeof(**ht));
		if (!*ht)
			return (NULL);
		(*ht)->_size = HTABL_DEFAULT_SIZE;
		(*ht)->_root = ft_calloc(1, HTABL_DEFAULT_SIZE * sizeof(t_htabl_lst *));
		if (!(*ht)->_root)
		{
			ft_memdel((void **)&(*ht));
			return (NULL);
		}
	}
	if (htabl_search_key(*ht, key))
		return (NULL);
	node = ft_calloc(1, sizeof(*node));
	if (!node)
		return (NULL);
	node->key = key;
	node->value = value;
	idx = htabl_hash(key) % (*ht)->_size;
	lst_push_front(&(*ht)->_root[idx], node);
	return (node);
}
