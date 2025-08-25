
NAME = je_ne_veux_pas_bruler_le_monde
SRCS = main.cpp \
			 animal.cpp \
			 spe.cpp \
			 WrongAnimal.cpp \
			 WrongCat.cpp \
			 brain.cpp

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -I. -c $< -o $@

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
