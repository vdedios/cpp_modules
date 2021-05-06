NAME = megaphone

CXX = clang++
CPPFLAGS = -Wall -Werror -Wextra

SRCS 	= megaphone.cpp
OBJS	= $(SRCS:.cpp=.o)	

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:		
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all
