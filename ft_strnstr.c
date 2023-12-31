/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abborreg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:32:58 by abborreg          #+#    #+#             */
/*   Updated: 2023/09/25 21:15:11 by abborreg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *tiny, size_t len)
{
	size_t	i;
	size_t	i2;

	if (!*tiny)
		return ((char *)big);
	while (big[i2])
	{
		i = 0;
		while (big[i2 + i] == tiny[i])
		{
			if (!tiny[++i])
				return ((char *)(big + i2));
		}
		i2++;
	}
	return (0);
}
