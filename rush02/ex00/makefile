SRCS	= main.c basic_dict.c find_key.c ft_itoa.c ft_atoi.c  #Nombre de los ficheros que queremos compilar

OBJS	= ${SRCS:.c=.o} #Transforma todos los archivos .c en .o

NAME	= rush-02 #Nombre de nuestro transformable

CC		= cc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o :
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

run:		
			./${NAME}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

norm :
			norminette */*.[ch]

re:			fclean all

.PHONY: all clean fclean re .c.o test