/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 15:47:51 by smifsud           #+#    #+#             */
/*   Updated: 2016/08/16 16:14:33 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isletter(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c <= 'z' && c >= 'a'))
		return (1);
	return (0);
}

int		isnumber(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	makeupper(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
}

void	makelower(char *str, int i)
{
	if (str[i] <= 'Z' && str[i] >= 'A')
	{
		str[i] = str[i] + 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		if (isletter(str[i] == 0))
			i++;
		else if (isletter(str[i - 1]) == 1)
		{
			makelower(str, i);
			i++;
		}
		else if (isnumber(str[i - 1]) == 1)
			i++;
		else
		{
			makeupper(str, i);
			i++;
		}
	}
	return (str);
}
