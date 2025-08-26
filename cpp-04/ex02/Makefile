# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elopin <elopin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/26 16:10:33 by elopin            #+#    #+#              #
#    Updated: 2025/08/26 16:11:20 by elopin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = classe_abstraite
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
