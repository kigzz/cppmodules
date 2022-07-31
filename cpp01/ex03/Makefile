# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/27 03:05:30 by bpouchep          #+#    #+#              #
#    Updated: 2022/07/27 03:05:31 by bpouchep         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror -MD

SRC =	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJ =	$(SRC:%.cpp=%.o)

DEP =	$(SRC:%.cpp=%.d)

### RULES ###

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
	rm -rf $(DEP)

fclean: clean
	rm -rf $(NAME)

re: fclean all

-include $(DEP)

.PHONY: all clean fclean re
