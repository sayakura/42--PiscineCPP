/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 22:48:23 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/02 23:28:40 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Fixed.hpp"

Fixed		parse_sum(char **expr);
float		ft_stof(char **str)
{
    int               dot = 0;
    std::string       s;
    float             ret;

	while ((**str >= '0' && **str <= '9') || **str == '.')
	{
        if (**str == '.')
            dot++;
        if (dot == 2)
        {
            std::cout << "Parse Error" << std::endl;
            ::exit(EXIT_FAILURE);
        }
        s += **str;
		(*str)++;
	}
    std::stringstream ss(s);
    ss >> ret;
    if (ss.fail())
    {
        std::cout << "Parse Error" << std::endl;
        ::exit(EXIT_FAILURE);
    }
	return (ret);
}

Fixed		parse_number(char **expr)
{
	Fixed nbr;

	while (**expr == ' ')
		(*expr)++;
	if (**expr == '(')
	{
		(*expr)++;
		nbr = parse_sum(expr);
		if (**expr == ')')
			(*expr)++;
		return (nbr);
	}
	return (ft_stof(expr));
}

Fixed		parse_factors(char **expr)
{
	Fixed		nbr;
	Fixed		nbr2;
	char	op;

	nbr = parse_number(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		op = **expr;
		if (op != '/' && op != '*')
			return (nbr);
		(*expr)++;
		nbr2 = parse_number(expr);
		if (op == '/')
			nbr = (nbr / nbr2);
		else if (op == '*')
			nbr = (nbr * nbr2);
        else
        {
            std::cout << "Error operator" << std::endl;
            ::exit(EXIT_FAILURE);
        }
	}
	return (nbr);
}

Fixed		parse_sum(char **expr)
{
	Fixed		nbr;
	Fixed		nbr2;
	char	    op;

	nbr = parse_factors(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		op = **expr;
		if (op != '+' && op != '-')
			return (nbr);
		(*expr)++;
		nbr2 = parse_factors(expr);
		if (op == '+')
			nbr = (nbr + nbr2);
		else
			nbr = (nbr - nbr2);
	}
	return (nbr);
}

Fixed		eval_expr(char *expr)
{
	return (parse_sum(&expr));
}

int     main(int ac, char **av)
{
    Fixed     ret;

    if (ac != 2)
    {
        std::cout << "Usage: eval_expr [arg1]; Only support * / + -;" << std::endl;
        ::exit(EXIT_FAILURE);
    }
    ret = eval_expr(av[1]);
    std::cout << ret << std::endl;
    return (0);
}