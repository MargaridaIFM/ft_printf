NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Werror -Wextra
LIBC = ar rcs
LIBFT = $(LIBFTDIR)/libft.a
LIBFTDIR =./libft
RM = rm -f
CP = cp
SRCS = ft_printf.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_puthexadecimal.c \
	ft_putnbr.c \
	ft_putpointer.c \
	ft_putunsigned.c \
	
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS) 
	$(CP) $(LIBFT) $(NAME)
	$(LIBC)	$(NAME) $(OBJS)

$(LIBFT): $(LIBFTDIR)
	@$(MAKE) -C $(LIBFTDIR)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@
	
clean:
	@$(MAKE) clean -C $(LIBFTDIR)
	$(RM) $(OBJS)

fclean:	clean
	@$(MAKE) fclean -C $(LIBFTDIR)
	$(RM) $(NAME)

re:	fclean all

.PHONY:		all clean fclean re