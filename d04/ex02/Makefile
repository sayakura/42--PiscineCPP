# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/04 17:57:49 by qpeng             #+#    #+#              #
#    Updated: 2019/05/04 17:57:50 by qpeng            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror
STD = -std=c++98
CC = clang++
SOURCES = *.cpp
NAME = main

$(NAME): $(SOURCES)
	$(CC) $(FLAGS) $(STD) $(SOURCES) -o $(NAME)

test: $(NAME)
	@./$(NAME) | cat -e
	@./$(NAME) | cat -e > $(NAME).output

diff: test
	diff -U 3 $(NAME).output test.output

clean:
	rm -f $(NAME)
