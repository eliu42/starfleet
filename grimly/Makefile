# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eliu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/09 15:45:35 by eliu              #+#    #+#              #
#    Updated: 2018/04/11 20:21:54 by eliu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  grimly

INCLUDES = ./includes/grimly_header.h

SRC_PATH = ./srcs/
FILES = main.c solver.c characters.c
SRC_FILES = $(addprefix $(SRC_PATH), $(FILES))

OBJ_FILES = $(FILES:.c=.o)
OBJ_PATH = ./objs/

C_FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	make -C ./libft
	gcc $(C_FLAGS) -c $(SRC_FILES)
	gcc $(C_FLAGS) -I $(INCLUDES) -o $(NAME) $(OBJ_FILES) 
	mkdir $(OBJ_PATH)
	mv $(OBJ_FILES) $(OBJ_PATH)

clean:
	rm -f $(addprefix $(OBJ_PATH), $(OBJ_FILES))
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
