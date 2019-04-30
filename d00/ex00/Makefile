# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/29 15:17:02 by qpeng             #+#    #+#              #
#    Updated: 2019/04/29 15:32:43 by qpeng            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRC = megaphone.cpp 
OBJ = $(SRC:.cpp = .o)
all:
	@g++ -c $(SRC)
	@g++ $(OBJ) -o $(NAME)
	@echo "Executable created."
clean:
	@rm -rf *.o
	@echo "Object files cleaned."
fclean: clean
	@rm -rf $(NAME)
	@echo "Executable cleaned."
re: clean all

.PHONY: all, $(NAME), clean, fclean, re