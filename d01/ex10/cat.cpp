/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 07:44:12 by Kura              #+#    #+#             */
/*   Updated: 2019/05/01 23:39:25 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int     main(int ac, char **av)
{
    std::string line;
    if (ac < 2)
    {
        while (std::getline(std::cin, line))
            std::cout << line << std::endl;
        ::exit(EXIT_FAILURE);
    }
    	for (int i = 1; i < ac; i++)
	{
		std::ifstream fin;
		fin.open(av[i]);
		if (!fin.is_open())
			std::cerr << "cat: " << av[i] << ": No such file or directory" << std::endl;
		else
		{
			while (std::getline(fin, line))
				std::cout << line << std::endl;
		}
	}
    return (0);
}