NAME = Materia

SRC = AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp main.cpp
HDF = AMateria.hpp Ice.hpp Cure.hpp ICharacter.hpp IMateriaSource.hpp
OBJ = $(SRC:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HDF)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
