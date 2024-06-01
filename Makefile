# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/30 11:11:56 by isainz-r          #+#    #+#              #
#    Updated: 2024/06/01 11:54:56 by isainz-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= functions.a
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
AR			= ar
ARFLAGS		= -rcs

SRCS =	first_word.c fizzbuzz.c ft_putstr.c ft_strcpy.c ft_swap.c rot_13.c \
		repeat_alpha.c rev_print.c rotone.c search_and_replace.c ulstr.c \
		alpha_mirror.c camel_to_snake.c do_op.c ft_strcmp.c ft_strcspn.c \
		ft_strpbrk.c ft_strrev.c ft_strspn.c\
		ft_putnbr.c ft_atoi.c ft_strchr.c \
		all_len.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
