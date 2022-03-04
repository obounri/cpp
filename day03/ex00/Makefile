NAME = ClapTrap

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = ClapTrap.hpp

SRC_FILE =  main.cpp \
		ClapTrap.cpp
OBJ_FILE = $(SRC_FILE:.cpp=.o)

all : $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS)  -c $< -o $@

$(NAME) : $(OBJ_FILE) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ_FILE) -o $(NAME)

clean :
	rm -rf $(OBJ_FILE)

fclean : clean
	rm -rf $(NAME)

re : fclean all