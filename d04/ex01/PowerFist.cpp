/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:40:34 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 17:40:34 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PowerFist.hpp"

PowerFist::PowerFist()
		: AWeapon("Power Fist", 50, 8)
{
}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(PowerFist const &rhs)
		: AWeapon(rhs)
{
}

PowerFist &PowerFist::operator=(PowerFist const &rhs)
{
	AWeapon::operator=(rhs);
	return *this;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
