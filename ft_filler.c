/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:54:55 by cjover-n          #+#    #+#             */
/*   Updated: 2020/02/28 19:00:48 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_zero_filler(t_tab *c)
{
	while (c->f_zerofiller-- > 0)
	{
		ft_putchar(c, '0');
	}
}

void	ft_math(t_tab *c, char *str)
{
	if (c->s[c->arr] != 's' && ((c->f_zerofiller = c->r - ft_strlen(str)) < 0))
		c->f_zerofiller = 0;
	if (c->s[c->arr] != 's' && (c->f_math = c->l - c->f_zerofiller
		- ft_strlen(str)) < 0)
		c->f_math = 0;
	if (c->s[c->arr] == 's' && (c->r > (int)ft_strlen(str)))
		c->r = (int)ft_strlen(str);
	if (c->s[c->arr] == 's' && (c->f_math = c->l - c->r) < 0)
		c->f_math = 0;
	if (c->f_hyphen == 0)
	{
		while (c->f_math-- > 0)
		{
			ft_putchar(c, ' ');
		}
	}
}

void	ft_void_filler(t_tab *c)
{
	if (c->f_hyphen == 1)
	{
		while (c->f_math-- > 0)
		{
			ft_putchar(c, ' ');
		}
	}
}
