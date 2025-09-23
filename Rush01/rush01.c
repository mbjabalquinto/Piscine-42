/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mjabalqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 10:18:49 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/09/14 17:37:28 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "variables.h"

int	ft_check_input(char *argv, char *clean_input);

void	ft_putchar(char c);

int	ft_error(void);

int	ft_check_sudoku(int matrix[4][4]);

void	ft_init_zones(char *clean_input, t_views *g_views);

void	ft_print_board(int matrix[4][4]);

void    enter_values1(int matrix[4][4], t_views *g_views);

void    enter_values2(int matrix[4][4], t_views *g_views);

void	ft_init_zones(char *clean_input, t_views *g_views)
{
	int	i;

	i = 0;
	while (clean_input[i])
	{
		if (i < 4)
		{
			g_views->top[i] = clean_input[i] - '0';
		}
		else if (i < 8)
		{
			g_views->bottom[i - 4] = clean_input[i] - '0';
		}
		else if (i < 12)
		{
			g_views->left[i - 8] = clean_input[i] - '0';
		}
		else if (i < 16)
		{
			g_views->right[i - 12] = clean_input[i] - '0';
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	matrix[4][4];
	int	arg_count;
	t_views	g_views;
	char	clean_input[17];
	
	arg_count = 0;
	if (argc == 2 && ft_check_input(argv[1], clean_input))
	{
		ft_init_zones(clean_input, &g_views);
		ft_check_sudoku(matrix);
		enter_values1(matrix, &g_views);
		enter_values2(matrix, &g_views);
		ft_print_board(matrix);
	}	
	else
	{
		return (ft_error());
	}
	return (0);
}
