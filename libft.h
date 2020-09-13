/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 02:16:30 by besellem          #+#    #+#             */
/*   Updated: 2020/09/13 02:16:32 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*
** INCLUDES
*/
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

/*
** FUNCTIONS PROTOTYPES
*/
int				ft_atoi(const char *str);

/*
** BONUSES
*/


/*
** STRUCTS PROTOTYPES
*/
typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

#endif
