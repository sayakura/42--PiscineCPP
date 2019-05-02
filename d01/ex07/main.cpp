/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 06:46:09 by Kura              #+#    #+#             */
/*   Updated: 2019/05/01 23:24:44 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int     main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "usage: file [s1][s2]" << std::endl;
        ::exit(EXIT_FAILURE);
    }
    std::string filename    = av[1];
    std::string s1          = av[2];
    std::string s2          = av[3];
    std::string line;
    std::string f_replace   = filename + ".replace";
    size_t pos              = 0;
    std::ifstream file_in(filename, std::ifstream::in);
    std::ofstream file_out(f_replace, std::ostream::out);
    
    if (file_in.is_open() && file_out.is_open())
    {
        while (std::getline(file_in, line))
        {
            pos = 0;
            pos = 0;
            while ((pos = line.find(s1)) != std::string::npos)
                line.replace(pos, s1.length(), s2);
            file_out << line << std::endl;
        }
    } 
    else 
    {
        std::cout << "Error in Opening files" << std::endl;
        ::exit(EXIT_FAILURE);
    }
    file_in.close();
    file_out.close();
    return (0);
}