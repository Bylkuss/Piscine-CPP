# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/08 18:22:08 by loadjou           #+#    #+#              #
#    Updated: 2023/05/08 19:03:02 by loadjou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz

CC = c++
CPPFLAGS = -g -Wall -Werror -Wextra -std=c++98
RM = rm -rf

HEADER =	inc/Zombie.hpp
D_SRC = src/
D_OBJ = obj/
OBJS = $(patsubst $(D_SRC)%.cpp,$(D_OBJ)%.o,$(SRCS))
SRCS =	src/main.cpp \
		src/utils.cpp \
		src/Zombie.cpp \
		src/zombieHorde.cpp

#------------------------------------------------------------------------------#
#									 RULES									   #
#------------------------------------------------------------------------------#

all:	 $(NAME)
	@echo "$(OK_COLOR)BOOM 💥💥💥💥💥 $(NAME) Compiled! 💯 $(DEFAULT)"

$(NAME):	$(D_OBJ) $(OBJS)
	@$(CC) $(CPPFLAGS) $(OBJS) -o $@

$(D_OBJ):
	@mkdir -p $(D_OBJ)

$(OBJS): $(D_OBJ)%.o : $(D_SRC)%.cpp $(HEADER)
		@$(CC) $(CPPFLAGS) -c $< -o $@

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

summary:
	valgrind --leak-check=summary --trace-children=yes --track-fds=yes ./$(NAME)

valgrind:
	valgrind --leak-check=full  --show-leak-kinds=all --trace-children=yes --track-fds=yes ./$(NAME)