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
# include "../Libft/libft.h"

typedef struct		s_tab
{
	const char		*s;
	int				arr;
	va_list			hola;
	int				len;
	int				count1;
	char			flags;
}					t_tab;

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_printf(char *format, ...);

#endif
