/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 09:49:08 by smifsud           #+#    #+#             */
/*   Updated: 2016/08/12 12:02:34 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int		arr[size];
	int		i;
	int		temp;

	i = 0;
	while (i < size)
	{
		arr[i] = *(tab + i);
		i++;
	}
	i = 0;
	while (i < size)
	{
		if (i == 0 || arr[i] >= arr[i - 1])
			i++;
		else
		{
			temp = arr[i];
			arr[i] = arr[i - 1];
			*(tab + i) = arr[i - 1];
			arr[--i] = temp;
			*(tab + i) = temp;
		}
	}
}
