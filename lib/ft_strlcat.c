/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 10:19:46 by smifsud           #+#    #+#             */
/*   Updated: 2016/09/27 14:09:52 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	length(char *src)
{
	unsigned int	srclen;

	srclen = 0;
	while (src[srclen] != 0)
		srclen++;
	return (srclen);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	i2;
	unsigned int	destlen;
	unsigned int	spaceleft;

	i = 0;
	i2 = 0;
	destlen = 0;
	while (dest[i] != 0)
	{
		i++;
		destlen++;
		if (i >= size)
			return (size + length(src));
	}
	spaceleft = size - destlen;
	while (src[i2] != 0 && i < size)
	{
		if (spaceleft-- > 1)
			dest[i] = src[i2];
		i++;
		i2++;
	}
	return (destlen + length(src));
}
