/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 23:43:45 by cjover-n          #+#    #+#             */
/*   Updated: 2020/07/13 19:39:09 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	printf("Printf retorna: %i\n", printf("%.*s", -3, "hello"));
	printf("ft_printf retorna: %i\n", ft_printf("%.*s", -3, "hello"));
}
