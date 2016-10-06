/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 21:07:28 by smifsud           #+#    #+#             */
/*   Updated: 2016/08/28 22:42:30 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rushfuncs.h>

int		g_x;
int		g_y;

int		get_x(void)
{
	return (g_x);
}

void	set_x(int x)
{
	g_x = x;
}

int		get_y(void)
{
	return (g_y);
}

void	set_y(int y)
{
	g_y = y;
}

void	ft_putnbr(int nb)
{
	int trunc;
	int called;

	called = 0;
	trunc = 1000000000;
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb %= 1000000000;
		}
		nb *= -1;
	}
	while (trunc > 0)
	{
		if ((nb / trunc) != 0 || called == 1 || (nb == 0 && trunc == 1))
		{
			called = 1;
			ft_putchar((nb / trunc) + '0');
		}
		nb %= trunc;
		trunc /= 10;
	}
}
