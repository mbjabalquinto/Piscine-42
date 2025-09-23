/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sudoku.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  mjabalqu <mjabalqu@student.42malaga.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 13:01:43 by strujill          #+#    #+#             */
/*   Updated: 2025/09/14 17:52:38 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_board(int matrix[4][4]);

void	ft_create_table(int matrix[4][4]);

int	ft_check_row(int matrix[4][4], int row, int col, int value);

int	ft_check_col(int matrix[4][4], int row, int col, int value);

void	ft_check_sudoku(int matrix[4][4])
{
	int	row;
	int	col;
	int	value;
	
	row = 0;
	col = 0;
	value = 1;
	ft_create_table(matrix);
	/*
	while (row < 4)
	{
		while (col < 4)
		{
			if (!(ft_check_row(matrix, row, col, value)) 
					&& ft_check_col(matrix, row, col, value))
			{
				value++;
			}
			else
			{
				matrix[row][col] = value;
				value++;	
			}
			col ++;
		}
		row++;
		col = 0;
		value = 1;
	}
	*/
}
