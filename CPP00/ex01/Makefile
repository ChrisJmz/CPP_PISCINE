# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 15:40:17 by cjimenez          #+#    #+#              #
#    Updated: 2022/10/10 16:09:29 by cjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRCS =	phonebook.cpp		\
		Contact.class.cpp	\
		PhoneBook.class.cpp	\

OBJS = ${SRCS:.cpp=.o}
INCLUDE = ./
RM = rm -rf
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

%.o:	%.c
	@${CC} ${CFLAGS} -c $< -o $@ -I ${INCLUDE}

all:	${NAME}

${NAME}:	${OBJS}
	@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	@${RM} ${OBJS}

fclean:
	@${RM} ${OBJS}
	@${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re