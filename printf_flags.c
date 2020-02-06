/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 15:48:30 by cjover-n          #+#    #+#             */
/*   Updated: 2020/02/06 18:21:54 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_flags(t_tab *c)
{
	if (c->s[c->arr] == '-')
	{
		c->hyphen = 1;
		c->arr++;
	}
	if (c->s[c->arr] == '+')
	{
		c->plus = 1;
		c->arr++;
	}
	if (c->s[c->arr] >= '0' && c->s[c->arr] <= '9')
		c->l = ft_atoi(c);   //modificar este atoi para mover el c->arr
	else if (c->s[c->arr] == '*')
	{
		c->l = va_arg(c->list, int);
		c->arr++;
	}
	if (c->s[c->arr] == '.')
	{
		c->dot = 1;
		c->arr++;
	}
	if (c->s[c->arr] >= '0' && c->s[c->arr] <= '9' && c->dot == 1)
		c->r = ft_atoi(c);
	else if (c->s[c->arr] == '*' && c->dot == 1)
	{
		c->r = va_arg(c->list, int);
		c->arr++;
	}
	ft_types(c);
}

void	ft_hyphen(t_tab *c)
{
	if (c->hyphen = 1)
	{
		
	}
}

void	ft_types(t_tab *c)
{
	if (c->s[c->arr] == ' ')
		c->arr++;
	if (c->s[c->arr] == 'c')
		ft_c; //funcion para esa conversion
	else if (c->s[c->arr] == 's')
		ft_s; //funcion para esa conversion
	else if (c->s[c->arr] == 'i' || c->s[c->arr] == 'd')
		ft_id; //funcion para esa conversion
	else if (c->s[c->arr] == 'u')
		ft_u; //funcion para esa conversion
	else if (c->s[c->arr] == 'x' || c->s[c->arr] == 'X')
		ft_xX; //funcion para esa conversion
	else if (c->s[c->arr] == 'p')
		ft_p; //funcion para esa conversion
c->arr++;
}