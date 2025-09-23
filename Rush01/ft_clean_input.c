/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mjabalqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 15:30:29 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/09/14 12:36:27 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

int     ft_error(void)
{
        write(1, "Error\n", 6);
        return (0);
}

int	ft_check_input(char *argv, char *clean_input)
{
	int	i;
	int	num_counter;

	num_counter = 0;
	i = 0;
	while (argv[i])
	{
		if (argv[i] >= '1' && argv[i] <= '4')
		{
			clean_input[num_counter] = argv[i];
			num_counter++;
		}
		i++;
	}
	if (num_counter == 16)
	{
		clean_input[num_counter] = '\0';
		return (1);
	}
	return (0);
}
