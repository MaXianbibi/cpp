# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/04 22:00:22 by jmorneau          #+#    #+#              #
#    Updated: 2023/01/24 01:19:09 by jmorneau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
CC = @g++
CFLAGS = -Wall -Wextra -Werror
RM = @rm -f

SRC_DIR = ./
SRC_FILES =	./megaphone.cpp

OBJ_DIR = objs/
OBJS = ${addprefix ${OBJ_DIR}, $(SRC_FILES:.cpp=.o)}

${OBJ_DIR}%.o: ${SRC_DIR}%.cpp
	@echo "$(_BLUE)$(_BOLD)Compilation Printf: $< $(_END)"
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

#Couleurs!
_END=$'\x1b[0m
_BOLD=$'\x1b[1m
_UNDER=$'\x1b[4m
_RED=$'\x1b[31m
_GREEN=$'\x1b[32m
_YELLOW=$'\x1b[33m
_BLUE=$'\x1b[34m
_PURPLE=$'\x1b[35m
_WHITE=$'\x1b[37m
_IRED=$'\x1b[41m
_IGREEN=$'\x1b[42m
_IYELLOW=$'\x1b[43m
_IBLUE=$'\x1b[44m
_IPURPLE=$'\x1b[45m
_IWHITE=$'\x1b[47m

all: $(NAME)

$(NAME): ${OBJ_DIR} $(OBJS)
	${CC} ${OBJS} -o $@

${OBJ_DIR}:
	mkdir -p $@


clean:
	@$(RM) -r ${OBJ_DIR}

fclean: clean
	@$(RM) -r ${OBJ_DIR}
	@$(RM) $(NAME)

re: fclean all



