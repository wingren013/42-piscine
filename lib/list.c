/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 10:23:01 by smifsud           #+#    #+#             */
/*   Updated: 2016/08/23 14:15:42 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

t_list *add_link(t_list *list, char *str)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp.str = str;
		tmp.next = list;
	}
	return (tmp);
}

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list.str);
		list = list.next
	}
}
