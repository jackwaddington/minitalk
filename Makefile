# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwadding <jwadding@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/01 12:41:43 by jwadding          #+#    #+#              #
#    Updated: 2024/06/01 12:58:05 by jwadding         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CLIENT_NAME = client

SERVER_NAME = server

C_SOURCE = client.c

S_SOURCE = server.c
			
C_OBJECT = $(C_SOURCE:.c=.o)

S_OBJECT = $(S_SOURCE:.c=.o)

CLIENT_NAME_BONUS = client_bonus

SERVER_NAME_BONUS = server_bonus

C_SOURCE_BONUS = client_bonus.c

S_SOURCE_BONUS = server_bonus.c
			
C_OBJECT_BONUS = $(C_SOURCE_BONUS:.c=.o)

S_OBJECT_BONUS = $(S_SOURCE_BONUS:.c=.o)

LIBFT = libft/libft.a

PRINTF = printf/libftprintf.a

all: $(CLIENT_NAME) $(SERVER_NAME)

bonus: $(CLIENT_NAME_BONUS) $(SERVER_NAME_BONUS)

%.o:%.c
	@cc -Wall -Wextra -Werror -c $< -o $(<:.c=.o)

$(CLIENT_NAME): $(C_OBJECT)
	@make -C libft
	@make -C printf
	@cc -Wall -Wextra -Werror $(C_OBJECT) $(LIBFT) $(PRINTF) -o $(CLIENT_NAME)
	@echo client made

$(SERVER_NAME): $(S_OBJECT)
	@make -C libft
	@make -C printf
	@cc -Wall -Wextra -Werror $(S_OBJECT) $(LIBFT) $(PRINTF) -o $(SERVER_NAME)
	@echo server made

$(CLIENT_NAME_BONUS): $(C_OBJECT_BONUS)
	@make -C libft
	@make -C printf
	@cc -Wall -Wextra -Werror $(C_OBJECT_BONUS) $(LIBFT) $(PRINTF) -o $(CLIENT_NAME_BONUS)
	@echo client_bonus made

$(SERVER_NAME_BONUS): $(S_OBJECT_BONUS)
	@make -C libft
	@make -C printf
	@cc -Wall -Wextra -Werror $(S_OBJECT_BONUS) $(LIBFT) $(PRINTF) -o $(SERVER_NAME_BONUS)
	@echo server_bonus made
clean:
	rm -f $(C_OBJECT)
	rm -f $(S_OBJECT)
	rm -f $(C_OBJECT_BONUS)
	rm -f $(S_OBJECT_BONUS)
	@make clean -C libft
	@make clean -C printf

fclean: clean
	@rm -f $(CLIENT_NAME)
	@rm -f $(SERVER_NAME)
	@rm -f $(CLIENT_NAME_BONUS)
	@rm -f $(SERVER_NAME_BONUS)
	@rm -f libft/libft.a
	@rm -f printf/libftprintf.a

re: fclean all

.PHONY: clean fclean all re makelibft bonus