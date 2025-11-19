# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/19 15:21:18 by mgavorni          #+#    #+#              #
#    Updated: 2025/11/19 15:36:58 by mgavorni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	PhoneBook
CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

SRC_DIR		=	src/
OBJ_DIR		=	obj/
INC_DIR		=	inc/

SRC_FILES	=	PhoneBook.cpp \
				Contact.cpp \
				main.cpp

SRC			=	$(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ			=	$(addprefix $(OBJ_DIR), $(SRC_FILES:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Build successful"

$(OBJ_DIR)%.o:	$(SRC_DIR)%.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<

clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
	rm -rf $(OBJ_DIR); \
	echo "Clean"; else \
	echo "Nothing to Clean"; \
	fi;

fclean: clean
	@if [ -f "$(NAME)" ]; then \
	rm -f $(NAME); \
	echo "Deleted $(NAME)"; else \
	echo "No binary found"; \
	fi;

re: fclean all

.PHONY: all clean fclean re