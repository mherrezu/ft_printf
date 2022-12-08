# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 17:58:02 by mherrezu          #+#    #+#              #
#    Updated: 2022/12/08 14:03:57 by mherrezu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_puthex.c \
		ft_putunsigned.c 

OBJS = $(SRCS:.c=.o) 

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
			$(CC) -c $(CFLAGS) $(SRCS)
			ar crs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean: 	clean
						$(RM) $(NAME)

re:			fclean all

.PHONY: all, clean, fclean, re