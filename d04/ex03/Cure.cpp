/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:59:55 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 17:59:56 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
		: AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure const &rhs)
		: AMateria("cure")
{
	*this = rhs;
}

Cure &Cure::operator=(Cure const &rhs)
{
	AMateria::operator=(rhs);
	return *this;
}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName()
						<< "'s wounds *" << std::endl;
}
