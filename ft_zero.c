/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 22:02:04 by cjover-n          #+#    #+#             */
/*   Updated: 2020/07/07 19:56:40 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_zero(t_tab *c)
{
	c->f_hyphen = 0;
	c->f_plus = 0;
	c->f_astsk = 0;
	c->f_dot = 0;
	c->f_zero = 0;
	c->f_pad = 0;
	c->width = 0;
	c->r = 0;
	c->l = 0;
	c->itoa_neg = 0;
	c->f_null = 0;
	c->f_control = 0;
}
