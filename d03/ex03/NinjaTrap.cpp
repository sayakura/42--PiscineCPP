/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 04:08:14 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/03 22:19:50 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <ctime>
#include <cstdlib>

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(60U, 120U, 60U, 5U, 0U)

{
    _name = name;
    _type = "NINJA";
    _lvl = 1U;
    _hit_pnts = 60U;
    _energy_pnts = 120U;
    std::cout << _type + " string constructor triggered! " << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const& rdi) : ClapTrap(60U, 120U, 60U, 5U, 0U)
{
    std::cout << _type + " copy constructor triggered!" << std::endl;
    *this = rdi;
}

NinjaTrap::~NinjaTrap(void)
{
    std::cout << _type + " deconstructor triggered!" << std::endl;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const& rdi)
{
    std::cout << " NinjaTrap = triggered!" << std::endl;
    if (this != &rdi)
    {
        _name = rdi._name;
        _type = "NINJA";
        _energy_pnts = rdi._energy_pnts;
        _lvl = rdi._lvl;
        _hit_pnts = rdi._hit_pnts;
    }
    return *this;
}

void NinjaTrap::ninjaShoebox(FragTrap &rdi)
{
    rdi.vaulthunter_dot_exe(_name);
	std::cout << "NINJA " + _name + ": FragTrap?"
        << " I can beat him in one round" << std::endl;
}
void NinjaTrap::ninjaShoebox(ScavTrap &rdi)
{
    rdi.challengeNewcomer();
	std::cout << "NINJA " + _name + ": look at this ScavTrap"
        << ", he looks like trash" << std::endl;
}
void NinjaTrap::ninjaShoebox(NinjaTrap &rdi)
{
    (void)rdi;
    if (this == &rdi)
    {
        std::cout << "NINJA " + _name + ": I want to kill myself."
            << std::endl;
        return ;
    }
	std::cout << "NINJA " + _name + ":  I am the best ninja "
        << rdi._name << ", you are fake!"
        << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &rdi)
{
    (void)rdi;
	std::cout << "NINJA "  + _name + ": You are my parent, I wont hurt you"
    << std::endl;
    std::cout << "Lighting Hit!" << std::endl;
}