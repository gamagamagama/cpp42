# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/19 15:21:18 by mgavorni          #+#    #+#              #
#    Updated: 2025/11/24 19:51:43 by mgavorni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	Sed
CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

SRC_DIR		=	src/
OBJ_DIR		=	obj/
INC_DIR		=	inc/

SRC_FILES	=	main.cpp


SRC			=	$(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ			=	$(addprefix $(OBJ_DIR), $(SRC_FILES:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(NAME) Built Successfully";

$(OBJ_DIR)%.o:	$(SRC_DIR)%.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<

clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
	rm -rf $(OBJ_DIR); \
	echo "Clean objects $(OBJ_DIR)"; else \
	echo "Nothing to Clean"; \
	fi;

fclean: clean
	@if [ -f "$(NAME)" ]; then \
	rm -f $(NAME); \
	echo "$(NAME) Deleted Successfully"; else \
	echo "Nothing to Delete"; \
	fi;
	@for f in *.replace; do \
        if [ -e "$$f" ]; then \
            base="$${f%.replace}"; \
            printf 'Removing: %s and %s\n' "$$f" "$$base"; \
            rm -f "$$f" "$$base"; \
    fi; \
	done

re: fclean all

.PHONY: all clean fclean re