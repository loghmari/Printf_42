# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 11:13:18 by sloghmar          #+#    #+#              #
#    Updated: 2022/03/17 11:17:47 by sloghmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CC = gcc

CFLAGS = -Wall -Wextra -Werror -I./includes

SRCS = ft_printf.c \
	   src/print_type.c \
	   src/print_type2.c \
	   src/print_utils.c

LIB_SRCS =	Libft/ft_putchar_fd.c \
			Libft/ft_putstr_fd.c \
			Libft/ft_strlen.c

HEADER = ./includes/ft_printf.h ./includes/libft.h

OBJS = $(SRCS:.c=.o)

OBJL =$(LIB_SRCS:.c=.o)

NAME = libftprintf.a

RM = rm -f

all:		$(NAME)

$(NAME):	$(OBJL) $(OBJS) $(HEADER)
	ar -rcs $(NAME) $(OBJS) $(OBJL)

clean:
			$(RM) $(OBJS) $(OBJL)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
