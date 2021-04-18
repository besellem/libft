/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 15:00:09 by besellem          #+#    #+#             */
/*   Updated: 2021/04/18 16:09:46 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# include <stdlib.h>
# include <math.h>
# include <stdint.h>

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
** -- TYPEDEFS & DATA STRUCTURES --
*/
union	u_dbl80
{
	long double		ld;
	struct
	{
		uint64_t	m;
		uint16_t	exp;
	}	xtract;
};

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
** (with their type variants)
*/
int			ft_isnanf(float x);
int			ft_isnan(double x);
int			ft_isnanl(long double x);

int			ft_isinff(float x);
int			ft_isinfd(double x);
int			ft_isinfl(long double x);
int			ft_isinf(long double x, size_t size);

int			ft_signbitf(float x);
int			ft_signbit(double x);

float		ft_copysignf(float x, float y);
double		ft_copysign(double x, double y);

float		ft_ceilf(float f);
double		ft_ceil(double f);

float		ft_floorf(float x);
double		ft_floor(double x);

float		ft_roundf(float x);
double		ft_round(double x);

long int	ft_lround(double x);
long int	ft_lroundf(float x);

float		ft_truncf(float x);
double		ft_trunc(double x);

float		ft_fmodf(float x, float y);
double		ft_fmod(double x, double y);

float		ft_fdimf(float x, float y);
double		ft_fdim(double x, double y);
long double	ft_fdiml(long double x, long double y);

float		ft_fmaxf(float x, float y);
double		ft_fmax(double x, double y);
long double	ft_fmaxl(long double x, long double y);

float		ft_fminf(float x, float y);
double		ft_fmin(double x, double y);
long double	ft_fminl(long double x, long double y);

float		ft_fmaf(float x, float y, float z);
double		ft_fma(double x, double y, double z);
long double	ft_fmal(long double x, long double y, long double z);

int			ft_abs(int i);
float		ft_fabsf(float x);
double		ft_fabs(double x);
long double	ft_fabsl(long double x);

float		ft_modff(float value, float *iptr);
double		ft_modf(double value, double *iptr);

double		ft_pow(double nb, int power);

#endif
