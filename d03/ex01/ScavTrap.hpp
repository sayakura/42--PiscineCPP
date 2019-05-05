/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:36:21 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/03 21:13:31 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "FragTrap.hpp"

class ScavTrap : public FragTrap
{
    private:
        ScavTrap(void);
    public:
        ScavTrap(std::string name);
        ~ScavTrap(void);
        ScavTrap(ScavTrap const&);
        
        ScavTrap& operator=(ScavTrap const&);
        void challengeNewcomer(void);
};

#endif