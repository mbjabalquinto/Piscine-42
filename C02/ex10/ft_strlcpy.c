/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mbjabalquinto@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:02:52 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/09/15 18:25:41 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_src;

	size_src = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (size_src);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (size_src);
}
/*
int	main(void)
{
	unsigned int	size;
	char		dest[10];

	size = ft_strlcpy(dest, "Holacaracola", 10);
	if (size > 10)
		write(1, "The string has been truncated", 30);
	else
		write(1, "The string hasnt been truncated", 32);
} */
