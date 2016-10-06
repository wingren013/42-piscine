/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushfuncs.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 13:01:39 by smifsud           #+#    #+#             */
/*   Updated: 2016/08/28 22:36:47 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _RUSHFUNCS_H
# define _RUSHFUNCS_H
#include <stdlib.h>

int		get_x(void);

void	set_x(int x);

int		get_y(void);

void	set_y(int y);

int		ft_strcmp(char *s1, char *s2);

int		ft_atoi(char *str, int i, int sign);

void	rush(int x, int y);

void	ft_putchar(char c);

int		checker(char *str, char *(*ptr)(int,int));

char	*alt_reader(int fd, char *str);

void	ft_putnbr(int nb);

char 	*ft_strncat(char *dest, char *src, int nb);

char	*rush00_return(int param1, int param2);

char	*rush01_return(int param1, int param2);

char	*rush02_return(int param1, int param2);

char	*rush03_return(int param1, int param2);

char	*rush04_return(int param1, int param2);

int		getg();

void	setg();

#endif
