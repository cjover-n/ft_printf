/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_types.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 18:03:45 by cjover-n          #+#    #+#             */
/*   Updated: 2020/02/08 18:04:06 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_types(t_tab *c)
{
	if (c->s[c->arr] == ' ')
		c->arr++;
	if (c->s[c->arr] == 'c')
		ft_c(c);
	else if (c->s[c->arr] == 's')
		ft_s(c);
	else if (c->s[c->arr] == 'i' || c->s[c->arr] == 'd')
		ft_id(c);
	/*
	else if (c->s[c->arr] == 'u')
		ft_u; //funcion para esa conversion
	else if (c->s[c->arr] == 'x' || c->s[c->arr] == 'X')
		ft_xX; //funcion para esa conversion
	else if (c->s[c->arr] == 'p')
		ft_p; //funcion para esa conversion
	c->arr++;
	*/
}