/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abborreg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:40:07 by abborreg          #+#    #+#             */
/*   Updated: 2023/10/14 17:15:11 by abborreg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s3;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if ((s3 = (char *) malloc (sizeof(char)
				* (ft_strlen(s1) + ft_strlen(s2) + 1))) == NULL)
		return (NULL);
	while (s1 != NULL && s1[j] != '\0')
		s3[i++] = s1[j++];
	j = 0;
	while (s2 != NULL && s2[j] != '\0')
		s3[i++] = s2[j++];
	s3[i] = '\0';
	return (s3);
}
