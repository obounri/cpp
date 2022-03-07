NAME = animals

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = Animal.hpp \
	Dog.hpp \
	Cat.hpp \
	WrongAnimal.hpp

SRC_FILE =  main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp
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