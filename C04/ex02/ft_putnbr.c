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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	number;

	number = nb;
	if(number < 0)
	{
		ft_putchar('-');
		number = - number;
	}
	if(number >= 10)
		ft_putnbr(number / 10);
	ft_putchar(number % 10 + '0');
}
