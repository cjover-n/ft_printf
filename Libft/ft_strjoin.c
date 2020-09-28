/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 18:58:38 by cjover-n          #+#    #+#             */
/*   Updated: 2020/02/17 16:04:09 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*new;
	unsigned int	i;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	if (!(malloc(sizeof(char) * (i + 1))))
		return (NULL);
	else
		new = malloc(sizeof(char) * (i + 1));
	ft_strcpy(new, (char *)s1);
	ft_strcat(new, (char *)s2);
	if (new == NULL)
		return (NULL);
	return (new);
}
