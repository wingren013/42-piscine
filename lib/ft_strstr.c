/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 10:47:07 by smifsud           #+#    #+#             */
/*   Updated: 2016/08/16 09:09:16 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		s;
	int		temp;

	i = 0;
	if (str[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			temp = i;
			s = 0;
			while (str[i] == to_find[s])
			{
				if (to_find[++s] == '\0')
					return (&str[temp]);
				i++;
			}
			i = temp + 1;
		}
		else
			i++;
	}
	return (0);
}
