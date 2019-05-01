/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kura <Kura@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 07:44:12 by Kura              #+#    #+#             */
/*   Updated: 2019/05/01 08:02:28 by Kura             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <filesystem>

int     main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "Not enought args" << std::endl;
        ::exit(EXIT_FAILURE);
    }
    std::string filename    = av[1];
    std::string line;
    std::ifstream           file_in;
    
    if (file_in.is_open())
    {
        while (std::getline(file_in, line))
            std::cout << line << std::endl;
    }
    file_in.close();
    return (0);
}