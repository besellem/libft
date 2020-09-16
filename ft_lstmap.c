/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 23:18:30 by besellem          #+#    #+#             */
/*   Updated: 2020/09/13 23:18:50 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *tmp;

	if (!lst || !(*f) || !(*del))
		return (NULL);
	new = NULL;
	while (lst)
	{
		new = ft_lstadd_back(&new, ft_lstnew((*f)(lst->content)));
		tmp = lst->next;
		(*del)(lst->content);
		free(lst);
		lst = tmp;
	}
	return (new);
}
