# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elopin <elopin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/16 16:33:40 by elopin            #+#    #+#              #
#    Updated: 2025/08/16 16:33:50 by elopin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Moar_Brainz

SRCS = main.cpp \
			 Zombie.cpp \
			 ZombieHorde.cpp

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

