/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mbjabalquinto@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:41:10 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/09/12 11:02:13 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (!str || str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	result;

	result = ft_str_is_printable("H@ñA1ARACoLA");
	result = result + '0';
	write(1, &result, 1);
} */
