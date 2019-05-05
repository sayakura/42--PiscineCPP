/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 03:59:20 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/03 21:27:07 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP 

#define FRAG_TRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
        FragTrap(void);
    public:
        FragTrap(std::string name);
        FragTrap(FragTrap const&);
        ~FragTrap(void);
        FragTrap& operator=(FragTrap const&);
        
        void        vaulthunter_dot_exe(std::string const & target);
};
#endif