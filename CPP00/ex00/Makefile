# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 14:08:59 by cjimenez          #+#    #+#              #
#    Updated: 2022/10/11 11:38:30 by cjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp

OBJS =	$(SRCS:.cpp=.o)
INCLUDE = include
RM = rm -rf
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

%.o:	%.c
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDE)

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean:
	@$(RM) $(OBJS)
	@$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re