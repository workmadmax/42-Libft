# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/21 19:29:23 by mdouglas          #+#    #+#              #
#    Updated: 2022/06/29 15:00:58 by mdouglas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
CC		= cc -Wall -Werror -Wextra
AR		= ar -rc
SRCS	= ft_printf.c handle_char.c handle_hex.c handle_num.c \
			handle_string.c \

OBJS	= $(SRCS:.c=.o)
RM		= rm -f

.c.o:
		$(CC) -c $< -o $(<:.c=.o)
		
all:	$(NAME)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean clean all

.PHONY: all clean fclean re