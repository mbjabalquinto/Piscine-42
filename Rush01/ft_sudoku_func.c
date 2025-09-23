/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mjabalqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:30:17 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/09/14 16:51:29 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_check_row(int matrix[4][4], int row, int col, int value)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while(i < 4)
	{
		if (i != col)
		{
			if (matrix[row][col] == value)
			{
				cont++;
			}
		}
		i++;
		col++;
	}
	if (cont != 0)
		return (1);
	return (0);
}

int	ft_check_col(int matrix[4][4], int row, int col, int value)
{
	int	i;
	int	cont;

	i = 0;
	cont =  0;
	while (i < 4)
	{
		if (i != row)
		{
			if (matrix[row][col] == value)
			{
				cont++;
			}
		}
		i++;
		row++;
	}
	if (cont != 0)
		return (1);
	return (0);
}
/*
int	ft_check_col_rows(int matrix[4][4], int row, int col, int value)
{
	int	check_row;
	int	check_col;

	check_row = 0;
	check_col = 0;
	//Iterar rows.
	while (check_row < 4 && check_col < 4)
	{
		if (check_row != row && value == matrix[check_row][check_col])
		{
			return (1);
		}
	}
	return (0);
	// Iterar columns
	while (i < 4)
	{
		while (j < 4)
		{
			if (matrix[i][j] != matrix[row][col])
		}	
	}


}
*/
void    ft_print_board(int matrix[4][4])
{
        int     i;
        int     j;
        char    c;

        i = 0;
        while(i < 4)
        {
                j = 0;
                while(j < 4)
                {
                        c = matrix[i][j] + '0';
                        write(1, &c, 1);
                        if(j != 3)
                        {
                                write(1, " ", 1);
                        }
                        j++;
                }
                write(1, "\n", 1);
                i++;
        }
}

void    ft_create_table(int matrix[4][4])
{
        int     i;
        int     j;

        i = 0;
        while(i < 4)
        {
                j = 0;
                while(j < 4)
                {
                        matrix[i][j] = 0;
                        j++;
                }
                i++;
        }
}

