NAME        = sed
CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98
SRCS        = main.cpp
OBJS        = $(SRCS:.cpp=.o)
RM          = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

run:all
	@./${NAME}
leak:all
	valgrind --leak-check=full --show-leak-kinds=all ./${NAME}

re: fclean all

.PHONY: all clean fclean re
