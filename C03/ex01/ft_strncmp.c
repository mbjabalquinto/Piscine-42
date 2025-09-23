/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mjabalqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:01:08 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/09/22 16:06:43 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <string.h>
#include <stdio.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - s2[i]);
		if (s1[i] == '\0' || s2[i] == '\0')
			break ;
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	int	result;

	printf("%d", strncmp("hoLa", "holA", 4));
	result = ft_strncmp("hoLa", "holA", 4);
	if (result == 0)
		write(1, "0. Son iguales", 14);
	else if (result > 0)
		write(1, "S1 es mayor que S2", 18);
	else if (result < 0)
		write(1, "S2 es mayor que S1", 18);
	return (0);
}*/
