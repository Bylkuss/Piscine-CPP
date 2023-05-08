# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 12:27:11 by loadjou           #+#    #+#              #
#    Updated: 2023/05/08 13:12:49 by loadjou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

CC			=	c++
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98
RM			=	rm -rf

SRCS		=	src/megaphone.cpp

obj = $(SRCS:.cpp=.o)

all: $(NAME)
	@echo "BOOM 💥💥💥💥💥 $(NAME) Compiled! 💯 $(DEFAULT)"

$(NAME): $(obj)
	-@$(CC) $(CFLAGS) -o $(NAME) $(obj)

%.o: %.cpp
	-@$(CC) $(CFLAGS) -c $< -o $@

clean:
	-@$(RM) $(obj)
	@echo "🧹🧹🧹🧹🧹🧹 $(NAME) Cleaned! 🧹🧹🧹🧹🧹🧹"

fclean: clean
	-@$(RM) $(NAME)
	

re: fclean all 

.PHONY: all clean fclean re

#COLORS
RED = \033[1;31m
YELLOW = \033[1;33m
DEFAULT = \033[0m
COM_COLOR   = \033[0;34m
OBJ_COLOR   = \033[0;36m
OK_COLOR    = \033[0;32m
ERROR_COLOR = \033[0;31m
WARN_COLOR  = \033[0;33m
NO_COLOR    = \033[m