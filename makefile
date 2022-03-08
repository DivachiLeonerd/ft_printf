NAME := libftprintf.a
CC := gcc
CFLAGS := -I. -I./libft/ -Werror -Wextra -Wall
OBJPATH := ./Objetos/
OBJS = ft_printf.o print_hexa.o print_integer.o ft_utoa.o print_unsigned_int.o print_pointer.o print_string.o
LIB := ar rcs
OBJS2 = ft_putchar_fd.o ft_itoa.o ft_putstr_fd.o ft_calloc.o ft_strdup.o ft_strlen.o

.PHONY: all clean fclean re test mv_objs2


all: ${NAME}

 ${NAME}: ${OBJS}
	@${MAKE} -C ./libft/
	@mv ./libft/*.o ./
	@${LIB} ${NAME} ${OBJS} ${OBJS2}

mv_o2: ${NAME}

test: ${OBJS} mv_o2 ${OBJS2}
	@${CC} ${CFLAGS} -o tester printf_tester.c ${OBJS} ${OBJS2}
	@./tester

clean:
	@rm -f *.o
	@rm -f tester

fclean: clean
	@rm -f libftprintf.a
	@rm -f ./libft/libft.a

re: fclean all
