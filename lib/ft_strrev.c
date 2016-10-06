/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 20:36:33 by smifsud           #+#    #+#             */
/*   Updated: 2016/08/12 09:40:04 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		length(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		len;
	int		i;

	len = length(str);
	i = 0;
	while (i < len / 2)
	{
		str[len] = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = str[len];
		i++;
	}
	str[len] = '\0';
	return (str);
}
