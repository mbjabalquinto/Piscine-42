/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mbjabalquinto@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:34:51 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/09/15 15:53:11 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	if (!str || str[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "HOLaCA@RACOLA";
	int	i;	
	
	char	*presult = ft_strlowcase(str);
	i = 0;
	while(presult[i] != '\0')
	{
		write(1, &presult[i], 1);
		i++;
	}
} */
