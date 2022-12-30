# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-aini <mel-aini@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/06 18:17:49 by mel-aini          #+#    #+#              #
#    Updated: 2022/11/22 20:55:43 by mel-aini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_cases.c ft_putaddr.c ft_putchar.c \
	ft_puthexa.c ft_putnbr.c ft_putstr.c ft_putunbr.c \
	ft_space_flag.c ft_plus_flag.c ft_hash_flag.c

CONV1 = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(CONV1)
	ar -rcs $(NAME) $(CONV1)

bonus: all

%.o: %.c ft_printf.h
	cc -Wall -Wextra -Werror -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
