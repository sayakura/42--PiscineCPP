#include <iostream>
#include <sstream>
#include <limits>
#include <cmath>

void print_error()
{
	std::cerr << "char: impossible" << std::endl
						<< "int: impossible" << std::endl
						<< "float: impossible" << std::endl
						<< "double: impossible" << std::endl;
	exit(0);
}

void print_double(double number)
{
	char c = static_cast<char>(number);

	std::cout << "char: ";
	if (CHAR_MIN <= number && number <= CHAR_MAX)
		if (isprint(c))
			std::cout << c;
		else
			std::cout << "Non displayable";
	else
		std::cout << "impossible";
	std::cout << std::endl;
	std::cout << "int: ";
	if (INT_MIN <= number && number <= INT_MAX)
		std::cout << static_cast<int>(number);
	else
		std::cout << "impossible";
	std::cout << std::endl;
	std::cout << "float: " << static_cast<float>(number);
	if (!isnan(number) && !isinf(number) && floor(number) == number)
		std::cout << ".0";
	std::cout << "f" << std::endl;

	std::cout << "double: " << number;
	if (!isnan(number) && !isinf(number) && floor(number) == number)
		std::cout << ".0";
	std::cout << std::endl;

	exit(0);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "expecting one and only one parameter" << std::endl;
		return 0;
	}
	std::string input = argv[1];

	if (input.length() == 3 && input[0] == '\'' && input[2] == '\'')
		print_double(input[1]);
	int i;
	double d;
	std::istringstream sin(input);
	if (input.find('.') == std::string::npos && (sin >> i))
		print_double(i);

	sin.clear();
	sin.str(input);
	if (!(sin >> d))
	{
		if (input[input.length() - 1] == 'f')
			input = input.substr(0, input.length() - 1);
		std::istringstream sinnof(input);
		if (!(sinnof >> d))
			print_error();
	}

	print_double(d);
	return 0;
}