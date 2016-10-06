/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-00_return.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarmona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 20:45:11 by jcarmona          #+#    #+#             */
/*   Updated: 2016/08/28 22:52:09 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rushfuncs.h>

char	*g_str;

void	charprinter00(int x, int y, int row, int col)
{
	if ((row == 0) && (col == 0 || col == x - 1))
		ft_strncat(g_str, "o", 1);
	else if ((row == y - 1) && (col == 0 || col == x - 1))
		ft_strncat(g_str, "o", 1);
	else if (row == y - 1 || row == 0)
		ft_strncat(g_str, "-", 1);
	else
		ft_strncat(g_str, "|", 1);
}

char	*rush00_return(int x, int y)
{
	int		row;
	int		col;

	row = 0;
	col = 0;
	g_str = (char*)malloc(sizeof(char) * x * y + 2);
	while (row < y)
	{
		while (col < x)
		{
			if (row == 0 || row == y - 1)
				charprinter00(x, y, row, col);
			else if (col == 0 || col == x - 1)
				charprinter00(x, y, row, col);
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
