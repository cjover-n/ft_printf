/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:38:01 by cjover-n          #+#    #+#             */
/*   Updated: 2020/07/09 19:10:27 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(t_tab *c, const char d)
{
	write(1, &d, 1);
	c->len++;
}

void	ft_putstr(t_tab *c, const char *str)
{
	int i;

	i = 0;
	if (c->f_zero > 0 && c->f_dot > 0 && str[i] == '0' && c->f_hyphen <= 0)
		ft_putchar(c, '0');
	if (str[i] == '0' && c->f_dot > 0 && c->l <= 0 && c->r <= 0 && c->s[c->arr] != 'p')
		return ;
	if (c->f_dot > 0 && c->l <= 0 && c->r <= 0 && c->s[c->arr] == 'p')
		c->f_null = 1;
	if (str[i] == '0' && c->f_dot > 0 && c->l && c->r <= 0)
	{
		if (c->l > 2)
		{
			write(1, " ", 1);
			c->len++;
		}
		if (c->s[c->arr] == 'p' && c->f_signpointer == 0)
		{
			write(1, "0x", 2);
			c->len = c->len + 2;
			return ;
		}
		else
			return ;
	}
	ft_hexadecimal(c, str);
	while (str[i] != '\0' && (c->r-- || c->s[c->arr] != 's') && c->f_null <= 0)
	{
		write(1, &str[i], 1);
		c->len++;
		i++;
	}
}

