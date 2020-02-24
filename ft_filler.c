/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:54:55 by cjover-n          #+#    #+#             */
/*   Updated: 2020/02/24 12:39:50 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*  LA CACA
void	ft_void_filler_left(t_tab *c, char *str)
{
	char	*aux;
	int		aux2;
	char	*ret;

	if ((aux2 = c->width - ft_strlen(str)) < 0)//aux2 almacena la diferencia entre el número que marca el "flag" el ancho de la cadena cogida con va_arg
		aux2 = 0;//si es negativo pasa e imprime todo
	aux = ft_calloc(aux2 + ft_strlen(str) + 1, sizeof(char));//aquí se reserva memoria de chars del tamaño de la diferencia de antes mas la longitud de la cadena
	aux = ft_memset(aux, ' ', aux2);//rellenar espacio de vacíos
	ret = ft_strjoin(aux, str);//juntar espacio lleno de vacíos con la cadena
	ft_putstr(ret);//MAGIA!
	free(ret);
	free(aux);
}
*/

void 	ft_miki(t_tab *c)
{
	while (c->f_miki-- > 0)
	{
		ft_putchar('0');
	}
}

void 	ft_igor(t_tab *c, char *str)
{
	if ((c->f_miki = c->r - ft_strlen(str)) < 0)
		c->f_miki = 0;
	if (c->s[c->arr] != 's' && (c->f_igor = c->width - c->f_miki - ft_strlen(str)) < 0)
		c->f_igor = 0;
	if (c->s[c->arr] == 's' && (c->r < (int)ft_strlen(str)))
		c->r = (int)ft_strlen(str);
	if (c->s[c->arr] == 's' && (c->f_igor = c->width - c->r) < 0)
		c->f_igor = 0;
	if (c->f_hyphen == 0)
	{
		while (c->f_igor-- > 0)
		{
			ft_putchar(' ');
		}
	}
}

void 	ft_alex(t_tab *c)
{
	if (c->f_hyphen == 1)
	{
		while (c->f_igor-- > 0)
		{
			ft_putchar(' ');
		}
	}
}
