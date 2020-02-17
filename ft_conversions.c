/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:35:55 by cjover-n          #+#    #+#             */
/*   Updated: 2020/02/16 22:05:13 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_c(t_tab *c)
{
	int f;

	f = va_arg(c->list, int);
	ft_putchar(f);
	ft_zero(c);
}

void	ft_s(t_tab *c)
{
	char *str;

	str = va_arg(c->list, char *);
	ft_putstr(str);
	ft_zero(c);
}

void	ft_id(t_tab *c)
{
	char *str;

	str = ft_itoabase(c);
	ft_putstr(str);
	ft_zero(c);
}
