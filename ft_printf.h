/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:32:03 by cjover-n          #+#    #+#             */
/*   Updated: 2020/02/04 18:53:25 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>
# define ALLSIMBOLS "cspdiuxX%-.*0123456789"
# define CONVERSIONS "cspudixX%"

typedef struct		s_tab
{
	const char		*s; //donde se mete la cadena formar que se le pasa al printf
	int				arr; //variable para recorrer cosas
	va_list			list; //contiene la información necesaria para va_start, va_arg
	int				len; //retorno de printf
	int				f_hyphen; //flag de guion
	int				f_plus; //flag de signo mas
	int				f_astsk; // flag de asterisco
	int				f_dot; //flag de punto
	int				r; //para lo que haya la DERECHA (right) del punto
	int				l; //para lo que haya a la IZQUIERDA (left) del punto
}					t_tab;

void	ft_putchar(const char d, t_tab *c);
void	ft_putstr(const char *str);
int		ft_printf(const char *format, ...);
void	ft_zero(t_tab *c);
void	ft_flags(t_tab *c);
void	ft_types(t_tab *c);
int		ft_atoi_print(t_tab *c);
char	*ft_itoabase(t_tab *c);
void	ft_c(t_tab *c);
void	ft_s(t_tab *c);
void	ft_id(t_tab *c);

#endif
