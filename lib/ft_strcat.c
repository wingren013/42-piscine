/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 08:48:38 by smifsud           #+#    #+#             */
/*   Updated: 2016/09/23 14:49:22 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *d, char *s)
{
	char	*dest;
	char	*src;

	dest = d;
	src = s;
	while (*dest != 0)
	{
		dest++;
	}
	while (*src != 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (d);
}
