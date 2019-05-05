/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 21:00:46 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/03 22:13:46 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <ctime>
#include <cstdlib>

ClapTrap::ClapTrap(void) : _max_hit_pnts(100U),\
                           _max_energy_pnts(100U), _melee_atk_dmg(30U),\
                           _range_atk_dmg(20U), _amr_dmg_reduction(5U)
{
    std::cout << "ClapTrap void constructor is initialized." << std::endl;
}
ClapTrap::ClapTrap(unsigned rdi, unsigned rsi, unsigned rdx, unsigned rcx, unsigned r8):\
                            _max_hit_pnts(rdi),\
                            _max_energy_pnts(rsi), _melee_atk_dmg(rdx),\
                            _range_atk_dmg(rcx), _amr_dmg_reduction(r8) 
{
    std::cout << "ClapTrap constuctor with 5 unsigned initialized " << std::endl;
}


ClapTrap::ClapTrap(ClapTrap const& rdi) : _max_hit_pnts(100U),\
                                          _max_energy_pnts(100U), _melee_atk_dmg(30U),\
                                          _range_atk_dmg(20U), _amr_dmg_reduction(5U)
{
    std::cout << "ClapTrap copy constructor is initialized!" << std::endl; 
    *this = rdi;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap destructor is triggered!" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& rdi)
{
    if (this != &rdi)
    {
        _name = rdi._name;
        _type = "ClapTrap";
        _energy_pnts = rdi._energy_pnts;
        _lvl = rdi._lvl;
        _hit_pnts = rdi._hit_pnts;
    }
    return *this;
}

void ClapTrap::rangedAttack(std::string const& target)
{
    std::cout << _type << " <" + _name
                << "> attacks <" + target
                << "> at range, causing <" << _range_atk_dmg
                << "> points of damage !"
                << std::endl;
}
void ClapTrap::meleeAttack(std::string const& target)
{
    std::cout << _type << " <" + _name
                << "> attacks <" + target
                << "> at range, causing <" << _melee_atk_dmg
                << "> points of damage !"
                << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    amount -= (amount > _amr_dmg_reduction)
        ? _amr_dmg_reduction
        : 0;
    amount = (amount > _hit_pnts)
        ? _hit_pnts
        : amount;
    _hit_pnts -= amount;
    if (_hit_pnts == 0)
        std::cout << _type << " <" + _name << "> "
            << "taken " << amount << " of damage, GG man 🙃" << std::endl;
    else
        std::cout << _type << " <" + _name << "> "
                    << "taken " << amount 
                    << " points of damege!"
                    << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    amount = (amount + _hit_pnts >= _max_hit_pnts) 
        ? (_max_hit_pnts - _hit_pnts)
        : amount;
    _hit_pnts += amount;
    if (_hit_pnts == _max_hit_pnts)
        std::cout << _type << " <" + _name << "> "
                << "repaired " << amount << " points of damage "
                << ", now is totally recovered! 😇"
                << std::endl;
    else
        std::cout << _type << " <" + _name << "> "
                    << "repaired " << amount 
                    << "points of damage!"
                    << std::endl;
}
