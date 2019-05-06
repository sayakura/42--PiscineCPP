/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:59:07 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 17:59:07 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
		: type(type), xp_(0)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(AMateria const &rhs)
		: type(rhs.type), xp_(0)
{
	*this = rhs;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	xp_ = rhs.xp_;
	return *this;
}

void AMateria::use(ICharacter &)
{
	xp_ += 10;
}

std::string const &AMateria::getType() const
{
	return type;
}

unsigned int AMateria::getXP() const
{
	return xp_;
}
