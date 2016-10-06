/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 12:14:20 by smifsud           #+#    #+#             */
/*   Updated: 2016/08/16 13:02:03 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	length(char *src)
{
	unsigned int	srclen;

	srclen = 0;
	while (src[srclen] != 0)
		srclen++;
	return (srclen);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 1;
	while (i < size && src[i - 1] != '\0')
	{
		if (src[i] != '\0')
			dest[i - 1] = src[i - 1];
		else
			dest[i - 1] = '\0';
		i++;
	}
	if (size != 0 && i == size)
		dest[i - 1] = '\0';
	return (length(src));
}
