/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 15:00:09 by besellem          #+#    #+#             */
/*   Updated: 2021/04/16 15:03:55 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# include <stdlib.h>
# include <math.h>

/*
** -- DEFINES --
**
** PI constant and its variables
** Scheme:
**
**        T_PI_2
**          |   T_PI_4
**          | /
** T_PI ---- ---- T_2PI
**          |
**          |
**       T_3PI_2
*/

/*
** PI/4
*/
# define T_PI_4 0.785398163397448309615660845819875721

/*
** PI/2
*/
# define T_PI_2 1.57079632679489661923132169163975144

/*
** PI
*/
# define T_PI 3.14159265358979323846264338327950288

/*
** (3*PI)/2 or PI+(PI/2)
*/
# define T_3PI_2 4.71238898038468967399694520281627774

/*
** 2*PI
*/
# define T_2PI 6.28318530717958623199592693708837032

/*
** 1/PI
*/
# define T_1_PI 0.318309886183790671537767526745028724

/*
** 2/PI
*/
# define T_2_PI 0.636619772367581343075535053490057448

/*
** E constant
*/
# define T_E 2.71828182845904523536028747135266250

/*
** -- PROTOTYPES --
** Piscine
*/
size_t		ft_factorial(size_t nb);
int			ft_find_next_prime(int nb);
int			ft_is_prime(long long nb);
int			ft_nblen(long long n);
int			ft_nblen_base(long long n, int base);
long long	ft_power(long long nb, int power);

/*
** Almost real ones
*/
double		ft_pow(double nb, int power);

#endif
