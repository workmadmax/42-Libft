NAME = libgnl.a
CC = gcc -Wall -Wextra -Werror
LIB = ar rcs
SRCS = 	get_next_line.c get_next_line_utils.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)

$(OBJS):	$(SRCS)
		$(CC) -c $(SRCS)

re: fclean all

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

.PHONY: clean fclean re all