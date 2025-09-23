/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 16:58:43 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/09/08 13:00:10 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	middle;

	middle = size / 2;
	i = 0;
	while (size - 1 > middle)
	{
		ft_swap(&tab[i], &tab[size - 1]);
		size --;
		i ++;
	}
	i = 0;
}
/*
int	main(void)
{
	int	size;
	int	tab[7] = {1, 2, 3, 4, 5, 6, 7};

	size = 7;
	ft_rev_int_tab(tab, size);
} */
