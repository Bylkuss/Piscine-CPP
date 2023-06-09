# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/18 12:57:58 by loadjou           #+#    #+#              #
#    Updated: 2023/05/20 16:19:13 by loadjou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Brain

CC = c++
CPPFLAGS = -g -Wall -Werror -Wextra -std=c++98
RM = rm -rf

HEADER =	Animal.hpp \
			Cat.hpp \
			Dog.hpp \
			Brain.hpp
D_OBJ = obj/
OBJS = $(patsubst %.cpp,$(D_OBJ)%.o,$(SRCS))
SRCS =	main.cpp \
		Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		Brain.cpp



#------------------------------------------------------------------------------#
#									 RULES									   #
#------------------------------------------------------------------------------#

all:	 $(NAME)

$(NAME):	$(D_OBJ) $(OBJS)
	@$(CC) $(CPPFLAGS) $(OBJS) -o $@
	@echo "$(OK_COLOR)BOOM 💥💥💥💥💥 $(NAME) Compiled! 💯 $(DEFAULT)"

$(D_OBJ):
	@mkdir -p $(D_OBJ)

$(OBJS): $(D_OBJ)%.o : %.cpp $(HEADER)
		@$(CC) $(CPPFLAGS) -c $< -o $@

run: re
	@clear
	@./$(NAME)

clean:
	@$(RM) $(D_OBJ)
	@echo "$(OK_COLOR)$(NAME) Cleaned 💯 $(DEFAULT)"

fclean:	clean
	@$(RM) $(NAME) $(NAME_BONUS)

re:	fclean all

.PHONY: all clean fclean re


#------------------------------------------------------------------------------#
#									 COLORS									   #
#------------------------------------------------------------------------------#

RED = \033[1;31m
YELLOW = \033[1;33m
DEFAULT = \033[0m
COM_COLOR   = \033[0;34m
OBJ_COLOR   = \033[0;36m
OK_COLOR    = \033[0;32m
ERROR_COLOR = \033[0;31m
WARN_COLOR  = \033[0;33m
NO_COLOR    = \033[m

summary: run
	valgrind --leak-check=summary --trace-children=yes --track-fds=yes ./$(NAME)

valgrind: run
	valgrind --leak-check=full  --show-leak-kinds=all --trace-children=yes --track-fds=yes ./$(NAME)