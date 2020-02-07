/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:35:55 by cjover-n          #+#    #+#             */
/*   Updated: 2020/02/07 20:52:21 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_c(t_tab *c)
{
	ft_putchar(c->s[c->arr], c);
}

void	ft_s(t_tab *c)
{
	ft_putstr(c->s[c->arr], c);
}

void	ft_id(t_tab *c)
{
	ft_atoi(&c->s[c->arr]);
}
