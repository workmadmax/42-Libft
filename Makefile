# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/06 16:31:34 by mdouglas          #+#    #+#              #
#    Updated: 2022/08/15 20:44:02 by mdouglas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= so_long
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
MAKEXT	= make -C

LIBFT_PATH = srcs/ft

#INC		
#DIRS	

#SRC		
#OBJS


archives/libft.a:
		$(MAKEXT) $(LIBFT_PATH)
		cp $(LIBFT_PATH)/libft.a archives/

libft: archives/libft.a
		
libft_clean:
		$(MAKEXT) $(LIBFT_PATH) clean

all:	$(NAME)

$(NAME): (OBJS)
		ar -rcs ($NAME) (OBJS)

clean: libft_clean
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean libft