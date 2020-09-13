# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: besellem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/13 02:01:30 by besellem          #+#    #+#              #
#    Updated: 2020/09/13 02:01:46 by besellem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MUTE	=	@

SRCS	+=	*.c

OBJS	=	$(SRCS:.c=.o)
INCS	=	libft.h
NAME	=	libft.a
EXEC	=	libft_test
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
SFLAGS	=	-fsanitize=address
LIBC	=	ar rc
RM		=	rm -f

.c.o:
			$(MUTE) $(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INCS)

$(NAME):	$(OBJS)
			$(MUTE) $(LIBC) $(NAME) $(OBJS)

all:		$(NAME)

test:		all
			$(MUTE) $(CC) $(CFLAGS) main.c $(NAME) -o $(EXEC)

sanit:		all
			$(MUTE) $(CC) $(CFLAGS) $(SFLAGS) main.c $(NAME) -o $(EXEC)

clean:
			$(MUTE) $(RM) $(OBJS)

fclean:		clean
			$(MUTE) $(RM) $(NAME)
			$(MUTE) $(RM) $(EXEC)

re:			fclean all

.PHONY:		$(NAME) all test sanit clean fclean re
