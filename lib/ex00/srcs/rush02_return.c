/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02_return.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstevens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 22:49:16 by pstevens          #+#    #+#             */
/*   Updated: 2016/08/28 22:52:23 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rushfuncs.h>

char	*g_str;

void	charprinter02(int x, int y, int row, int col)
{
	if ((row == 0) && (col == 0 || col == x - 1))
		ft_strncat(g_str, "A", 1);
	else if ((row == y - 1) && (col == 0 || col == x - 1))
		ft_strncat(g_str, "C", 1);
	else
		ft_strncat(g_str, "B", 1);
}

char	*rush02_return(int x, int y)
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
				charprinter02(x, y, row, col);
			else if (col == 0 || col == x - 1)
				charprinter02(x, y, row, col);
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
