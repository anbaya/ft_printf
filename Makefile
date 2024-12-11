CC = cc
FLAGS = -Wall -Wextra -Werror
SRC = ft_check.c ft_printf.c ft_print_hex.c ft_print_hexx.c ft_putchar.c ft_putnbr.c ft_putptr.c ft_putstr.c ft_put_unsigned.c
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a
HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean fclean all

.PHONY: all clean fclean re