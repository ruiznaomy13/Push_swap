# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncastell <ncastell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/13 19:31:20 by ncastell          #+#    #+#              #
#    Updated: 2023/06/14 17:18:43 by ncastell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = main.c utils.c

OBJ = ${SRCS:.c=.o}

HEADER = push_swap.h
CC = gcc
FLAGS = -Wall -Werror -Wextra
RM = rm -rf

%.o:%.c ${HEADER}
	${CC} ${FLAGS} -I ${HEADER} -c $< -o $@

$(NAME): ${OBJ} ${HEADER}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}
		
all: ${NAME}

clean:
		${RM} ${OBJ}

fclean: clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re