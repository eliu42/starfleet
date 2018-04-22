# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eliu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/16 18:06:14 by eliu              #+#    #+#              #
#    Updated: 2018/04/19 15:33:09 by eliu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILES = ft_printf.c \
		main.c \

SRC_PATH = ./srcs/
SRC_FILES = $(addprefix $(SRC_PATH), $(FILES))
OBJ_PATH = ./objs/
OBJ_FILES = $(FILES:.c=.o)

LIBFT_A = ./libft/libft.a

C_FLAGS = -Wall -Wextra -Werror

INCLUDES = -I includes -I libft/includes

all: $(NAME)

$(NAME):
	make -C libft
	gcc $(C_FLAGS) -c $(SRC_FILES) $(INCLUDES)
	ar rc $(NAME) $(OBJ_FILES)
	gcc $(C_FLAGS) srcs/main.c $(INCLUDES) -L. -lftprintf -Llibft -lft
#	ranlib $(NAME)
#	gcc $(C_FLAGS) srcs/main.c $(NAME)
#	mkdir $(OBJ_PATH) && mv $(OBJ_FILES) $(OBJ_PATH)

clean:
	rm -f $(OBJ_FILES)
	rm -rf $(OBJ_PATH)	

fclean: clean
	rm -f libftprintf.a

re: fclean all

libft: cd libft && make re

.PHONY: all clean fclean re libft
