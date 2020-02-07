/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 16:49:13 by cjover-n          #+#    #+#             */
/*   Updated: 2020/02/07 20:48:11 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_tab	*c;

	if (!(c = (t_tab *)malloc(sizeof(t_tab))))
		return (-1);
	va_start(c->list, format);
	c->s = format;
	while (c->s[c->arr])
	{
		ft_zero(c);
		if (c->s[c->arr] == '%')
		{
			c->arr++;
			ft_flags(c);
		}
		else
		{
			ft_putchar(c->s[c->arr], c);
			c->count1++;
		}
		if (c->s[c->arr])
			c->arr++;
	}
	va_end(c->list);
	free(c);
	return (c->len);
}
