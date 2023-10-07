# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/20 18:11:04 by rlouvrie          #+#    #+#              #
#    Updated: 2023/10/07 16:50:27 by rlouvrie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

NAME = MateriaWorld

CPP_FLAGS = -Wall -Werror -Wextra

CPP_VERSION = -std=c++98

SRCS =	main.cpp			\
		AMateria.cpp 		\
		Character.cpp 		\
		Cure.cpp 			\
		Ice.cpp 			\
		MateriaSource.cpp

OBJS := ${SRCS:.cpp=.o}

all: $(NAME)

$(NAME): ${OBJS}
	$(CC) $(CPP_FLAGS) $(CPP_VERSION) $(OBJS) -o $(NAME)

.cpp.o:
	$(CC) $(CPP_FLAGS) $(CPP_VERSION) -c $< -o $@

clean:
	rm -f *.o
	
fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
