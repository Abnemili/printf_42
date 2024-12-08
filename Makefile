NAME = libftprintf.a

CC = cc 

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRC = ft_printf.c ft_putstr.c ft_putchar.c ft_putnbr.c\
ft_putper.c ft_puthex_low.c ft_puthex_upp.c ft_putnbr_unsigned.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : clean
