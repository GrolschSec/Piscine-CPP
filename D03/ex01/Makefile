# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/19 14:27:14 by rlouvrie          #+#    #+#              #
#    Updated: 2023/08/19 15:25:58 by rlouvrie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

NAME = ScavTrap

CPP_FLAGS = -Wall -Werror -Wextra

CPP_VERSION = -std=c++98

SRCS =	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp

OBJS := ${SRCS:.cpp=.o}

all: $(NAME)

$(NAME): ${OBJS}
	$(CC) $(CPP_FLAGS) $(CPP_VERSION) $(OBJS) -g -o $(NAME)

.cpp.o:
	$(CC) $(CPP_FLAGS) $(CPP_VERSION) -g -c $< -o $@

clean:
	rm -f *.o
	
fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re