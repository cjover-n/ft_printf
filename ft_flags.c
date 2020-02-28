/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 01:36:00 by cjover-n          #+#    #+#             */
/*   Updated: 2020/02/28 19:12:12 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_flags(t_tab *c)
{
	if (c->s[c->arr] == ' ')
	{
		c->f_space = 1;
		c->arr++;
	}
	if (c->s[c->arr] == '-')
	{
		c->f_hyphen = 1;
		c->arr++;
	}
	if (c->s[c->arr] == '+')
	{
		c->f_plus = 1;
		c->arr++;
	}
	if (c->s[c->arr] == '0')
	{
		c->f_zero = 1;
		c->arr++;
	}
	if (ft_isdigit(c->s[c->arr]) == 1)
	{
		c->l = ft_atoi_print(c);
	}
	else if (c->s[c->arr] == '*')
	{
		c->l = va_arg(c->list, int);
		c->arr++;
	}
	if (c->s[c->arr] == '.')
	{
		c->f_dot = 1;
		c->arr++;
	}
	if (c->s[c->arr] >= '0' && c->s[c->arr] <= '9' && c->f_dot == 1)
		c->r = ft_atoi_print(c);
	else if (c->s[c->arr] == '*' && c->f_dot == 1)
	{
		c->r = va_arg(c->list, int);
		c->arr++;
	}
	if (c->s[c->arr] == '%')
	{
		ft_math(c, "%");
		ft_putchar(c, '%');
		ft_void_filler(c);
		c->arr++;
	}
	ft_types(c);
}

void	ft_types(t_tab *c)
{
	if (c->s[c->arr] == ' ')
		c->arr++;
	if (c->s[c->arr] == 'c')
		ft_c(c);
	else if (c->s[c->arr] == 's')
		ft_s(c);
	else if (c->s[c->arr] == 'i' || c->s[c->arr] == 'd' || c->s[c->arr] == 'u'
		|| c->s[c->arr] == 'X' || c->s[c->arr] == 'x' || c->s[c->arr] == 'p')
		ft_id(c);
}

