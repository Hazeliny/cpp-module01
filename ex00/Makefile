# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 13:07:10 by linyao            #+#    #+#              #
#    Updated: 2024/11/08 13:19:30 by linyao           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -rf

INC = Zombie.hpp
SRC = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
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