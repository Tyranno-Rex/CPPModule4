NAME		= ex03

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS		= \
			main.cpp \
			ClapTrap.cpp\
			ScavTrap.cpp\
			FragTrap.cpp\
			DiamondTrap.cpp

OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@ $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:
	make fclean
	make all

.PHONY: all clean fclean re
