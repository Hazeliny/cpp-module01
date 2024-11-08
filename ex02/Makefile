# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 15:03:17 by linyao            #+#    #+#              #
#    Updated: 2024/11/08 15:04:58 by linyao           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -rf

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	
%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re