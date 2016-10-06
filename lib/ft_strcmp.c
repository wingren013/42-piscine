/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 12:16:12 by smifsud           #+#    #+#             */
/*   Updated: 2016/08/15 21:23:10 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	*is1;
	unsigned char	*is2;

	is1 = (unsigned char*)s1;
	is2 = (unsigned char*)s2;
	i = 0;
	while (is1[i] != '\0' && is2[i] != '\0')
	{
		if (is1[i] != is2[i])
			return (is1[i] - is2[i]);
		i++;
	}
	return (is1[i] - is2[i]);
}
