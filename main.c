/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 23:43:45 by cjover-n          #+#    #+#             */
/*   Updated: 2020/02/12 18:14:13 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	char *f1;
	char *f2;
	int	n;
	char a;

	f1 = "y las violetas azules";
	f2 = "cozaz nazis";
	n = 42;
	a = 'F';
	ft_printf("Las rosas son rojas %-030.*i\n", 5, n);
	//ft_printf("Esta cadena hace %s\n", f2);
	//ft_printf("Este es el número %i\n", n);
	//ft_printf("Esta es la letra de rendir respeto: %c", a);
}
