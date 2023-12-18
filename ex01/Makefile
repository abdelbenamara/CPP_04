# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/18 17:36:47 by abenamar          #+#    #+#              #
#    Updated: 2023/12/18 20:14:57 by abenamar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := a.out

INCLUDES := -I $(CURDIR)

SRCS := Animal.cpp
SRCS += Brain.cpp
SRCS += Dog.cpp
SRCS += Cat.cpp
SRCS += WrongAnimal.cpp
SRCS += WrongCat.cpp
SRCS += main.cpp

OBJS := $(SRCS:.cpp=.o)

CC := c++

CFLAGS := -Wall
CFLAGS += -Wextra
CFLAGS += -Werror
CFLAGS += -std=c++98

RM := rm -f

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(INCLUDES)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re fclean clean all