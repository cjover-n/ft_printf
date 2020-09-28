/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:32:03 by cjover-n          #+#    #+#             */
/*   Updated: 2020/09/29 00:55:22 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "Libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>

typedef struct		s_tab
{
	const char		*s;
	int				arr;
	va_list			list;
	int				len;
	int				f_hyphen;
	int				f_plus;
	int				f_astsk;
	int				f_dot;
	int				f_pad;
	int				f_zero;
	int				f_space;
	int				f_percent;
	int				r;
	int				l;
	int				num;
	int				width;
	int				f_miki;
	int				f_igor;
	char			*itoa_ret;
	long long int	itoa_n;
	int				itoa_pos;
	int				itoa_base;
	int				itoa_neg;
	int				f_null;
	int				f_control;
	int				f_signpointer;
	int				final_i;
}					t_tab;

int					ft_printf(const char *format, ...);
void				ft_putchar_print(t_tab *c, const char d);
void				ft_putstr_pre(t_tab *c, const char *str);
void				ft_putstr_print(t_tab *c, const char *str);
void				ft_initialize(t_tab *c);
void				ft_flags1(t_tab *c);
void				ft_flags2(t_tab *c);
void				ft_flags3(t_tab *c);
void				ft_types(t_tab *c);
int					ft_atoi_print(t_tab *c);
char				*ft_itoabase(t_tab *c);
void				*ft_itoabase_logic(t_tab *c);
void				ft_c(t_tab *c);
void				ft_s(t_tab *c);
void				ft_id(t_tab *c);
void				ft_do_hyphen(t_tab *c);
void				ft_width(t_tab *c);
void				ft_igor(t_tab *c, char *str);
void				ft_coco(t_tab *c, char *str);
void				ft_miki(t_tab *c);
void				ft_alex(t_tab *c);
void				ft_hexadecimal(t_tab *c, const char *str);
void				ft_bonus(t_tab *c);

#endif
