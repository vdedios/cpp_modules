NAME = array

CXX = clang++
CPPFLAGS = -Wall -Wextra -Werror

OBJ_DIR	= obj/

SRC = main.cpp

OBJ	= $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

.PHONY:		all
all:		$(OBJ_DIR) $(NAME)

$(OBJ_DIR):
			mkdir $@

$(OBJ_DIR)%.o:	%.cpp
				$(CXX) $(CPPFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
			$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

.PHONY:		clean
clean:		
			rm -rf $(OBJ_DIR)

.PHONY:		fclean
fclean:		clean
			rm -rf $(NAME)

.PHONY:		re
re:			fclean all
