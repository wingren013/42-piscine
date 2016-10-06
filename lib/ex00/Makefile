# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pstevens <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/27 13:04:05 by pstevens          #+#    #+#              #
#    Updated: 2016/08/28 22:29:33 by smifsud          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	rush-2
NAME0		=	rush-00
NAME1		=	rush-01
NAME2		=	rush-02
NAME3		=	rush-03
NAME4		=	rush-04
RUSH		=	rush

FILES		=	main.c ft_atoi.c ft_putchar.c reader.c global.c
FILES		+=	rush00_return.c rush01_return.c rush02_return.c
FILES		+=	rush03_return.c rush04_return.c checker.c ft_strcmp.c

RFUNC		=	rushmain.c ft_atoi.c ft_putchar.c checker.c ft_strcmp.c global.c

CC			=	gcc
CFLAGS		?=	-Wall -Werror -Wextra
CFLAGS		+= -I includes

PREFIX		=	srcs/
RUSHFILES   = 	$(addprefix srcs/, $(RFUNC))
SRCS		=	$(addprefix srcs/, $(FILES))
OBJS		=	$(addprefix build/, $(FILES:.c=.o))

all: $(NAME) $(NAME0) $(NAME1) $(NAME2) $(NAME3) $(NAME4)

clean:
	rm -rf build/

fclean: clean
	rm -rf $(NAME) $(NAME0) $(NAME1) $(NAME2) $(NAME3) $(NAME4)

re: fclean all

build:
	mkdir build/

build/%.o: srcs/%.c | build
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(NAME0): 
	$(CC) $(CFLAGS) -o $(NAME0) $(PREFIX)$(RUSH)00.c $(RUSHFILES)

$(NAME1): 
	$(CC) $(CFLAGS) -o $(NAME1) $(PREFIX)$(RUSH)01.c $(RUSHFILES)

$(NAME2): 
	$(CC) $(CFLAGS) -o $(NAME2) $(PREFIX)$(RUSH)02.c $(RUSHFILES)

$(NAME3): 
	$(CC) $(CFLAGS) -o $(NAME3) $(PREFIX)$(RUSH)03.c $(RUSHFILES)

$(NAME4): 
	$(CC) $(CFLAGS) -o $(NAME4) $(PREFIX)$(RUSH)04.c $(RUSHFILES)
