/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_rules.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mjabalqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:57:45 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/09/14 17:51:27 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "variables.h"

void	enter_values1(int matrix[4][4], t_views	*g_views)
{
	int	current_row;

	current_row = 0;
	while (current_row < 4)
	{
		if (g_views->left[current_row] == 1)
		{
			matrix[current_row][0] = 4;
		}
		if (g_views->right[current_row] == 1)
                {
                        matrix[current_row][3] = 4;
                }
		if (g_views->left[current_row] == 4)
                {
                        matrix[current_row][0] = 1;
                        matrix[current_row][1] = 2;
			matrix[current_row][2] = 3;
			matrix[current_row][3] = 4;
                }
                if (g_views->right[current_row] == 4)
                {
                        matrix[current_row][0] = 4;
                        matrix[current_row][1] = 3;
                        matrix[current_row][2] = 2;
                        matrix[current_row][3] = 1;
                }
		current_row++;
	}
}

void    enter_values2(int matrix[4][4], t_views *g_views)
{
        int     current_col;

        current_col = 0;
        while (current_col < 4)
        {
                if (g_views->top[current_col] == 1)
                {
                        matrix[0][current_col] = 4;
                }
                if (g_views->bottom[current_col] == 1)
                {
                        matrix[3][current_col] = 4;
                }
                if (g_views->top[current_col] == 4)
                {
                        matrix[0][current_col] = 1;
                        matrix[1][current_col] = 2;
                        matrix[2][current_col] = 3;
                        matrix[3][current_col] = 4;
                }
                if (g_views->bottom[current_col] == 4)
                {
                        matrix[0][current_col] = 4;
                        matrix[1][current_col] = 3;
                        matrix[2][current_col] = 2;
                        matrix[3][current_col] = 1;
                }
	current_col++;
        }
}

