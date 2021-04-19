# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: besellem <besellem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/13 02:01:30 by besellem          #+#    #+#              #
#    Updated: 2021/04/19 13:24:47 by besellem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MUTE		=	
NAME		=	libft.a

## Main srcs
SRCS_FOLDER	:=	srcs

# ctype
SRCS		+=	$(SRCS_FOLDER)/ctype/ft_isalnum.c \
				$(SRCS_FOLDER)/ctype/ft_isalpha.c \
				$(SRCS_FOLDER)/ctype/ft_isascii.c \
				$(SRCS_FOLDER)/ctype/ft_isdigit.c \
				$(SRCS_FOLDER)/ctype/ft_isprint.c \
				$(SRCS_FOLDER)/ctype/ft_tolower.c \
				$(SRCS_FOLDER)/ctype/ft_toupper.c

# list
SRCS		+=	$(SRCS_FOLDER)/list/ft_lstadd_back.c \
				$(SRCS_FOLDER)/list/ft_lstadd_front.c \
				$(SRCS_FOLDER)/list/ft_lstclear.c \
				$(SRCS_FOLDER)/list/ft_lstdelone.c \
				$(SRCS_FOLDER)/list/ft_lstiter.c \
				$(SRCS_FOLDER)/list/ft_lstlast.c \
				$(SRCS_FOLDER)/list/ft_lstmap.c \
				$(SRCS_FOLDER)/list/ft_lstnew.c \
				$(SRCS_FOLDER)/list/ft_lstsize.c

# math
SRCS		+=	$(SRCS_FOLDER)/math/ft_abs.c \
				$(SRCS_FOLDER)/math/ft_ceil.c \
				$(SRCS_FOLDER)/math/ft_copysign.c \
				$(SRCS_FOLDER)/math/ft_factorial.c \
				$(SRCS_FOLDER)/math/ft_fdim.c \
				$(SRCS_FOLDER)/math/ft_find_next_prime.c \
				$(SRCS_FOLDER)/math/ft_floor.c \
				$(SRCS_FOLDER)/math/ft_fma.c \
				$(SRCS_FOLDER)/math/ft_fmax.c \
				$(SRCS_FOLDER)/math/ft_fmin.c \
				$(SRCS_FOLDER)/math/ft_fmod.c \
				$(SRCS_FOLDER)/math/ft_frexp.c \
				$(SRCS_FOLDER)/math/ft_hypot.c \
				$(SRCS_FOLDER)/math/ft_is_prime.c \
				$(SRCS_FOLDER)/math/ft_isinf.c \
				$(SRCS_FOLDER)/math/ft_isnan.c \
				$(SRCS_FOLDER)/math/ft_ldexp.c \
				$(SRCS_FOLDER)/math/ft_lround.c \
				$(SRCS_FOLDER)/math/ft_modf.c \
				$(SRCS_FOLDER)/math/ft_pow.c \
				$(SRCS_FOLDER)/math/ft_round.c \
				$(SRCS_FOLDER)/math/ft_signbit.c \
				$(SRCS_FOLDER)/math/ft_sqrt.c \
				$(SRCS_FOLDER)/math/ft_trunc.c

# stdio
SRCS		+=	$(SRCS_FOLDER)/stdio/ft_putaddr_fd.c \
				$(SRCS_FOLDER)/stdio/ft_putaddr.c \
				$(SRCS_FOLDER)/stdio/ft_putc_fd.c \
				$(SRCS_FOLDER)/stdio/ft_putc.c \
				$(SRCS_FOLDER)/stdio/ft_putchar_fd.c \
				$(SRCS_FOLDER)/stdio/ft_putchar.c \
				$(SRCS_FOLDER)/stdio/ft_putendl_fd.c \
				$(SRCS_FOLDER)/stdio/ft_putendl.c \
				$(SRCS_FOLDER)/stdio/ft_putn_fd.c \
				$(SRCS_FOLDER)/stdio/ft_putn.c \
				$(SRCS_FOLDER)/stdio/ft_putnbr_fd.c \
				$(SRCS_FOLDER)/stdio/ft_putnbr.c \
				$(SRCS_FOLDER)/stdio/ft_putnstr_fd.c \
				$(SRCS_FOLDER)/stdio/ft_putnstr.c \
				$(SRCS_FOLDER)/stdio/ft_putstr_fd.c \
				$(SRCS_FOLDER)/stdio/ft_putstr.c \
				$(SRCS_FOLDER)/stdio/get_next_line.c

