/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 22:33:09 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/03 23:13:24 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <string>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
  private:
	SuperTrap();

  public:
	SuperTrap(std::string iname);
	~SuperTrap();
	SuperTrap(SuperTrap const &rhs);
	SuperTrap &operator=(SuperTrap const &rhs);
    void getStat(void);
};

#endif