# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/29 15:17:02 by qpeng             #+#    #+#              #
#    Updated: 2019/04/30 20:02:59 by qpeng            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = crappy
SRC = Contact.cpp main.cpp strop.cpp  phonebook.cpp
OBJ = $(SRC:.cpp = .o)
all:
	@g++ -c -std=c++98 $(SRC)
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