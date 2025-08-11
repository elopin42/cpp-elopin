
NAME = UNNECESSARY_VIOLENCE

SRCS = main.cpp \
			 Makefile \
			 Weapon.cpp \
			 Weapon.hpp 
			 # HumanA.cpp \
			 # HumanA.hpp \
			 # HumanB.cpp \
			 # HumanB.hpp \

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

