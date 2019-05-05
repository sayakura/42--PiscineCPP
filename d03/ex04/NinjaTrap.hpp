/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 21:53:10 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/03 22:59:39 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
  private:
		NinjaTrap();

  public:
		NinjaTrap(std::string iname);
		~NinjaTrap();
		NinjaTrap(NinjaTrap const &rhs);
		NinjaTrap &operator=(NinjaTrap const &rhs);
		void ninjaShoebox(FragTrap &subject);
		void ninjaShoebox(ScavTrap &subject);
		void ninjaShoebox(NinjaTrap &subject);
		void ninjaShoebox(ClapTrap &ClapTrap);
};

#endif