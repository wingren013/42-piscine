/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 13:21:35 by anieto            #+#    #+#             */
/*   Updated: 2016/08/27 16:15:45 by pstevens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rushfuncs.h>

void	charprinter(int x, int y, int row, int col)
{
	if ((row == 0) && (col == 0 || col == x - 1))
		ft_putchar('o');
	else if ((row == y - 1) && (col == 0 || col == x - 1))
		ft_putchar('o');
	else if (row == y - 1 || row == 0)
		ft_putchar('-');
	else
		ft_putchar('|');
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
