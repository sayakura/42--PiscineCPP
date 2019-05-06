/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 18:03:26 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 18:03:26 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"

StripMiner::StripMiner()
{
}

StripMiner::~StripMiner()
{
}

StripMiner::StripMiner(StripMiner const &rhs)
{
	*this = rhs;
}

StripMiner &StripMiner::operator=(StripMiner const &)
{
	return *this;
}

void StripMiner::mine(IAsteroid *asteroid)
{
	std::cout << "* strip mining ... got "
						<< asteroid->beMined(this) << " ! *" << std::endl;
}
