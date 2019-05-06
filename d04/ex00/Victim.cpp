/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:29:20 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 17:33:40 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string iname) : name(iname)
{
	std::cout << "Some random victim called " << iname
						<< " just popped !" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << name
						<< " just died for no apparent reason !" << std::endl;
}

Victim::Victim(Victim const &rhs)
{
	*this = rhs;
}

Victim &Victim::operator=(Victim const &rhs)
{
	this->name = rhs.name;
	return *this;
}

void Victim::getPolymorphed(void) const
{
	std::cout << name << " has been turned into a cute little sheep !" << std::endl;
}

std::string Victim::toString(void) const
{
	std::ostringstream sout;
	sout << "I'm " << name << " and I like otters !" << std::endl;
	return sout.str();
}

std::ostream &operator<<(std::ostream &out, const Victim &victim)
{
	out << victim.toString();
	return out;
}
