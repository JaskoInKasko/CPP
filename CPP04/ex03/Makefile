
C++ = c++
C++_FLAGS = -Wall -Wextra -Werror
SRC = main.cpp AMateria.cpp ICharacter.cpp Ice.cpp Cure.cpp\
Brain.cpp

OBJ = $(SRC:.cpp=.o)
NAME = Interface

all: $(NAME)

$(NAME): $(OBJ)
	@$(C++) $(C++_FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(C++) $(C++_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean