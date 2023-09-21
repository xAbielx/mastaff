/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abborreg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:55:41 by abborreg          #+#    #+#             */
/*   Updated: 2023/09/19 20:30:58 by abborreg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *chain, int c)
{
	while (*chain != '\0' && *chain != (char) c)
	{
		chain++;
	}
	if (*chain != (char) c)
	{
		return (NULL);
	}
	else
		return ((char *) chain);
}
