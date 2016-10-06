/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diamond.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 21:00:59 by smifsud           #+#    #+#             */
/*   Updated: 2016/08/27 21:46:36 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rushfuncs.h>

void	diamond_while(int c, int rows, int spacei, char *str)
{
	k = 1;
	while (k <= rows)
	{
		c = 1;
		while (c++ <= space)
			ft_strcat(str, " ");
		space++;
		c = 1;
		while (c++ <= 2 * (n - k) - 1)
			ft_strcat(str, "*");
		ft_strcat(str, "\n");
		k++;
	}
}

char	*diamond(int rows, int x)
{
	int		c;
	int		k;
	int		space;
	char	*str;

	str = malloc(sizeof(char) * x * x);
	c = 1;
	k = 1;
	space = rows - 1;
	while (k <= rows)
	{
		while (c++ <= space)
			ft_strcat(str, " ");
		space--;
		c = 1;
		while (c++ <= 2 * k - 1)
			ft_strcat(str, "*");
		c = 1;
		ft_strcat(str, "\n");
		k++;
	}
	space = 1;
	c = 1;
	diamond_while(c, rows, space, str);
	return (str);
}
