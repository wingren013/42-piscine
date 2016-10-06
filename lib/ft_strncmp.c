/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 13:37:56 by smifsud           #+#    #+#             */
/*   Updated: 2016/08/15 23:10:34 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*is1;
	unsigned char	*is2;

	i = 0;
	is1 = (unsigned char*)s1;
	is2 = (unsigned char*)s2;
	while (i < n && is1[i] != '\0' && is2[i] != '\0')
	{
		if (is1[i] != is2[i])
			return (is1[i] - is2[i]);
		i++;
	}
	if (i == n && i != 0)
		return (is1[i - 1] - is2[i - 1]);
	else
		return (is1[i] - is2[i]);
}
