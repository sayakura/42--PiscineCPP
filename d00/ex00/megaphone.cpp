/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 15:16:58 by qpeng             #+#    #+#             */
/*   Updated: 2019/04/29 15:17:34 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; i < ac; std::cout << av[i++])
        for (int j = 0; av[i][j] != '\0'; j++)
            av[i][j] = ((unsigned char)(av[i][j] - 97) <= 25U) 
                ? av[i][j] & ~32 
                : av[i][j];
    std::cout << std::endl;
    return  (0);
}