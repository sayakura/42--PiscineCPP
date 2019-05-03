
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98
CC = clang++
SOURCES = *.cpp
NAME = eval_expr

$(NAME): $(SOURCES)
	$(CC) $(FLAGS) $(STD) $(SOURCES) -o $(NAME)

test: $(NAME)
	@./$(NAME)

clean:
	rm -f $(NAME)
