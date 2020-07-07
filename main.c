/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 23:43:45 by cjover-n          #+#    #+#             */
/*   Updated: 2020/07/07 20:09:36 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	printf("Printf retorna: %i\n", printf("%2.p", NULL));
	printf("ft_printf retorna: %i\n", ft_printf("%2.p", NULL));
}
