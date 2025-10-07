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
#include <stdio.h>

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	char	sign;
	int	number;
	int	len;
	int	index;

	len = ft_strlen(base);
	sign = '\0';
	i = 0;
	number = 0;
	if(base[0] == '\0' || len < 2 || ft_repchar(base) || ft_sign(base))
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
		if(sign == '\0')
			sign = str[i];
		else if(sign != '\0')
			return (0);
		i++;
	}
	while(ft_charbase(str[i], base))
	{
		index = ft_getbasepos(str[i], base);	
		number = number * len + index;
		i++;
	}
	if(sign == '-')
		number = - number;
	return (number);
}

int	main(void)
{
    char *str_hex = "   -FF";
    char *base_hex = "0123456789ABCDEF";
    int  result_hex;

    char *str_bin = "  +10110";
    char *base_bin = "01";
    int  result_bin;

    // --- Prueba con Hexadecimal ---
    result_hex = ft_atoi_base(str_hex, base_hex);
    printf("El resultado de '%s' en base '%s' es: %d\n", str_hex, base_hex, result_hex);
    // Debería imprimir: El resultado de '   -FF' en base '0123456789ABCDEF' es: -255

    // --- Prueba con Binario ---
    result_bin = ft_atoi_base(str_bin, base_bin);
    printf("El resultado de '%s' en base '%s' es: %d\n", str_bin, base_bin, result_bin);
    // Debería imprimir: El resultado de '  +10110' en base '01' es: 22

    return (0);
}
