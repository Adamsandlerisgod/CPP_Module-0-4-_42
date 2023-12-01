# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: whendrik <whendrik@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/26 16:34:27 by marvin            #+#    #+#              #
#    Updated: 2023/12/01 17:27:15 by whendrik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### Executablem###
NAME	= Zombie 

### Compilation ###
CC		= c++
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror -std=c++98

### Source Files ###
SRCS	= main.cpp Zombie.cpp zombieHorde.cpp 

### Object Files ###
OBJS	= $(SRCS:.cpp=.o)

### Compilation Rule ###
%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS) $(NAME)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re