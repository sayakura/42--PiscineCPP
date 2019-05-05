/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 20:52:48 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/03 22:08:38 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
  private:
	    ClapTrap(void);

    protected:
        std::string _name;
        std::string _type;
        unsigned _hit_pnts;
        unsigned _energy_pnts;
        unsigned _lvl;
        unsigned const _max_hit_pnts;
        unsigned const _max_energy_pnts;
        unsigned const _melee_atk_dmg;
        unsigned const  _range_atk_dmg;
        unsigned const _amr_dmg_reduction;
        ClapTrap(unsigned, unsigned, unsigned, unsigned, unsigned);
        ~ClapTrap();
        ClapTrap(ClapTrap const&);
        ClapTrap &operator=(ClapTrap const&);
        void rangedAttack(std::string const&);
        void meleeAttack(std::string const&);
        void takeDamage(unsigned);
        void beRepaired(unsigned);
};

#endif