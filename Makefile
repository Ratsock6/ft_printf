NAME	:=	libftprintf.a
CFLAGS	:=	-Wall -Wextra -Werror -Ilibft
LDFLAGS	:=	-L. -lftprintf

RM		:=	rm -f
SRC	:=	ft_printf.c \
		ft_printf_num.c \
		ft_printf_hex.c \
		ft_printf_text.c \
		ft_count_utils.c \

OBJ	:=	$(SRC:.c=.o)

%.o:		%.c
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
				$(MAKE) -C libft bonus
				cp libft/libft.a $(NAME)
				$(AR) rcs $(NAME) $(OBJ)

all:		$(NAME)

test:		$(OBJ) main.o
				$(MAKE) -C libft bonus
				cp libft/libft.a .
				$(CC) $(CFLAGS) -o a.out $(OBJ) libft.a main.o

clean:
				$(MAKE) -C libft clean
				$(RM) *.o */*.o */*/*.o

fclean:		clean
				$(MAKE) -C libft fclean
				$(RM) *.a *.out

bonus:		$(NAME)

re:			fclean all

.PHONY:		all clean fclean re test bonus
