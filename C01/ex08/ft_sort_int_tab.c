/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mbjabalquinto@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:02:28 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/09/08 13:33:20 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				ft_swap(&tab[j], &tab[i]);
			}
			j++;
		}
		i ++;
		j = i + 1;
	}
	i = 0;
}
/*
int	main(void)
{
	int	tab[5] = {7, 6, 5, 4, 3};
	int	size;

	size = 5;
	ft_sort_int_tab(tab, size);
} */
