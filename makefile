NAME	= rubik
SRCS	= init.c main.c pintar.c movimientos.c pintaractual.c giros.c giros2.c algoritmos.c
OBJS	= ${SRCS:.c=.o}
HEADER	= libreria.h

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

${NAME}:	${SRCS}
			${CC} -c ${CFLAGS} ${SRCS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS} -I ${HEADER}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean ${NAME}

.PHONY:		clean
			fclean
			all
			re

