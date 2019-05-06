/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:40:47 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 17:40:47 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
		: Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &rhs)
		: Enemy(rhs)
{
}

SuperMutant &SuperMutant::operator=(SuperMutant const &rhs)
{
	Enemy::operator=(rhs);
	return *this;
}

void SuperMutant::takeDamage(int dmg)
{
	Enemy::takeDamage(dmg >= 3 ? dmg - 3 : 0);
}
