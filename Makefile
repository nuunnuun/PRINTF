NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs

SRCS =  ft_printf.c \
		ft_printint.c \
		ft_printhex.c \
		ft_printptr.c \
		ft_printstr.c \
		ft_print_unsigned.c \

OBJS = ${SRCS:.c=.o}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS} Makefile
	ar rcs ${NAME} ${OBJS}

all : ${NAME}

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re