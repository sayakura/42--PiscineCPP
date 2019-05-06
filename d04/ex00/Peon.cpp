/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:29:45 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 17:35:33 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string iname) : Victim(iname)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(Peon const &rhs) : Victim(rhs)
{
	*this = rhs;
}

Peon &Peon::operator=(Peon const &rhs)
{
	this->name = rhs.name;
	return *this;
}

void Peon::getPolymorphed(void) const
{
	std::cout << name << " has been turned into a pink pony !" << std::endl;
}
