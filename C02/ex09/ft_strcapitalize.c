/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mbjabalquinto@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:14:40 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/09/16 16:09:49 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
int	ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_is_alfanum(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	prev_is_alfanum;

	i = 0;
	if (!str || str[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		prev_is_alfanum = (i > 0 && ft_is_alfanum(str[i - 1]));
		if (i == 0 && (ft_is_lowercase(str[i])))
			str[i] = str[i] - 32;
		else if (prev_is_alfanum && ft_is_uppercase(str[i]))
			str[i] = str[i] + 32;
		else if (!(prev_is_alfanum) && ft_is_lowercase(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "42mots quarante-deux; cinquante+et+un";
	char	*p = ft_strcapitalize(str);
	int	i;
	i = 0;
	while (p[i] != '\0')
	{
		write(1, &p[i], 1);
		i++;
	}
} */
