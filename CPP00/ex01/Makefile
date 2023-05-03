# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 13:27:34 by loadjou           #+#    #+#              #
#    Updated: 2023/05/03 19:20:09 by loadjou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook

CC			=	c++
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98
RM			=	rm -rf

SRCS		=	src/*.cpp

OBJS		=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):
			@$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)
			@echo "$(GREEN)$(NAME) created!$(DEFAULT)"

fclean:
			@$(RM) $(NAME)
			@echo "$(RED)$(NAME) deleted!$(DEFAULT)"

re:			fclean all

.PHONY:		fclean, all, re

#COLORS
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
DEFAULT = \033[0m