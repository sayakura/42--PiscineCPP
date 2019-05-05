/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 20:52:48 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/03 22:55:27 by qpeng            ###   ########.fr       */
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
        unsigned _max_hit_pnts;
        unsigned _max_energy_pnts;
        unsigned _melee_atk_dmg;
        unsigned _range_atk_dmg;
        unsigned _amr_dmg_reduction;
    public:
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