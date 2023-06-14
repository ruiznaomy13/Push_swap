# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncastell <ncastell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/13 19:31:20 by ncastell          #+#    #+#              #
#    Updated: 2023/06/14 18:16:59 by ncastell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRCS = main.c utils.c checkers.c
OBJ_DIR = obj
OBJ = ${addprefix $(OBJ_DIR)/,${SRCS:.c=.o}}
HEADER = push_swap.h
CC = gcc
FLAGS = -Wall -Werror -Wextra
RM = rm -rf

$(OBJ_DIR)/%.o: %.c ${HEADER}
	@mkdir -p $(OBJ_DIR)
	${CC} ${FLAGS} -I ${HEADER} -c $< -o $@

$(NAME): ${OBJ} ${HEADER}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}
		
all: ${NAME}

clean:
	${RM} ${OBJ_DIR}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
