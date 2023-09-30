/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abborreg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:15:20 by abborreg          #+#    #+#             */
/*   Updated: 2023/09/30 19:04:30 by abborreg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < 0)
	{
		if (*(unsaigned char *)(s1 + i) != (*(unsaigned char *)(s2 + i)))
			return (*(unsaigned char *)(s1 + i) - *(unsaigned char *)(s2 + i));
		i++;
	}
	return (0);
}
