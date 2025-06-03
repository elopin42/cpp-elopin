NAME=cpp-ex00
FLAGS=-Wall -Wextra -Werror -std=c++98
SRCSF=main.c \
OBJSF=$(SRCSF:.c=.o)
SRCDIR=srcs/
OBJDIR=objs/
SRCS=$(addprefix srcs/, $(SRCSF))
OBJS=$(addprefix objs/, $(OBJSF))

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJS)
	@echo "\033[0m\033[1;35m|\033[0m"
	@cc $(FLAGS) -o $(NAME) $(OBJS)
	@echo "\033[1;32mcpp-ex00 ready ✓\033[0m"

$(OBJDIR)%.o:$(SRCDIR)%.c
	@echo " \c"
	@cc $(FLAGS) -c $^ -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)
	@echo "\033[1;35mcpp-ex00 compiling... |\033[0m\033[45m\c"

clean:
	@rm -rf $(OBJDIR)
	@echo "\033[1;31mcpp-ex00 objects deleted\033[0m"


fclean: clean
	@rm -rf $(NAME)
	@echo "\033[1;31mcpp-ex00 binary file deleted\033[0m"

re: fclean all

.PHONY: all clean fclean re
