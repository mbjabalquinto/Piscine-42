/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mbjabalquinto@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 16:18:24 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/09/07 16:34:19 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap;
	int	swap2;

	swap = 0;
	swap2 = 0;
	swap = *a / *b;
	swap2 = *a % *b;
	*a = swap;
	*b = swap2;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 4;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	return (0);
} */
