NAME := libftprintf.a
CC := gcc
CFLAGS := -I. -I./libft/ -Werror -Wextra -Wall
OBJPATH := ./Objetos/
OBJS = myproject.o helloworld.o
LIB := ar rcs
OBJS2 = 1.o 2.o add.o

.PHONY: all clean fclean re


all: ${NAME}

 ${NAME}: ${OBJS}
	${MAKE} -C ./libft/
	mv ./libft/*.o ./
	${LIB} ${NAME} ${OBJS} ${OBJS2}
	mv *.o ${OBJPATH}

clean:
	rm -f ${OBJPATH}*.o

fclean: clean
	rm -f libftprintf.a
	rm -f ./libft/libft.a

re: fclean all
