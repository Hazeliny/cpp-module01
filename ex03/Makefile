# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 16:24:13 by linyao            #+#    #+#              #
#    Updated: 2024/11/08 16:26:48 by linyao           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = club
CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -rf

INC = Weapon.hpp HumanA.hpp HumanB.hpp
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	
%.o: %.cpp $(INC)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re