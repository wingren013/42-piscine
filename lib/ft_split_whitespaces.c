/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 18:35:42 by smifsud           #+#    #+#             */
/*   Updated: 2016/08/20 19:00:27 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define SPACE(x) (x == '\t' || x == '\n' || x == ' ')
#define NOTSPACE(x) (x != '\t' && x != '\n' && x != ' ')

int		strcpyr(char *dest, char *src)
{
	int		i;

	i = 0;
	while (NOTSPACE(src[i]) && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = 0;
	return (i);
}

char	**split(char **current, char *ori, int words)
{
	int		i;
	int		temp;

	i = 0;
	temp = 0;
	while (i < words)
	{
		temp = strcpyr(current[i], ori);
		if (temp != 1)
			i++;
		while (temp-- > 0)
			ori++;
	}
	current[i] = 0;
	return (current);
}

char	**ft_split_whitespaces(char *str)
{
	char	**strarray;
	int		total;
	int		wordcount;
	int		biggestword;
	int		i;

	total = 0;
	wordcount = 0;
	biggestword = 0;
	while (str[++total])
	{
		if (SPACE(str[total]))
		{
			biggestword = i > biggestword ? i : biggestword;
			i = 0;
			wordcount += (SPACE(str[total - 1])) ? 0 : 1;
		}
		i++;
	}
	wordcount += (SPACE(str[total - 1])) ? 0 : 1;
	strarray = (char**)malloc(sizeof(char*) * (wordcount + 1));
	i = -1;
	while (++i < wordcount)
		strarray[i] = (char*)malloc(biggestword + 1);
	return (split(strarray, str, wordcount));
}
