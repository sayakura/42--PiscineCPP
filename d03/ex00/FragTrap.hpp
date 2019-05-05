/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 03:59:20 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/03 21:14:24 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP 

#define FRAG_TRAP_HPP

#include <iostream>

class FragTrap
{
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
        FragTrap(void);
        FragTrap(unsigned, unsigned, unsigned, unsigned, unsigned);
    public:
        FragTrap(std::string name);
        FragTrap(FragTrap const&);
        ~FragTrap(void);
        FragTrap& operator=(FragTrap const&);
        
        void        rangedAttack(std::string const& target);
        void        meleeAttack(std::string const& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        void        vaulthunter_dot_exe(std::string const & target);
};

        // std::string getName(void) const;
        // int         getEnergyPnts(void) const;
        // int         getLvl(void) const;
        // int         getHitPnts(void) const;
#endif