NAME        = megaphone
CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98
SRCS        = megaphone.cpp
OBJS        = $(SRCS:.cpp=.o)
RM          = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run:
	@./$(NAME)

leak:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)

.PHONY: all clean fclean re
