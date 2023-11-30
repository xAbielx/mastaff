/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abborreg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:56:34 by abborreg          #+#    #+#             */
/*   Updated: 2023/10/13 17:17:34 by abborreg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	num;
	int				i;
	int				isneg;

	isneg = 1;
	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\n' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			isneg = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(isneg * num));
}
/*
#include <stdio.h>
int main() {
	const char *str1 = "   234";
	const char *str2 = "34";
	const char *str3 = " +54";
	const char *str4 = "   -65";

	printf("Entrada: %s, Salida:%d\n", str1, ft_atoi(str1));
	printf("Entrada: %s, Salida:%d\n", str2, ft_atoi(str2));
	printf("Entrada: %s, Salida:%d\n", str3, ft_atoi(str3));
	printf("Entrada: %s, Salida:%d\n", str4, ft_atoi(str4));
}
*/