# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eliu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/16 18:06:14 by eliu              #+#    #+#              #
#    Updated: 2018/04/17 15:15:51 by eliu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILES = main.c

SRC_PATH = ./srcs/
SRC_FILES = $(addprefix $(SRC_PATH), FILES)
OBJ_PATH = ./objs/
OBJ_FILES = $(FILES:c=.o)

all: $(NAME)

$(NAME):

clean:
	rm -f $(OBJ_FILES)
	rm -rf $(OBJ_PATH)	

fclean: clean
	rm -f libftprintf.a

re: fclean all

libft: cd libft && make re

.PHONY: all clean fclean re libft
