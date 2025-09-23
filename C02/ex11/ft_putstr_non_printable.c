/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mbjabalquinto@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 10:17:39 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/09/15 20:06:43 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_init_chars(unsigned char *chars)
{
	chars[0] = 'a';
	chars[1] = 'b';
	chars[2] = 'c';
	chars[3] = 'd';
	chars[4] = 'e';
	chars[5] = 'f';
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchange(unsigned char c)
{
	unsigned char	quotient;
	unsigned char	remainder;
	unsigned char	chars[6];

	ft_init_chars(chars);
	if (!(c >= 32 && c <= 126))
	{
		quotient = c / 16;
		remainder = c % 16;
		ft_putchar('\\');
		if (quotient < 10)
			ft_putchar(quotient + '0');
		else
			ft_putchar(chars[quotient - 10]);
		if (remainder < 10)
			ft_putchar(remainder + '0');
		else
			ft_putchar(chars[remainder - 10]);
	}
	else
		ft_putchar(c);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;
	int				i;

	i = 0;
	while (str[i] != '\0')
	{
		c = (unsigned char)str[i];
		ft_putchange(c);
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	ft_putchar('\n');
	ft_putstr_non_printable("¿cómo estás en esta bonita mañana de primavera?");
	return (0);
}*/
