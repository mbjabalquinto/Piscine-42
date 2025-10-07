/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mbjabalquinto@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:06:54 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/09/05 09:22:38 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_repchar(char *base)
{
	int	i;
	int	j;

	i = 0;
	while(base[i] != '\0')
	{
		j = i + 1;
		while(base[j] != '\0')
		{	
			if(base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_sign(char *base)
{
	int	i;

	i = 0;
	while(base[i] != '\0')
	{
		if(base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	number;
	int	len;

	len = ft_strlen(base);
	number = nbr;
	if(base[0] == '\0' || len < 2 || ft_repchar(base) || ft_sign(base))
		return;
	if(number < 0)
	{
		ft_putchar('-');
		number = - number;
	}
	if(number >= len)
		ft_putnbr_base(number / len, base);
	ft_putchar(base[number % len]);
}
