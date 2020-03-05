/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 23:43:45 by cjover-n          #+#    #+#             */
/*   Updated: 2020/03/05 19:48:39 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
void	ft_putnbr(int nb)
{
	unsigned int	number;

	number = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		number = nb * -1;
	}
	else
	{
		number = nb;
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
	}
	ft_putchar(number % 10 + 48);
}
*/

int		main(void)
{
	char *f1;
	char *f2;
	int	n;
	char a;
	int n1;
	int n2;

	f1 = "y las violetas azules";
	f2 = "cozaz nazis";
	n = 23;
	a = 'F';
	n1 = 4;
	n2 = 3;
	
	//ft_printf("Las rosas son rojas %-030.*i\n", 5, n);
	//ft_printf("Las rosas son rojas %3s\n", f1);
	//ft_printf("Esta cadena hace %3i p\n", 1);
	//ft_printf("Este es el número %5.3i\n", n);

	printf("Printf retorna: %i\n", printf("%05i", 5));
	printf("ft_printf retorna: %i\n", ft_printf("%05i", 5));
}
