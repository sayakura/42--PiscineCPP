/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 18:02:38 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 18:02:39 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AsteroKreog.hpp"

AsteroBocal::AsteroBocal()
{
}

AsteroBocal::~AsteroBocal()
{
}

AsteroBocal::AsteroBocal(AsteroBocal const &rhs)
{
	*this = rhs;
}

AsteroBocal &AsteroBocal::operator=(AsteroBocal const &)
{
	return *this;
}

std::string AsteroBocal::beMined(StripMiner *) const
{
	return "Krpite";
}
std::string AsteroBocal::beMined(DeepCoreMiner *) const
{
	return "Thorites";
}

std::string AsteroBocal::getName() const
{
	return "AsteroBocal";
}
