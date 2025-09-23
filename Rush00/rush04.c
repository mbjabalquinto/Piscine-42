/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvasiliu <bvasiliu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 13:25:01 by bvasiliu          #+#    #+#             */
/*   Updated: 2025/09/06 17:30:05 by bvasiliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_while(int row, int col, int coor_x, int coor_y)
{
	if (col == coor_x && row == coor_y && coor_y != 0 && (col != 0))
	{
		ft_putchar('A');
	}
	else if (col == 0 && row == 0)
	{
		ft_putchar('A');
	}
	else if ((row == 0 || row == coor_y) && (col != 0 && col != coor_x))
	{
		ft_putchar('B');
	}
	else if ((row != 0 && row != coor_y) && (col == 0 || col == coor_x))
	{
		ft_putchar('B');
	}
	else if ((col == coor_x && row == 0) || (col == 0 && row == coor_y))
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	ft_ifnegative(int row, int col, int coor_x, int coor_y)
{
	if (!(coor_y < 0 || coor_x < 0))
	{
		while (row <= coor_y)
		{
			while (col <= coor_x)
			{
				ft_while(row, col, coor_x, coor_y);
				if (col == coor_x)
				{
					ft_putchar('\n');
				}
				col++;
			}
			row++;
			col = 0;
		}
	}
	else
	{
		write(1, "Param error\n", 12);
	}
}

void	rush(int coor_x, int coor_y)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	coor_x--;
	coor_y--;
	ft_ifnegative(row, col, coor_x, coor_y);
}
