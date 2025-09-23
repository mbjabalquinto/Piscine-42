/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mjabalqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:02:02 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/09/22 16:19:47 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <string.h>
#include <stdio.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	int	result;

	printf("%d", strcmp("Hola", "hOLA"));
	result = ft_strcmp("Hola", "hOLA");
	if (result == 0)
		write(1, "0. Son iguales", 14);
	else if (result > 0)
		write(1, "S1 es mayor que S2", 18);
	else if (result < 0)
		write(1, "S2 es mayor que S1", 18);
	return (0);
} */
