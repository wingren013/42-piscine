/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 10:23:46 by smifsud           #+#    #+#             */
/*   Updated: 2016/08/23 10:26:02 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_list t_list;

struct s_list
{
	t_list	*next;
	char	*str;
};

t_list	*add_link(t_list *list, char *str);

void	print_list(t_list *list);

#endif;
