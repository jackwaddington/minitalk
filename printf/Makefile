NAME		= libftprintf.a
INCLUDE		= include
LIBFT		= libft
SRC_DIR		= src/
OBJ_DIR		= obj/
CC			= cc
CFLAGS		= -Wall -Werror -Wextra -I
RM			= rm -f
AR			= ar rcs

SRCS_FILES = ft_printf ft_print_char ft_print_str ft_print_int ft_print_unsigned ft_print_ptr

SRC			= $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRCS_FILES)))
OBJ			= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRCS_FILES)))

OBJF		= $(OBJ_DIR).cache_exists

all:		$(NAME)

$(NAME):	$(OBJ)
			make bonus -C $(LIBFT)
			cp libft/libft.a .
			mv libft.a $(NAME)
			$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
			$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJF):
			mkdir -p $(OBJ_DIR)
			touch $(OBJF)

clean:
			$(RM) -r $(OBJ_DIR)
			make clean -C $(LIBFT)

fclean:		clean
			$(RM) $(NAME)
			$(RM) $(LIBFT)/libft.a

re:			fclean all

.PHONY:		all clean fclean re
