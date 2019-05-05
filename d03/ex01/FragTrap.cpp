/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 04:08:14 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/03 21:15:35 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <ctime>
#include <cstdlib>

int const MAX_ABILITIES = 5;

FragTrap::FragTrap(void) : _max_hit_pnts(100U),\
                           _max_energy_pnts(100U), _melee_atk_dmg(30U),\
                           _range_atk_dmg(20U), _amr_dmg_reduction(5U) {}

FragTrap::FragTrap(unsigned rdi, unsigned rsi, unsigned rdx, unsigned rcx, unsigned r8):\
                            _max_hit_pnts(rdi),\
                            _max_energy_pnts(rsi), _melee_atk_dmg(rdx),\
                            _range_atk_dmg(rcx), _amr_dmg_reduction(r8) {}

FragTrap::FragTrap(std::string name) : _max_hit_pnts(100U),\
                                      _max_energy_pnts(100U), _melee_atk_dmg(30U),\
                                      _range_atk_dmg(20U), _amr_dmg_reduction(5U)
{
    _name = name;
    _type = "FR4G-TP";
    _lvl = 1U;
    _hit_pnts = 100U;
    _energy_pnts = 100U;
    std::cout << "You tought the constructor gonna initialized a instance called " << _name
                << ", but it was me, DIO!" << std::endl;
}

FragTrap::FragTrap(FragTrap const& rdi) : _max_hit_pnts(100U),\
                                          _max_energy_pnts(100U), _melee_atk_dmg(30U),\
                                          _range_atk_dmg(20U), _amr_dmg_reduction(5U)
{
    *this = rdi;
}

FragTrap::~FragTrap(void)
{
    std::cout << "STAY AWAY FROM ME!!" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& rdi)
{
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

void FragTrap::rangedAttack(std::string const& target)
{
    std::cout << _type << " <" + _name
                << "> attacks <" + target
                << "> at range, causing <" << _range_atk_dmg
                << "> points of damage !"
                << std::endl;
}
void FragTrap::meleeAttack(std::string const& target)
{
    std::cout << _type << " <" + _name
                << "> attacks <" + target
                << "> at range, causing <" << _melee_atk_dmg
                << "> points of damage !"
                << std::endl;
}
void FragTrap::takeDamage(unsigned int amount)
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
void FragTrap::beRepaired(unsigned int amount)
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