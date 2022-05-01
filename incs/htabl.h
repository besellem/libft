/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   htabl.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 16:24:45 by besellem          #+#    #+#             */
/*   Updated: 2022/05/01 22:40:39 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HTABL_H
# define HTABL_H

# include <stdlib.h>
# include "list_templates.h"

typedef struct s_htabl			t_htabl;
typedef struct s_htabl_node		t_htabl_node;

struct s_htabl_node
{
	char	*key;
	void	*value;
};

CREATE_LST_TYPE(t_htabl_lst, t_htabl_node *)

struct s_htabl
{
	size_t		_size;
	t_htabl_lst	**_root;
};

t_htabl_node	*htabl_insert(t_htabl **ht, char *key, void *value);
void			htabl_destroy(t_htabl **ht, void (*del_intern)(t_htabl_node *));
void			*htabl_search(const t_htabl *ht, const char *key);
size_t			htabl_hash(const char *key);
void			htabl_print(const t_htabl *ht);

#endif
