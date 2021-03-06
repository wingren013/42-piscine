/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 09:59:20 by smifsud           #+#    #+#             */
/*   Updated: 2016/09/23 15:41:43 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *d, char *src, int nb)
{
	int		i;
	char	*dest;

	i = 0;
	dest = d;
	while (*dest != 0)
	{
		dest++;
	}
	while (*src != 0 && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (d);
}
