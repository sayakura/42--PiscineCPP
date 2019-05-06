/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 18:00:08 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 18:00:08 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
		: AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice const &rhs)
		: AMateria("ice")
{
	*this = rhs;
}

Ice &Ice::operator=(Ice const &rhs)
{
	AMateria::operator=(rhs);
	return *this;
}

AMateria *Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName()
						<< " *" << std::endl;
}
