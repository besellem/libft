# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: besellem <besellem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/26 00:10:57 by besellem          #+#    #+#              #
#    Updated: 2022/05/01 22:59:49 by besellem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	libftprintf.a

## Main directories
BUILD_DIR	:=	.build
INCS		:=	-I incs -I ../../../incs
SRCS_DIR	:=	srcs
SUB_DIR		:=	conversions \
				family \
				other \
				parser
OBJ_DIR 	:=	$(BUILD_DIR)/obj
DIRS		:=	$(OBJ_DIR) $(addprefix $(OBJ_DIR)/, $(SUB_DIR))


## Main srcs
# SRCS		:=		main.c
SUB_SRC		:=	conv_a.c \
				conv_c.c \
				conv_d.c \
				conv_f.c \
				conv_f_utils.c \
				conv_i.c \
				conv_n.c \
				conv_o.c \
				conv_p.c \
				conv_perc.c \
				conv_s.c \
				conv_u.c \
				conv_x.c
SRCS		:=	$(addprefix conversions/, $(SUB_SRC))
SUB_SRC		:=	ft_asprintf.c \
				ft_dprintf.c \
				ft_printf.c \
				ft_snprintf.c \
				ft_sprintf.c \
				ft_vasprintf.c \
				ft_vasprintf_internal.c \
				ft_vdprintf.c \
				ft_vdprintf_internal.c \
				ft_vprintf.c \
				ft_vsnprintf.c \
				ft_vsprintf.c
SRCS		+=	$(addprefix family/, $(SUB_SRC))
SUB_SRC		:=	common.c \
				common2.c \
				padding.c
SRCS		+=	$(addprefix other/, $(SUB_SRC))
SUB_SRC		:=	ft_get_conversion.c \
				ft_printf_process.c \
				ft_specifiers.c \
				parser_checks1.c \
				parser_checks2.c
SRCS		+=	$(addprefix parser/, $(SUB_SRC))


## Objects
OBJS 		:=	$(SRCS:%.c=$(OBJ_DIR)/%.o)


## Commands
CC			:=	gcc
CFLAGS		:=	-Wall -Wextra -Werror
LIBC		:=	ar rcs
RM			:=	rm -f


# Colors
CLR_COLOR	:= \033[0m
RED			:= \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m


## Compilation
$(NAME):	$(OBJS)
			@echo "Creating $(RED_COLOR)$@ $(CLR_COLOR)..."
			@$(LIBC) $(NAME) $(OBJS)
			@echo "$(GREEN)Compilation $(YELLOW)of $(RED)$@ $(BLUE)done$(CLR_COLOR)"

all:		$(NAME)

bonus:		all

clean:
			@ echo "Deleting $(CYAN)ft_printf $(CLR_COLOR)objs ..."
			@ $(RM) $(OBJS)
			@ $(RM) a.out
			@ $(RM) -rf a.out.dSYM
			@ rm -rf $(BUILD_DIR)

fclean:		clean
			@ echo "Deleting $(CYAN)ft_printf $(CLR_COLOR)library ..."
			@ $(RM) $(NAME)

re:			fclean all

$(BUILD_DIR):
			@ echo "Creating $(RED)$@ $(CLR_COLOR)..."
			@ mkdir $@ $(DIRS)

$(OBJ_DIR)/%.o:$(SRCS_DIR)/%.c | $(BUILD_DIR)
			@ echo "Compiling $(YELLOW)$< $(CLR_COLOR)..."
			@ $(CC) $(CFLAGS) -c $< -o $@ $(INCS)

.PHONY:		all bonus clean fclean re
