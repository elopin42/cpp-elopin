# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elopin <elopin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/26 16:09:59 by elopin            #+#    #+#              #
#    Updated: 2025/08/26 16:10:00 by elopin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = je_ne_veux_pas_bruler_le_monde
SRCS = main.cpp \
			 animal.cpp \
			 spe.cpp \
			 WrongAnimal.cpp \
			 WrongCat.cpp \
			 brain.cpp

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

HEADER = WrongAnimal.hpp \
				 WrongCat.hpp \
				 animal.hpp \
				 spe.hpp \
				 brain.hpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp (HEADER)
	$(CC) $(CFLAGS) -I. -c $< -o $@

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
