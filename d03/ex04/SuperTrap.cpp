/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 22:33:48 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/03 23:16:23 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) :FragTrap(name),  NinjaTrap(name)
{
	NinjaTrap::_energy_pnts = 120U;
	NinjaTrap::_name = name;
	NinjaTrap::_type = "SUPER";
	NinjaTrap::_lvl = 1U;
	NinjaTrap::_melee_atk_dmg = 60U;
    NinjaTrap::_amr_dmg_reduction = 5U;
	std::cout << "Super trap string constructor triggered." << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "Super trap deconstructor triggered." << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &rdi) : FragTrap(rdi), NinjaTrap(rdi)
{
    *this = rdi;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &rdi)
{
    std::cout << " SupperTrap = triggered!" << std::endl;
    if (this != &rdi)
    {
        NinjaTrap::_name = rdi.NinjaTrap::_name;
        NinjaTrap::_type = "SUPER";
        NinjaTrap::_energy_pnts = rdi.NinjaTrap::_energy_pnts;
        NinjaTrap::_lvl = rdi.NinjaTrap::_lvl;
        NinjaTrap::_hit_pnts = rdi.NinjaTrap::_hit_pnts;
    }
    return *this;
}

void SuperTrap::getStat(void)
{
	std::cout << NinjaTrap::_type << std::endl;
    std::cout << FragTrap::_hit_pnts << std::endl;
    std::cout << FragTrap::_max_hit_pnts << std::endl;
    std::cout << NinjaTrap::_energy_pnts  << std::endl;
	std::cout << NinjaTrap::_name << std::endl;
	std::cout << NinjaTrap::_lvl  << std::endl;
	std::cout << NinjaTrap::_melee_atk_dmg << std::endl;
	std::cout << FragTrap::_range_atk_dmg << std::endl;
    std::cout << FragTrap::_amr_dmg_reduction  << std::endl;
}