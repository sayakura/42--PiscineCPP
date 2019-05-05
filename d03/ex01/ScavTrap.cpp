/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:35:02 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/03 21:16:17 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <ctime>
#include <cstdlib>
 
unsigned const MAX_CHANLLENGES = 3;

ScavTrap::ScavTrap(std::string name) : FragTrap(100U, 50U, 20U, 15U, 3U)
{
	_name = name;
    _type = "ScavTrap";
    _lvl = 1U;
    _hit_pnts = 100U;
    _energy_pnts = 100U;
}


ScavTrap::~ScavTrap(void) { }
ScavTrap::ScavTrap(ScavTrap const &rdi) : FragTrap(rdi) { }

void ScavTrap::challengeNewcomer(void)
{
	static std::string CHANLLENGES[] = {
        "write down the last 10 digits of the number π.",
        "get to level 42 at 42 in one day.",
        "give prefect score to everyone you correct today.",
    };
    std::srand(time(0));

    int index = (std::rand() % MAX_CHANLLENGES);
    std::cout << _type << " <" + _name << "> "
        << " your challenge is " 
        << CHANLLENGES[index] 
        << " !!!" << std::endl;
}