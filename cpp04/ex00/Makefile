# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/05 12:03:14 by jmorneau          #+#    #+#              #
#    Updated: 2023/07/05 13:05:12 by jmorneau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_FILES = main.cpp Animal/Animal.cpp Animal/Dog/Dog.cpp Animal/Cat/Cat.cpp WrongAnimal/WrongAnimal.cpp WrongAnimal/WrongCat/WrongCat.cpp WrongAnimal/WrongDog/WrongDog.cpp
OBJ_DIR = objs/

OBJS = $(patsubst %.cpp, $(OBJ_DIR)%.o, $(SRC_FILES))

# Colors
_END = \033[0m
_BOLD = \033[1m
_BLUE = \033[34m

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(dir $@)
	@echo "$(_BLUE)$(_BOLD)Compiling CPP - EX00 : $<...$(_END)"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
