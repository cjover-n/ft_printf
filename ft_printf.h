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
	const char		*s;
	int				arr;
	va_list			list;
	int				len;
	int				count1;
	int				hyphen;
	int				plus;
	int				astsk;
	int				dot;
	int				r;
	int				l;
}					t_tab;

void	ft_putchar(char d, t_tab *c);
void	ft_putstr(char *str, t_tab *c);
int		ft_printf(const char *format, ...);
void	ft_zero(t_tab *c);
void	ft_flags(t_tab *c);
void	ft_types(t_tab *c);
int		ft_stopspaces(const char *str, int i);
int		ft_atoi(const char *str);
void	ft_c(t_tab *c);
void	ft_s(t_tab *c);
void	ft_id(t_tab *c);

#endif
