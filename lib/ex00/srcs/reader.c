/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 13:41:21 by smifsud           #+#    #+#             */
/*   Updated: 2016/08/28 18:18:59 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#define BUFSIZE 1024

void	zero_fill(char buf[])
{
	int		i;

	i = 0;
	while (i < BUFSIZE)
	{
		buf[i] = 0;
		i++;
	}
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;

	i = 0;
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
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*alt_reader(int fd, char *str)
{
	int		x;
	int		y;
	char	buf[BUFSIZE];
	char	*strsaver;

	x = 0;
	y = 0;
	zero_fill(buf);
	while (1)
	{
		y += BUFSIZE;
		strsaver = (char*)malloc(sizeof(char) * y + 1);
		zero_fill(strsaver);
		strsaver = ft_strcpy(strsaver, str);
		str = (char*)malloc(sizeof(char) * y + 1);
		zero_fill(str);
		str = ft_strcpy(str, strsaver);
		x = read(fd, buf, BUFSIZE - 1);
		if (x <= 0)
			break ;
		ft_strncat(str, buf, x);
		zero_fill(buf);
	}
	free(strsaver);
	return (str);
}
