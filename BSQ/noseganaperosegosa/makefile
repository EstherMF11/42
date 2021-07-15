SRCS	= main.c handle_file.c get_info.c basic_functions.c structure.c

OBJS 	= ${SRCS:.c=.o}

NAME 	= bsq

CC 		= cc
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

re:			fclean all

.PHONY: all clean fclean re .c.o test