# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 12:27:11 by loadjou           #+#    #+#              #
#    Updated: 2023/04/24 12:34:38 by loadjou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

CC			=	clang++
INCLUDE		=	include/megaphone.hpp
CPPFLAGS	=	-Wall -Werror -Wextra
RM			=	rm -rf

SRCS		=	src/megaphone.cpp

all:		$(NAME)

$(NAME):
			@$(CC) $(CPPFLAGS) $(SRCS) -I $(INCLUDE) -o $(NAME)
			@echo "$(GREEN)$(NAME) created!"

fclean:
			@$(RM) $(NAME)
			@echo "$(RED)$(NAME) deleted!"

re:			fclean all

.PHONY:		fclean, all, re

#COLORS
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
DEFAULT = \033[0m