# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elopin <elopin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/19 16:27:54 by elopin            #+#    #+#              #
#    Updated: 2025/09/19 16:27:56 by elopin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ex03
SRCS = main.cpp \
			 Bureaucrat.cpp \
			 AForm.cpp \
			 ShrubberyCreationForm.cpp \
			 RobotomyRequestForm.cpp \
			 PresidentialPardonForm.cpp \
			 Intern.cpp

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

HEADER = Bureaucrat.hpp 

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -I. -c $< -o $@

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re

