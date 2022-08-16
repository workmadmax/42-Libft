# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/06 16:31:34 by mdouglas          #+#    #+#              #
#    Updated: 2022/08/16 16:48:18 by mdouglas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= lib-madmax42
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
MAKEXT	= make -C

LIBFT_PATH 	= srcs/ft
LIBGNL_PATH = srcs/gnl
LIBFTPRINTF_PATH = srcs/ft_printf

archives/libft.a:
		$(MAKEXT) $(LIBFT_PATH)
		cp $(LIBFT_PATH)/libft.a archives/
		
libft: archives/libft.a
		
libft_clean:
		$(MAKEXT) $(LIBFT_PATH) clean

archives/libgnl.a:
		$(MAKEXT) $(LIBGNL_PATH)
		cp $(LIBGNL_PATH)/libgnl.a archives/

gnl: archives/libgnl.a

gnl_clean:
		$(MAKEXT) $(LIBGNL_PATH) clean

archives/libftprintf.a:
		$(MAKEXT) $(LIBFTPRINTF_PATH)
		cp $(LIBFTPRINTF_PATH)/libftprintf.a archives/

ft_printf: archives/libftprintf.a

ft_printf_clean:
		$(MAKEXT) $(LIBFTPRINTF_PATH) clean

all: $(NAME)
	
$(NAME): archives/libft.a archives/libgnl.a archives/libftprintf.a
		ar rcs $(NAME) archives/libft.a archives/libgnl.a archives/libftprintf.a

clean: libft_clean gnl_clean ft_printf_clean
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean libft gnl ft_printf