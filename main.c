/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 23:43:45 by cjover-n          #+#    #+#             */
/*   Updated: 2020/02/24 13:08:38 by cjover-n         ###   ########.fr       */
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
	n = 2;
	a = 'F';
	
	//ft_printf("Las rosas son rojas %-030.*i\n", 5, n);
	//ft_printf("Las rosas son rojas %3s\n", f1);
	//ft_printf("Esta cadena hace %3i p\n", 1);
	ft_printf("Este es el número %+5.3i.\n", n);
	//ft_printf("Esta es la letra de rendir respeto: %c", a);
	printf("Este es el número %+5.3i.\n", n);
	//ft_printf("%5s", "a");
}
