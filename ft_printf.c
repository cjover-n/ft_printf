
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 16:03:26 by cjover-n          #+#    #+#             */
/*   Updated: 2020/01/24 17:03:s47 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(char *format, ...)
{
	t_tab	*c;
	
	if (!(c = (t_tab *)malloc(sizeof(t_tab))))
		return (-1);
	va_start(c->hola, format);
	c->s = format;
	while (c->s[c->arr])
	{
		ft_init(c);
		if (c->s[c->arr] == '%')
		{
			c->arr++;
			ft_flags(c);
		}
		else
		{
			ft_putchar(c->s[c->arr]);
			c->count1++;
		}
		if (c->s[c->arr])
			c->arr++;
	}
	va_end(c->hola);
	free(c);
	return (c->len);
	
	/*va_list valist; // declaramos variable para recoger los argumentos
	int leng = 0; // variable donde devolveremos el numero de caracteres imprimidos
	char *string; // variable donde guardaremos diferentes el argumento que nos pasan como char * %s
	va_start(valist, str); // iniciamos los argumentos
	while (*str != '\0') // recorremos hasta el fin del string
	{
		if (*str == '%') // cuando queramos poner una variable que va siempre despues de un % entrara
		{
			str++;
			if (*str == 's') // si lo que nos llega es un string
			{
				string = va_arg(valist, char *); // recogemos el argumento indicandole que tipo de variable vamos a recoger junto con nuestra variable Va_list
				write (1, string, strlen(string)); // escribimos hasta el final de la frase con strlen
				leng += strlen(string); // sumamos el numero de caracteres escritos
			}
			str++;
		}
		else // si es un % , simplemente escribimos la letra actual y avanzamos
		{
			write (1, str, 1);
			str++;
			leng++;
		}
	}
	return (leng);
	*/
}
