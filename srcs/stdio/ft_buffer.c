/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 00:54:06 by besellem          #+#    #+#             */
/*   Updated: 2021/07/13 17:30:51 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include "ft_string.h"
#include "ft_stdlib.h"
#include "defs.h"

t_buffer	*ft_init_buff(const t_buffer_attr *attr)
{
	static t_buffer	*buffer = NULL;

	if (buffer && attr && (attr->oflag & BUF_INIT))
	{
		ft_memset(buffer, 0, sizeof(t_buffer));
		free(buffer);
		buffer = NULL;
	}
	else if (!buffer)
	{
		buffer = (struct s_buffer *)ft_calloc(1, sizeof(t_buffer));
		if (!buffer)
			return (NULL);
		if (attr)
			buffer->__fd = attr->fd;
		else
			buffer->__fd = STDOUT_FILENO;
	}
	return (buffer);
}

void	ft_destroy_buff(void)
{
	const t_buffer_attr	attr = {.fd = -1, .oflag = BUF_INIT};

	ft_init_buff(&attr);
}

int	ft_buffaddc(char c)
{
	t_buffer	*buffer;

	buffer = ft_init_buff(NULL);
	if (!buffer)
		return (SYSCALL_ERR);
	buffer->__buff[buffer->__index++] = c;
	if (__BUFF_SIZE__ == buffer->__index)
	{
		if (SYSCALL_ERR == write(buffer->__fd, buffer->__buff, __BUFF_SIZE__))
			return (SYSCALL_ERR);
		buffer->__index = 0;
		ft_memset(buffer->__buff, 0, sizeof(buffer->__buff));
	}
	return (0);
}

int	ft_buffadd(char *s)
{
	size_t	i;

	if (!s)
		return (SYSCALL_ERR);
	i = 0;
	while (s[i])
	{
		if (SYSCALL_ERR == ft_buffaddc(s[i]))
			return (SYSCALL_ERR);
		++i;
	}
	return (0);
}

int	ft_flush_buff(void)
{
	t_buffer	*buffer;

	buffer = ft_init_buff(NULL);
	if (!buffer)
		return (SYSCALL_ERR);
	if (SYSCALL_ERR == write(buffer->__fd, buffer->__buff, buffer->__index))
		return (SYSCALL_ERR);
	buffer->__index = 0;
	ft_memset(buffer->__buff, 0, sizeof(buffer->__buff));
	ft_destroy_buff();
	return (0);
}
