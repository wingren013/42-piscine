/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 09:55:07 by smifsud           #+#    #+#             */
/*   Updated: 2016/08/16 17:04:11 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;
	char	*d;

	i = 0;
	d = dest;
	while (i < n && *src)
	{
		*dest++ = *src++;
		i++;
	}
	while (i < n)
	{
		*dest++ = 0;
		i++;
	}
	return (d);
}
