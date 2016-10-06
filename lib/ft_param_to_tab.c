/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 15:04:58 by smifsud           #+#    #+#             */
/*   Updated: 2016/08/20 22:46:37 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

#include <stdlib.h>

char				**ft_split_whitespaces(char	*str);

int					length(char *str)
{
	int		out;

	out = 0;
	while (str[out] != 0)
		out++;
	return (out);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_par	*tables;

	i = 0;
	tables = (struct s_stock_par*)malloc(sizeof(struct s_stock_par) * (ac + 2));
	while (i < ac)
	{
		tables[i].size_param = length(av[i]);
		tables[i].str = &av[i][0];
		tables[i].copy = av[i];
		tables[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	tables[i].str = 0;
	return (tables);
}
