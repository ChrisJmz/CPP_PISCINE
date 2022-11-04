# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 14:08:59 by cjimenez          #+#    #+#              #
#    Updated: 2022/11/04 14:55:22 by cjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fragtrap

SRCS =	ClapTrap.cpp	\
		FragTrap.cpp	\
		ScavTrap.cpp	\
		main.cpp 		\

OBJS =	$(SRCS:.cpp=.o)
INCLUDE = include
RM = rm -rf
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

%.o:	%.cpp
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDE)

all:	$(NAME)

$(NAME):	$(OBJS) ClapTrap.hpp FragTrap.hpp
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS)
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re