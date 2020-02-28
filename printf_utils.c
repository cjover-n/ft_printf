/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:38:01 by cjover-n          #+#    #+#             */
/*   Updated: 2020/02/28 18:59:41 by cjover-n         ###   ########.fr       */
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
	while (str[i] != '\0' && (c->r-- || c->s[c->arr] != 's'))
	{
		write(1, &str[i], 1);
		c->len++;
		i++;
	}
}
