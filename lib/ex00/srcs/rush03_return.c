/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 13:21:35 by anieto            #+#    #+#             */
/*   Updated: 2016/08/28 22:47:09 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rushfuncs.h>

char	*g_str;

void	charprinter03(int x, int y, int row, int col)
{
	if ((row == 0 || row == y - 1) && col == 0)
		ft_strncat(g_str, "A", 1);
	else if ((row == 0 || row == y - 1) && col == x - 1)
		ft_strncat(g_str, "C", 1);
	else
		ft_strncat(g_str, "B", 1);
}

char	*rush03_return(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	g_str = (char*)malloc(sizeof(char) * x * y + 2);
	while (row < y)
	{
		while (col < x)
		{
			if (row == 0 || row == y - 1)
				charprinter03(x, y, row, col);
			else if (col == 0 || col == x - 1)
				charprinter03(x, y, row, col);
			else
				ft_strncat(g_str, " ", 1);
			col++;
		}
		col = 0;
		ft_strncat(g_str, "\n", 1);
		row++;
	}
	return (g_str);
}
