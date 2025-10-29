# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trambure <trambure@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/30 14:54:55 by trambure          #+#    #+#              #
#    Updated: 2025/04/30 14:55:01 by trambure         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libftprintf.a

CC      = cc
CFLAGS  = -Wall -Wextra -Werror -I.

SRCS    = ft_printf.c \
          Print/ft_print_str.c \
          Print/ft_print_ptr.c \
          Print/ft_print_unsigned.c \
          Print/ft_print_hex.c \
          utils/ft_putchar.c \
          utils/ft_putnbr.c

OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
