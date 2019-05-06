/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:27:34 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 17:33:07 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string iname, std::string ititle) : name(iname), title(ititle)
{
	std::cout << iname << ", " << ititle << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << name << ", " << title
						<< ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &rhs)
{
	*this = rhs;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &rhs)
{
	this->name = rhs.name;
	this->title = rhs.name;
	return *this;
}

std::string Sorcerer::toString(void) const
{
	std::ostringstream sout;
	sout << "I am " << name << ", " << title << ", and I like ponies !" << std::endl;
	return sout.str();
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, const Sorcerer &sorcerer)
{
	out << sorcerer.toString();
	return out;
}
