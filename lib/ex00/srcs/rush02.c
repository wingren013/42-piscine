/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 13:21:35 by anieto            #+#    #+#             */
/*   Updated: 2016/08/28 16:24:10 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rushfuncs.h>

void	charprinter(int x, int y, int row, int col)
{
	if ((row == 0) && (col == 0 || col == x - 1))
		ft_putchar('A');
	else if ((row == y - 1) && (col == 0 || col == x - 1))
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < y)
	{
		while (col < x)
		{
			if (row == 0 || row == y - 1)
				charprinter(x, y, row, col);
			else if (col == 0 || col == x - 1)
				charprinter(x, y, row, col);
			else
				ft_putchar(' ');
			col++;
		}
		col = 0;
		ft_putchar('\n');
		row++;
	}
}
