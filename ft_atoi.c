/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 19:29:30 by cjover-n          #+#    #+#             */
/*   Updated: 2020/02/24 13:00:02 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_atoi_print(t_tab *c)
{
	long int	num;

	num = 0;
	while (c->s[c->arr] >= '0' && c->s[c->arr] <= '9')
	{
		num *= 10;
		num += c->s[c->arr] - '0';
		c->arr++;
		if (num > 2147483647)
			return (-1);
	}
	return (num);
}

int		ft_count(long unsigned int n, int base)
{
	long long int		ret;

	ret = 1;
	while (n / base > 0)
	{
		ret++;
		n = n / base;
	}
	return (ret);
}

char	*ft_itoabase(t_tab *c)
{
	char			*ret;
	long long int	n;
	int				pos;
	int				base;

	if (c->s[c->arr] == 'i' || c->s[c->arr] == 'd' || c->s[c->arr] == 'u')
		base = 10;
	if (c->s[c->arr] == 'x' || c->s[c->arr] == 'X' || c->s[c->arr] == 'p')
		base = 16;
	if (c->s[c->arr] == 'i' || c->s[c->arr] == 'd')
		n = va_arg(c->list, int);
	else if (c->s[c->arr] == 'p')
		n = va_arg(c->list, long unsigned int);
	else
		n = va_arg(c->list, unsigned int);
	pos = ft_count(n, base);
	if (!(ret = (char *)malloc(sizeof(char) * pos + 1)))
		return (NULL);
	ret[pos--] = '\0';
	while (pos >= 0)
	{
		if (n % base <= 9)
			ret[pos] = n % base + '0';
		else if ((n % base > 9) && c->s[c->arr] == 'X')
			ret[pos] = n % base + 55;
		else
			ret[pos] = n % base + 87;
		n = n / base;
		pos--;
	}
	return (ret);
}
