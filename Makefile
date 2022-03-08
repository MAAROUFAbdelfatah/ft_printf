NAME = libftprintf.a

CFILES = ft_printf.c ft_putchar.c ft_putnbr_un.c ft_putnbr.c ft_putp.c ft_putstr.c ft_putx.c ft_type.c 

OFILES = $(CFILES:%.c=%.o)

all: $(NAME)

$(NAME) : $(OFILES)
	ar -rcs ${NAME} ${OFILES}

%.o : %.c ft_printf.h
	gcc -Wall -Wextra -Werror -c $<

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all