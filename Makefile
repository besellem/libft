# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: besellem <besellem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/13 02:01:30 by besellem          #+#    #+#              #
#    Updated: 2020/09/13 23:39:54 by besellem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MUTE		=	@
NAME		=	libft.a
EXEC		=	libft_test

SRCS		+=	ft_atoi.c
SRCS		+=	ft_bzero.c
SRCS		+=	ft_calloc.c
SRCS		+=	ft_isalnum.c
SRCS		+=	ft_isalpha.c
SRCS		+=	ft_isascii.c
SRCS		+=	ft_isdigit.c
SRCS		+=	ft_isprint.c
SRCS		+=	ft_itoa.c
SRCS		+=	ft_memccpy.c
SRCS		+=	ft_memchr.c
SRCS		+=	ft_memcmp.c
SRCS		+=	ft_memcpy.c
SRCS		+=	ft_memmove.c
SRCS		+=	ft_memset.c
SRCS		+=	ft_putchar_fd.c
SRCS		+=	ft_putendl_fd.c
SRCS		+=	ft_putnbr_fd.c
SRCS		+=	ft_putstr_fd.c
SRCS		+=	ft_split.c
SRCS		+=	ft_strchr.c
SRCS		+=	ft_strdup.c
SRCS		+=	ft_strjoin.c
SRCS		+=	ft_strlcat.c
SRCS		+=	ft_strlcpy.c
SRCS		+=	ft_strlen.c
SRCS		+=	ft_strmapi.c
SRCS		+=	ft_strncmp.c
SRCS		+=	ft_strnstr.c
SRCS		+=	ft_strrchr.c
SRCS		+=	ft_strtrim.c
SRCS		+=	ft_substr.c
SRCS		+=	ft_tolower.c
SRCS		+=	ft_toupper.c

BONUS_SRCS	+=	ft_lstadd_back.c
BONUS_SRCS	+=	ft_lstadd_front.c
BONUS_SRCS	+=	ft_lstclear.c
BONUS_SRCS	+=	ft_lstdelone.c
BONUS_SRCS	+=	ft_lstiter.c
BONUS_SRCS	+=	ft_lstlast.c
BONUS_SRCS	+=	ft_lstmap.c
BONUS_SRCS	+=	ft_lstnew.c
BONUS_SRCS	+=	ft_lstsize.c

OBJS		=	$(SRCS:.c=.o)
BONUS_OBJS	=	$(BONUS_SRCS:.c=.o)

INC			=	libft.h

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
SANIT_FLAG	=	-fsanitize=address
LIBC		=	ar rc
RM			=	rm -f

.c.o:
			$(MUTE) $(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INC)

$(NAME):	$(OBJS)
			$(MUTE) $(LIBC) $(NAME) $(OBJS)

all:		$(NAME)

bonus:		all

test:		all
			$(MUTE) $(CC) $(CFLAGS) main.c $(NAME) -o $(EXEC)

sanit:		all
			$(MUTE) $(CC) $(CFLAGS) $(SANIT_FLAG) main.c $(NAME) -o $(EXEC)

clean:
			$(MUTE) $(RM) $(OBJS)

fclean:		clean
			$(MUTE) $(RM) $(NAME)
			$(MUTE) $(RM) $(EXEC)

re:			fclean all

.PHONY:		$(NAME) all test sanit clean fclean re
