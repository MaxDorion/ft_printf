NAME 		= libftprintf.a

CFLAGS		= -c -Wall -Wextra -Werror

CC			= gcc

SRCS		= ft_put_hexa_maj.c \
			ft_put_hexa_min.c \
			ft_put_ptr.c \
			ft_putnbr_unsigned.c \
			ft_putnbr.c	\
			ft_putstr.c	\
			ft_printf.c

OBJS		= $(SRCS:.c=.o)

RM			= rm -f

$(NAME)		: $(OBJS)
				$(CC) $(CFLAGS) $(SRCS)
				ar r $(NAME) $(OBJS)

all			: $(NAME)

clean		:
			$(RM) $(OBJS)
fclean		: clean
			$(RM) ${NAME}
re			: fclean all

.PHONY		: all clean fclean re
