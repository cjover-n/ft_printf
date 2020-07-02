/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:35:55 by cjover-n          #+#    #+#             */
/*   Updated: 2020/07/02 20:11:47 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_c(t_tab *c)
{
	int f;

	f = va_arg(c->list, int);
	ft_putchar(c, f);
	ft_zero(c);
}

void	ft_s(t_tab *c)
{
	char	*str;

	if (!(str = va_arg(c->list, char *)))
		str = "(null)";
	ft_igor(c, str);
	if (c->f_dot == 0)
		ft_miki(c);
	ft_putstr(c, str);
	ft_alex(c);
}

void	ft_id(t_tab *c)
{
	char	*str;

	str = ft_itoabase(c);
	ft_igor(c, str);
	if (c->itoa_neg > 0)
		ft_putchar(c, '-');
	ft_miki(c);
	ft_putstr(c, str);
	ft_alex(c);
}
