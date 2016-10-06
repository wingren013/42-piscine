/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 11:24:48 by anieto            #+#    #+#             */
/*   Updated: 2016/08/28 22:47:47 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rushfuncs.h>

void	print(int x, int y, int row, int col)
{
	if ((row == 0 && col == 0))
		ft_putchar('/');
	else if ((row == 0 && col == x - 1) || (row == y - 1 && col == 0))
		ft_putchar('\\');
	else if ((row == y - 1 && col == x - 1))
		ft_putchar('/');
	else
		ft_putchar('*');
}

void	rush(int x, int y)
{
	int col;
	int row;

	col = 0;
	row = 0;
	while (row < y)
	{
		while (col < x)
		{
			if (row == 0 || row == y - 1 || col == 0 || col == x - 1)
				print(x, y, row, col);
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		col = 0;
		row++;
	}
}
