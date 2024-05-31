NAME	= minitalk

SRCS	= client.c server.c

BONUS_SRCS = client_bonus.c server_bonus.c

OBJS	:= $(SRCS:%.c=%.o)

BONUS_OBJS = $(BONUS_SRCS:%.c=%.o)

CC		= cc
RM		= -rm -f

CFLAGS 	= -Wall -Wextra -Werror

# Color codes
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
MAGENTA = \033[0;35m
CYAN = \033[0;36m
RESET = \033[0m

all:		${NAME}

bonus:	client_bonus server_bonus

norm:
	@echo "$(YELLOW)Running norm...$(RESET)"
	norminette $(SOURCES) $(BONUS_SOURCES)
	@echo "$(BLUE)norm successful$(RESET)"

%.o:	%.c
		${CC} ${CFLAGS} -Ilibft -Iprintf -c $? -o $@

${NAME}:	 server client

server:		server.o
		@make -C libft
		@make -C printf
		${CC} ${CFLAGS} $? -Llibft -lft -Lprintf -lftprintf -o server

client:		client.o
		@make -C libft
		@make -C printf
		${CC} ${CFLAGS} $? -Llibft -lft -Lprintf -lftprintf -o client


server_bonus:		server_bonus.o
		@make -C libft
		@make -C printf
		${CC} ${CFLAGS} $? -Llibft -lft -Lprintf -lftprintf -o server

client_bonus:		client_bonus.o
		@make -C libft
		@make -C printf
		${CC} ${CFLAGS} $? -Llibft -lft -Lprintf -lftprintf -o client


libft:
		make -C ./libft

printf:
		make -C ./printf

clean:
			make clean -C libft
			make clean -C printf
			${RM} ${OBJS}

fclean:		clean
			${RM} server client $(OBJS)
			${RM} client_bonus server_bonus $(BONUS_OBJS)

re:			fclean all

.PHONY:		all server client clean fclean libft printf re bonus
