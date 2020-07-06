/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:54:55 by cjover-n          #+#    #+#             */
/*   Updated: 2020/07/06 18:08:45 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_miki(t_tab *c)
{
	if (c->itoa_neg > 0 && c->f_dot == 0)
		c->f_miki--;
	while (c->f_miki-- > 0)
	{
		ft_putchar(c, '0');
	}
}

void	ft_igor(t_tab *c, char *str)
{
	if (c->s[c->arr] != 's' && (c->f_miki = c->r - ft_strlen(str)) < 0)
		c->f_miki = 0;
	else if (c->s[c->arr] == 's' && (c->f_miki = c->r) > (int)ft_strlen(str))
		c->f_miki = 0;
	if ((c->f_igor = c->l - c->f_miki - ft_strlen(str)) < 0)
		c->f_igor = 0;
	if (c->s[c->arr] == 's' && ((c->r > (int)ft_strlen(str) ||
		(c->r == 0 && c->f_dot == 0))))
		c->r = (int)ft_strlen(str);
	if (c->s[c->arr] == 's' && (c->f_igor = c->l - c->r) < 0)
		c->f_igor = 0;
	if (c->f_zero && c->f_hyphen == 0 && c->l > (int)ft_strlen(str))
	{
		c->f_miki = c->f_igor;
		c->f_igor = 0;
	}
	if (c->itoa_neg > 0)
		c->f_igor--;
	if (c->f_hyphen == 0)
	{
		if (c->f_zero == 1 && c->f_dot == 1)
		{
			c->f_igor = c->l - c->r;
			if (c->itoa_neg > 0 && c->l > (int)ft_strlen(str))
			{
				c->f_igor--;
				c->f_miki = c->l - c->r - (int)ft_strlen(str);
			}
			if (c->r < (int)ft_strlen(str))
				c->f_igor--;
		}
		while (c->f_igor-- > 0)
			ft_putchar(c, ' ');
	}
}

void	ft_alex(t_tab *c)
{
	if (c->f_hyphen == 1)
	{
		while (c->f_igor-- > 0)
		{
			ft_putchar(c, ' ');
		}
	}
}

/*
void	ft_cote(t_tab *c, char *str)
{
	if (c->f_zero == 0)
	{
		if (ft_strlen(str) > 1)
			c->f_igor = c->f_igor - ft_strlen(str);
		while (c->f_igor-- > 0)
			ft_putchar(c, ' ');
	}
	else
	{
		while (c->f_igor-- > 0)
			ft_putchar(c, '0');
	}
}

void	ft_vulpes(t_tab *c, char *str)
{
	char	*str2;

	str2 = ft_strdup(ft_itoa(c->r));
	ft_strtrim(str, str2);
}
*/