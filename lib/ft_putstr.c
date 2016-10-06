/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 17:00:20 by smifsud           #+#    #+#             */
/*   Updated: 2016/08/15 23:11:31 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	if (str == 0)
		ft_putstr("(null)");
	else
	{
		while (str[i] != 0)
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}