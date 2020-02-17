/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:38:01 by cjover-n          #+#    #+#             */
/*   Updated: 2020/02/17 15:55:00 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(const char d)
{
	write(1, &d, 1);
}

void	ft_putstr(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	n;
	int		i;

	n = count * size;
	str = malloc(n);
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (str)
	{
		i = 0;
		while (i != (int)n)
		{
			str[i] = '\0';
			i++;
		}
	}
	return (str);
}
*/
