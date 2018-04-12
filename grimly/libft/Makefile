# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eliu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 18:27:38 by eliu              #+#    #+#              #
#    Updated: 2018/04/11 16:11:24 by eliu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = atoi \
		bzero \
		isascii \
		isalnum \
		isalpha \
		isdigit \
		isupper \
		islower \
		isprint \
		isspace \
		toupper \
		tolower \
		memalloc \
		memchr \
		memcmp \
		memcpy \
		memccpy \
		memcpy_bwd \
		memdel \
		memmove \
		memset \
		putchar \
		putstr \
		putnbr \
		strcat \
		strncat \
		strchr \
		strrchr \
		strcmp \
		strncmp \
		strcpy \
		strncpy \
		strdel \
		strdup \
		strndup \
		strlen \
		strclen \
		strnlen \
		strstr \
		strnstr \
		strclr \
		striter \
		striteri \
		strmap \
		strmapi \
		strequ \
		strnequ \
		strsub \
		strnew \
		putnbr_fd \
		putchar_fd \
		putstr_fd \
		putendl_fd \
		putendl \
		strjoin \
		strjoin_memdel \
		strcjoin \
		strtrim \
		itoa \
		strsplit \
		strlcat \
		lstnew \
		lstdelone \
		lstdel \
		lstadd \
		lstiter \
		lstmap \

FT_FILES = $(addprefix ft_, $(FILES))
SRC_FILES = $(addsuffix .c,$(FT_FILES)) $(EXTRA_FILES)
EXTRA_FILES = get_next_line.c

OBJ_FILES = $(SRC_FILES:.c=.o)
OBJ_PATH = ./objs/

C_FLAGS = -Wall -Wextra -Werror
INCLUDES = ../includes/libft.h

all: $(NAME)

$(NAME):
	gcc $(C_FLAGS) -c $(SRC_FILES) -I $(INCLUDES)
	ar rc $(NAME) $(OBJ_FILES)
	ranlib $(NAME)
	mkdir $(OBJ_PATH) && mv $(OBJ_FILES) $(OBJ_PATH)

clean:
	rm -f $(addprefix $(OBJ_PATH), $(OBJ_FILES))
	rm -rf $(OBJ_PATH)
#	rm -rf $(addprefix $(OBJ_PATH), OBJ_FILES)
	

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
