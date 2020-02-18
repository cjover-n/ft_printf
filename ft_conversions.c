/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:35:55 by cjover-n          #+#    #+#             */
/*   Updated: 2020/02/18 22:13:10 by cjover-n         ###   ########.fr       */
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
	char	*str;
	char	*ret;

	ret = NULL;
	str = va_arg(c->list, char *);
	ft_zero(c);
	ft_void_filler(c, str, ret);
}

void	ft_id(t_tab *c)
{
	char	*str;
	char	*ret;

	ret = NULL;
	str = ft_itoabase(c);
	ft_zero(c);
	ft_void_filler(c, str, ret);
}

void	ft_void_filler(t_tab *c, char *str, char *ret)
{
	char	*aux;
	int		aux2;

	if ((aux2 = c->width - ft_strlen(str)) < 0)//aux2 almacena la diferencia entre el número que marca el "flag" el ancho de la cadena cogida con va_arg
		aux2 = 0;//si es negativo pasa e imprime todo
	aux = ft_calloc(aux2 + ft_strlen(str) + 1, sizeof(char));//aquí se reserva memoria de chars del tamaño de la diferencia de antes mas la longitud de la cadena
	aux = ft_memset(aux, ' ', aux2);//rellenar espacio de vacíos
	ret = ft_strjoin(aux, str);//juntar espacio lleno de vacíos con la cadena
	ft_putstr(ret);//MAGIA!
	free(ret);
	free(aux);
}
