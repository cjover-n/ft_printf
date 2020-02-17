/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 01:36:00 by cjover-n          #+#    #+#             */
/*   Updated: 2020/02/17 15:46:38 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_flags(t_tab *c)
{
	if (c->s[c->arr] == '-')
	{
		c->f_hyphen = 1;
		c->arr++;
		c->len++;
		ft_do_hyphen(c);
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
	if (ft_isdigit(c->s[c->arr]))
	{
		c->arr++;
		c->len++;
	//	ft_width(c);
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

void	ft_do_hyphen(t_tab *c)
{
	if (c->s[c->arr] >= '0' && c->s[c->arr] <= '9')
	{
		ft_atoi_print(c);
	}
}
/*
void	ft_width(t_tab *c)
{
	char *ret;
	char *aux;

	c->width = ft_atoi_print(c);
	aux = ft_calloc(c->width + 1, sizeof(char));

	ret = ft_strjoin((aux - ft_strlen()));
}
*/