# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hounajar <hounajar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/01 06:42:01 by hounajar          #+#    #+#              #
#    Updated: 2024/12/07 10:38:32 by hounajar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc -Wall -Wextra -Werror
NAME = libftprintf.a
AR = ar rcs
RM = rm -rf
SRCS = ft_printf.c	ft_printf_utils.c	ft_printf_utils2.c
OBJS = $(SRCS:.c=.o)


all: $(NAME)


$(NAME) : $(OBJS)
	@$(AR) $(NAME) $(OBJS)

%.o: %.c
	@$(CC) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)
re: fclean all