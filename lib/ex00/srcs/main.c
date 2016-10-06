/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstevens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 16:49:15 by pstevens          #+#    #+#             */
/*   Updated: 2016/08/28 22:54:41 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <rushfuncs.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	params(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		set_x(0);
		while (str[i] != '\n')
		{
			set_x(get_x() + 1);
			i++;
		}
		i++;
		set_y(get_y() + 1);
	}
}

void	otherprint(void)
{
	ft_putstr("[");
	ft_putnbr(get_x());
	ft_putstr("] ");
	ft_putstr("[");
	ft_putnbr(get_y());
	ft_putstr("] ");
}

void	printshit(char *str)
{
	if (checker(str, &rush00_return) == 1)
	{
		ft_putstr("[rush-00] ");
		otherprint();
	}
	if (checker(str, &rush01_return) == 1)
	{
		ft_putstr("[rush-01] ");
		otherprint();
	}
	if (checker(str, &rush02_return) == 1)
	{
		ft_putstr("[rush-02] ");
		otherprint();
	}
	if (checker(str, &rush03_return) == 1)
	{
		ft_putstr("[rush-03] ");
		otherprint();
	}
	if (checker(str, &rush04_return) == 1)
	{
		ft_putstr("[rush-04] ");
		otherprint();
	}
}

int		main(void)
{
	char	c;
	char	*str;

	c = 0;
	str = &c;
	str = alt_reader(0, str);
	set_x(0);
	set_y(0);
	params(str);
	setg();
	printshit(str);
	if (getg() >= 1)
		ft_putstr("vin californien est mieux");
	free(str);
}
