/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 23:03:04 by smifsud           #+#    #+#             */
/*   Updated: 2016/08/20 15:42:21 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SPACE(x) (x=='\t'||x=='\n'||x=='\v'||x=='\f'||x=='\r'||x==' ')

int	ft_atoi(char *str)
{
	unsigned long long		x;
	int						i;
	int						sign;

	x = 0;
	i = 0;
	sign = 1;
	while (SPACE(str[i]))
		str++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = str[i] == '-' ? -1 : 1;
		str++;
	}
	while (*str == '0')
		str++;
	while (str[i] != '\0')
	{
		if (str[i] > '9' || str[i] < '0')
			return (sign * x);
		x = x * 10 + str[i++] - '0';
	}
	if (i > 19 || x > 9223372036854775807ULL)
		return (sign == 1 ? -1 : 0);
	return (sign * x);
}
