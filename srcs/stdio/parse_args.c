/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:35:30 by besellem          #+#    #+#             */
/*   Updated: 2022/03/15 23:11:26 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_ctype.h"
#include "parse_args.h"

struct	s_options_internal
{
	char		opt;
	uint64_t	mask;
};

/*
** API's utils
*/

static const struct s_options_internal	g_opts[] = {
	// uppercase letters
	{'A', OPT_A}, {'B', OPT_B}, {'C', OPT_C}, {'D', OPT_D}, {'E', OPT_E},
	{'F', OPT_F}, {'G', OPT_G}, {'H', OPT_H}, {'I', OPT_I}, {'J', OPT_J},
	{'K', OPT_K}, {'L', OPT_L}, {'M', OPT_M}, {'N', OPT_N}, {'O', OPT_O},
	{'P', OPT_P}, {'Q', OPT_Q}, {'R', OPT_R}, {'S', OPT_S}, {'T', OPT_T},
	{'U', OPT_U}, {'V', OPT_V}, {'W', OPT_W}, {'X', OPT_X}, {'Y', OPT_Y},
	{'Z', OPT_Z},
	// lowercase letters
	{'a', OPT_A_MIN}, {'b', OPT_B_MIN}, {'c', OPT_C_MIN}, {'d', OPT_D_MIN},
	{'e', OPT_E_MIN}, {'f', OPT_F_MIN}, {'g', OPT_G_MIN}, {'h', OPT_H_MIN},
	{'i', OPT_I_MIN}, {'j', OPT_J_MIN}, {'k', OPT_K_MIN}, {'l', OPT_L_MIN},
	{'m', OPT_M_MIN}, {'n', OPT_N_MIN}, {'o', OPT_O_MIN}, {'p', OPT_P_MIN},
	{'q', OPT_Q_MIN}, {'r', OPT_R_MIN}, {'s', OPT_S_MIN}, {'t', OPT_T_MIN},
	{'u', OPT_U_MIN}, {'v', OPT_V_MIN}, {'w', OPT_W_MIN}, {'x', OPT_X_MIN},
	{'y', OPT_Y_MIN}, {'z', OPT_Z_MIN},
	// numbers
	{'0', OPT_0}, {'1', OPT_1}, {'2', OPT_2}, {'3', OPT_3}, {'4', OPT_4},
	{'5', OPT_5}, {'6', OPT_6}, {'7', OPT_7}, {'8', OPT_8}, {'9', OPT_9},
	{0, 0}
};

static bool			_option_needs_arg(const char *opts_to_search, char arg)
{
	for (size_t i = 0; opts_to_search[i]; ++i)
	{
		if (opts_to_search[i] == arg)
			return (opts_to_search[i + 1] == ':');
	}
	return (false);
}

static void			*_get_n_arg(va_list ap, size_t n)
{
	va_list	cpy;
	void	*ptr = NULL;

	va_copy(cpy, ap);
	for (size_t i = 0; i < n; ++i)
		ptr = va_arg(cpy, void *);
	va_end(cpy);
	return (ptr);
}

static size_t		_get_arg_number(const char *opts_to_search, char opt)
{
	size_t	n = 1; // +1 for itself

	for (size_t i = 0; opts_to_search[i]; ++i)
	{
		if (opts_to_search[i] == ':')
			++n;
		if (opts_to_search[i] == opt)
			break ;
	}
	return (n);
}

static inline int	_is_valid_format(int c)
{
	return (ft_isalnum(c) || c == ':');
}


/*
** API
*/

char			find_option_symbol(uint64_t mask)
{
	for (size_t i = 0; g_opts[i].opt != 0; ++i)
	{
		if (g_opts[i].mask == mask)
			return (g_opts[i].opt);
	}
	return (0);
}

uint64_t		find_option_mask(char opt)
{
	for (size_t i = 0; g_opts[i].opt != 0; ++i)
	{
		if (g_opts[i].opt == opt)
			return (g_opts[i].mask);
	}
	return (0);
}

inline bool		option_set(uint64_t opts, uint64_t mask)
{
	return ((opts & mask) != 0);
}

t_parsing_opts	parse_args(
	int argc,
	char **argv,
	bool return_on_illegal,
	const char *options_haystack,
	...
)
{
	t_parsing_opts	options = {0};
	va_list			ap;
	void			*arg_ptr;
	size_t			arg_number;
	char			*tmp_opt;
	int				i = 1;
	size_t			j;

	if (ft_strisall(options_haystack, _is_valid_format) == false)
		return (options);

	va_start(ap, options_haystack);
	for ( ; i < argc; ++i)
	{
		tmp_opt = argv[i];
		if (tmp_opt[0] == '-' && tmp_opt[1] != '\0')
		{
			for (j = 1; tmp_opt[j]; ++j)
			{
				if (ft_stroc(options_haystack, tmp_opt[j]) == 0)
				{
					if (return_on_illegal)
					{
						options.opts = find_option_mask(tmp_opt[j]) | OPT_ILLEGAL;
						va_end(ap);
						return (options);
					}
					else
						options.opts |= OPT_ILLEGAL;
				}
				else
				{
					options.opts |= find_option_mask(tmp_opt[j]);
					if (_option_needs_arg(options_haystack, tmp_opt[j]))
					{
						if (tmp_opt[j + 1] != '\0')
						{
							if (return_on_illegal)
							{
								options.opts = find_option_mask(tmp_opt[j]) | OPT_ILLEGAL;
								va_end(ap);
								return (options);
							}
							else
								options.opts |= OPT_ILLEGAL;
							break ;
						}
						++i;
						arg_number = _get_arg_number(options_haystack, tmp_opt[j]);
						arg_ptr = _get_n_arg(ap, arg_number);
						*(char **)(void *)arg_ptr = (char *)argv[i];
					}
				}
			}
		}
		else
			break ; // done with options
	}
	options.end_pos = i;
	va_end(ap);
	return (options);
}
