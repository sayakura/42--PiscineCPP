/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 04:08:14 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/03 21:31:42 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <ctime>
#include <cstdlib>

int const MAX_ABILITIES = 5;

FragTrap::FragTrap(std::string name) : ClapTrap(100U, 100U, 30U, 20U, 5U)

{
    _name = name;
    _type = "FR4G-TP";
    _lvl = 1U;
    _hit_pnts = 100U;
    _energy_pnts = 100U;
    std::cout << _type + " string constructor triggered! " << std::endl;
}

FragTrap::FragTrap(FragTrap const& rdi) : ClapTrap(100U, 100U, 30U, 20U, 5U)
{
    std::cout << _type + " copy constructor triggered!" << std::endl;
    *this = rdi;
}

FragTrap::~FragTrap(void)
{
    std::cout << _type + " deconstructor triggered!" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& rdi)
{
    std::cout << " FragTrap = triggered!" << std::endl;
    if (this != &rdi)
    {
        _name = rdi._name;
        _type = "FR4G-TP";
        _energy_pnts = rdi._energy_pnts;
        _lvl = rdi._lvl;
        _hit_pnts = rdi._hit_pnts;
    }
    return *this;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	static std::string ABILITIES[] = {
        "King Crimson",
        "Sticky Finger",
        "Golden Experience",
        "Star Platinum",
        "The World"
    };

    (void)_max_energy_pnts;
    std::srand(time(0));
    std::cout << _type << " <" + _name << "> ";
    if (_energy_pnts >= 25U)
    {
        _energy_pnts -= 25U;
        std::cout << "Using stand power -- "
                    << ABILITIES[std::rand() % MAX_ABILITIES] \
                    << " on " << target << " !" << std::endl;
    }
    else
        std::cout << "GG I am out of mana. gimme that blue!" << std::endl;
}