# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eliu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/09 15:45:35 by eliu              #+#    #+#              #
#    Updated: 2018/04/12 18:22:05 by eliu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ./grimly

HEADERS = grimly_header.h
INCLUDES_PATH = ./includes/
INCLUDES = $(addprefix $(INCLUDES_PATH), $(HEADERS))

FILES = main.c \
		solver.c \
		characters.c \
		instructions.c \

SRC_PATH = ./srcs/
SRC_FILES = $(addprefix $(SRC_PATH), $(FILES))

OBJ_PATH = ./objs/
OBJ_FILES = $(FILES:.c=.o)

C_FLAGS = -Wall -Wextra -Werror

LIBRARY = libft/libft.a

all: $(NAME)

$(NAME):
	make -C ./libft
	gcc $(C_FLAGS) -c $(SRC_FILES)
	gcc $(C_FLAGS) -I $(INCLUDES) -o $(NAME) $(OBJ_FILES) $(LIBRARY) 
	mkdir $(OBJ_PATH)
	mv $(OBJ_FILES) $(OBJ_PATH)

clean:
	rm -f $(OBJ_FILES)
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all

libft:
	cd ./libft && make re

.PHONY: all clean fclean re libft
