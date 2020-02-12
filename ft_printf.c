/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 16:49:13 by cjover-n          #+#    #+#             */
/*   Updated: 2020/02/11 23:19:20 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_tab	*c;

	if (!(c = (t_tab *)malloc(sizeof(t_tab))))
		return (-1); //hace malloc para el tipo declarado en el struct y si no lo hace se sale con -1
	va_start(c->list, format); //permite el acceso a argumentos de funciones variádica
	c->s = format; //se mete la cadena format a c->s (que es un const char)
	c->arr = 0;
	while (c->s[c->arr]) //se crea un array que tiene como base el format y como índice la variable para recorrer cosas
	{//mientras haya cosas en este format...
		ft_zero(c); //se inicializan los flags a cero
		if (c->s[c->arr] == '%') //si encuenta el símbolo de porcentaje...
		{
			c->arr++; //con esto salta el símbolo de porcentaje, para no imprimirlo
			ft_flags(c); //MEOLLO DEL ASUNTO, lectura de flags
		}
		else//si no encuentra el porcentaje...
		{
			ft_putchar(c->s[c->arr]);//simplemente pinta caracteres
			c->len++;//esto no lo tengo del todo claro, pero debería ir aumentando el contador del final
		}
		if (c->s[c->arr])//que mientras que siga habiendo letras que leer...
			c->arr++;//recorra el format
	}
	va_end(c->list);//variable de terminar los va_args
	free(c);//variable de librerar la memoria del struct
	return (c->len);//return número de caracteres leídos
}
