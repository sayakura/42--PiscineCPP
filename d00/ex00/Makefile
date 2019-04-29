# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/29 15:17:02 by qpeng             #+#    #+#              #
#    Updated: 2019/04/29 15:24:13 by qpeng            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRC = megaphone.cpp 
OBJ = $(SRC:.cpp = .o)
all:
	g++ -c $(SRC)
	gcc $(OBJ) -o $(NAME)
clean:
	rm *.o
fclean: clean
	rm -f $(NAME)
re: clean all

.PHONY: all, $(NAME), clean, fclean, re