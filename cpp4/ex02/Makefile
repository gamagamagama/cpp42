NAME		=	Brain
CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

SRC_DIR		=	src/
OBJ_DIR		=	obj/
INC_DIR		=	inc/

SRC_FILES	=	Animal.cpp \
				Brain.cpp \
				Cat.cpp \
				Dog.cpp \
				main.cpp

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

re: fclean all

.PHONY: all clean fclean re