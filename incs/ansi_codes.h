/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ansi_codes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:08:23 by besellem          #+#    #+#             */
/*   Updated: 2021/10/29 01:23:31 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANSI_CODES_H
# define ANSI_CODES_H

/*
** -- COLORS --
** Normal
*/
# define BLACK      "\e[0;30m"
# define RED        "\e[0;31m"
# define GREEN      "\e[0;32m"
# define YELLOW     "\e[0;33m"
# define BLUE       "\e[0;34m"
# define PURPLE     "\e[0;35m"
# define CYAN       "\e[0;36m"
# define GRAY       "\e[0;37m"

/*
** Bold
*/
# define B_BLACK    "\e[1;30m"
# define B_RED      "\e[1;31m"
# define B_GREEN    "\e[1;32m"
# define B_YELLOW   "\e[1;33m"
# define B_BLUE     "\e[1;34m"
# define B_PURPLE   "\e[1;35m"
# define B_CYAN     "\e[1;36m"
# define B_GRAY     "\e[1;37m"

/*
** Foreground
*/
# define F_BLACK    "\e[40m"
# define F_RED      "\e[41m"
# define F_GREEN    "\e[42m"
# define F_YELLOW   "\e[43m"
# define F_BLUE     "\e[44m"
# define F_PURPLE   "\e[45m"
# define F_CYAN     "\e[46m"
# define F_GRAY     "\e[47m"

/*
** -- CLEAR CODES --
*/
# define CLR_COLOR  "\e[0m"
# define CLR_LINE   "\e[2K\r"
# define CLR_SCREEN "\e[2J\033[H"

/*
** -- OTHERS --
*/
/* play terminal's bell sound */
# define BELL              "\a"

/* make the cursor invisible */
# define INVISIBLE_CURSOR  "\e[?25l"

/* make the cursor visible (again) */
# define VISIBLE_CURSOR    "\e[?25h"

#endif
