/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 14:13:06 by smifsud           #+#    #+#             */
/*   Updated: 2016/08/28 23:00:30 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <rushfuncs.h>
#include <stdio.h>

int		g_g;

void	setg(void)
{
	g_g = 0;
}

int		getg(void)
{
	return (g_g);
}

int		checker(char *orig_str, char *(*rush_func)(int, int))
{
	int		i;
	char	*str;

	i = 0;
	str = (char*)malloc(sizeof(char) * (get_x() * get_y()) + 2);
	str = rush_func(get_x(), get_y());
	if (ft_strcmp(orig_str, str) == 0)
	{
		return (1);
		g_g = 1;
	}
	return (0);
}
