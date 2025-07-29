NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
SRCS = ft_printf.c ft_charfunc.c ft_nbrfunc.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:
	fclean all

x: all
	cc main.c $(NAME) -o ali
	./ali

.PHONY: all clean fclean re x