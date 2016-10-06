/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 11:24:48 by anieto            #+#    #+#             */
/*   Updated: 2016/08/28 22:59:40 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rushfuncs.h>

char	*g_str;

void	print(int x, int y, int row, int col)
{
	if ((row == 0 && col == 0))
		ft_strncat(g_str, "/", 1);
	else if ((row == 0 && col == x - 1) || (row == y - 1 && col == 0))
		ft_strncat(g_str, "\\", 1);
	else if ((row == y - 1 && col == x - 1))
		ft_strncat(g_str, "/", 1);
	else
		ft_strncat(g_str, "*", 1);
}

char	*rush01_return(int x, int y)
{
	int col;
	int row;

	col = 0;
	row = 0;
	g_str = (char*)malloc(sizeof(char) * x * y + 2);
	while (row < y)
	{
		while (col < x)
		{
			if (row == 0 || row == y - 1 || col == 0 || col == x - 1)
				print(x, y, row, col);
			else
				ft_strncat(g_str, " ", 1);
			col++;
		}
		ft_strncat(g_str, "\n", 1);
		col = 0;
		row++;
	}
	return (g_str);
}
