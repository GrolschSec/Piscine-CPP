# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romain <romain@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 22:57:50 by romain            #+#    #+#              #
#    Updated: 2023/12/12 13:50:27 by romain           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

NAME = Identify

CPP_FLAGS = -Wall -Werror -Wextra

CPP_VERSION = -std=c++98

SRCS =	main.cpp		\
		Base.cpp		\
		A.cpp			\
		B.cpp			\
		C.cpp				

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