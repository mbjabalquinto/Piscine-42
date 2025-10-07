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
#include "ft.h"

int	ft_getbasepos(char c, char *base)
{
	int	i;

	i = 0;
	while(base[i] != '\0')
	{
		if(base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_charbase(char c, char *base)
{
	int	i;

	i = 0;
	while(base[i] != '\0')
	{
		if(base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

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


int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while(base[i] != '\0')
		i++;
	return (i);
}

