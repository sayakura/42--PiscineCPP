# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/01 23:25:52 by qpeng             #+#    #+#              #
#    Updated: 2019/05/01 23:25:53 by qpeng            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror
STD = -std=c++98
CC = clang++
SOURCES = *.cpp
NAME = replace

$(NAME): $(SOURCES)
	$(CC) $(FLAGS) $(STD) $(SOURCES) -o $(NAME)

test: $(NAME)
	@./$(NAME)

clean:
	rm -f $(NAME)
