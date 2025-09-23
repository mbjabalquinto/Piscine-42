/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mbjabalquinto@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 12:42:23 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/09/05 09:27:30 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, char d)
{
	while (d <= '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if (!((a == '9') && (b == '8') && (c == '9') && (d == '9')))
			write(1, ",", 1);
		d++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			c = a;
			d = b + 1;
			while (c <= '9')
			{
				ft_putchar(a, b, c, d);
				d = '0';
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
} */
