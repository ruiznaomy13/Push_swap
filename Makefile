NAME		= push_swap
HEADER		= lib/push_swap.h

INCLUDE		= -I./ -I inc/libft -I inc/printf
SRCS_DIR 	= src
SRCS 		= $(SRCS_DIR)/checker.c $(SRCS_DIR)/double_moves.c $(SRCS_DIR)/main.c \
			$(SRCS_DIR)/moves.c $(SRCS_DIR)/push_swap.c $(SRCS_DIR)/scanner.c \
			$(SRCS_DIR)/sort_big.c $(SRCS_DIR)/sort_small.c $(SRCS_DIR)/utils.c
RUTAS		= inc/libft/libft.a inc/printf/libftprintf.a

OBJ_DIR		= obj
OBJS		= $(patsubst $(SRCS_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))
DEPS		= $(addsuffix .d,$(basename ${OBJS}))
CFLAGS		= -Wall -Wextra -Werror -g

######## COLORS ########
GREEN		= \033[1;92m
RED			= \033[1;91m
NC			= \033[0m

${OBJ_DIR}/%.o: $(SRCS_DIR)/%.c Makefile
	@mkdir -p ${OBJ_DIR}
	@${CC} -MT $@ ${CFLAGS} -MMD -MP ${INCLUDE} -c $< -o $@

all:
	@${MAKE} -C inc/libft
	@${MAKE} -C inc/printf
	@${MAKE} ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} ${RUTAS} -o ${NAME}
	@echo "$(GREEN)push_swap compiled$(NC)"

-include ${DEPS}

clean:
	@${MAKE} clean -C inc/libft
	@${MAKE} clean -C inc/printf
	rm -rf ${OBJ_DIR}
	@echo "$(RED)\nDestruction successful\n$(NC)"

fclean: clean
	@${MAKE} fclean -C inc/libft
	@${MAKE} fclean -C inc/printf
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re