PRINTF_SRCS	=	$(SRCS_FOLDER)/stdio/ft_printf/*/*.c

# stdlib
SRCS		+=	$(SRCS_FOLDER)/stdlib/ft_atod.c \
				$(SRCS_FOLDER)/stdlib/ft_atoi_base.c \
				$(SRCS_FOLDER)/stdlib/ft_atoi.c \
				$(SRCS_FOLDER)/stdlib/ft_atol.c \
				$(SRCS_FOLDER)/stdlib/ft_atold.c \
				$(SRCS_FOLDER)/stdlib/ft_atoll.c \
				$(SRCS_FOLDER)/stdlib/ft_calloc.c \
				$(SRCS_FOLDER)/stdlib/ft_itoa_base.c \
				$(SRCS_FOLDER)/stdlib/ft_itoa.c \
				$(SRCS_FOLDER)/stdlib/ft_nblen_base.c \
				$(SRCS_FOLDER)/stdlib/ft_nblen.c \
				$(SRCS_FOLDER)/stdlib/ft_random.c \
				$(SRCS_FOLDER)/stdlib/ft_strtol.c \
				$(SRCS_FOLDER)/stdlib/ft_strtoll.c

# string
SRCS		+=	$(SRCS_FOLDER)/string/ft_bzero.c \
				$(SRCS_FOLDER)/string/ft_incharset.c \
				$(SRCS_FOLDER)/string/ft_memccpy.c \
				$(SRCS_FOLDER)/string/ft_memchr.c \
				$(SRCS_FOLDER)/string/ft_memcmp.c \
				$(SRCS_FOLDER)/string/ft_memcpy.c \
				$(SRCS_FOLDER)/string/ft_memmove.c \
				$(SRCS_FOLDER)/string/ft_memset.c \
				$(SRCS_FOLDER)/string/ft_split.c \
				$(SRCS_FOLDER)/string/ft_strcapitalize.c \
				$(SRCS_FOLDER)/string/ft_strcasestr.c \
				$(SRCS_FOLDER)/string/ft_strcat.c \
				$(SRCS_FOLDER)/string/ft_strchr.c \
				$(SRCS_FOLDER)/string/ft_strcmp.c \
				$(SRCS_FOLDER)/string/ft_strcpy.c \
				$(SRCS_FOLDER)/string/ft_strdup.c \
				$(SRCS_FOLDER)/string/ft_stridx.c \
				$(SRCS_FOLDER)/string/ft_strisall.c \
				$(SRCS_FOLDER)/string/ft_strisalnum.c \
				$(SRCS_FOLDER)/string/ft_strisalpha.c \
				$(SRCS_FOLDER)/string/ft_strisascii.c \
				$(SRCS_FOLDER)/string/ft_strisdigit.c \
				$(SRCS_FOLDER)/string/ft_strisprint.c \
				$(SRCS_FOLDER)/string/ft_strjoin.c \
				$(SRCS_FOLDER)/string/ft_strlcat.c \
				$(SRCS_FOLDER)/string/ft_strlcpy.c \
				$(SRCS_FOLDER)/string/ft_strlen.c \
				$(SRCS_FOLDER)/string/ft_strlowcase.c \
				$(SRCS_FOLDER)/string/ft_strmapi.c \
				$(SRCS_FOLDER)/string/ft_strncat.c \
				$(SRCS_FOLDER)/string/ft_strncmp.c \
				$(SRCS_FOLDER)/string/ft_strncpy.c \
				$(SRCS_FOLDER)/string/ft_strndup.c \
				$(SRCS_FOLDER)/string/ft_strnlen.c \
				$(SRCS_FOLDER)/string/ft_strnstr.c \
				$(SRCS_FOLDER)/string/ft_stroc.c \
				$(SRCS_FOLDER)/string/ft_strpbrk.c \
				$(SRCS_FOLDER)/string/ft_strrchr.c \
				$(SRCS_FOLDER)/string/ft_strsjoin.c \
				$(SRCS_FOLDER)/string/ft_strsplit.c \
				$(SRCS_FOLDER)/string/ft_strstr.c \
				$(SRCS_FOLDER)/string/ft_strtrim.c \
				$(SRCS_FOLDER)/string/ft_strupcase.c \
				$(SRCS_FOLDER)/string/ft_substr.c

## Objects
PRINTF_OBJS	=	$(PRINTF_SRCS:.c=.o)
OBJS		=	$(SRCS:.c=.o)

## Include
INCS		=	incs

## Commands
CC			=	clang
CFLAGS		=	-Wall -Wextra -Werror
LIBC		=	ar rc
RM			=	rm -f

.c.o:
			$(MUTE) $(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INCS)

$(NAME):	$(OBJS)
			$(MUTE) $(MAKE) -C $(SRCS_FOLDER)/stdio/ft_printf
			$(MUTE) $(LIBC) $(NAME) $(OBJS) $(PRINTF_OBJS)

all:		$(NAME)

clean:
			$(MUTE) $(MAKE) -C $(SRCS_FOLDER)/stdio/ft_printf clean
			$(MUTE) $(RM) $(OBJS)

fclean:		clean
			$(MUTE) $(MAKE) -C $(SRCS_FOLDER)/stdio/ft_printf fclean
			$(MUTE) $(RM) $(NAME)

re:			fclean all

.PHONY:		$(NAME) all clean fclean re
