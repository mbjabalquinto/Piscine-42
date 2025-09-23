/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mbjabalquinto@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:47:22 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/09/12 11:09:54 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	if (!str || str[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char string[] = "hola@caracola";
	char	*uppercase = ft_strupcase(string);
	int	i;
	i = 0;
	while(uppercase[i] != '\0')
	{
		write(1, &uppercase[i], 1);
		i++;		
	}
} */
