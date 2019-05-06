/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 18:02:44 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 18:02:45 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner()
{
}

DeepCoreMiner::~DeepCoreMiner()
{
}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const &rhs)
{
	*this = rhs;
}

DeepCoreMiner &DeepCoreMiner::operator=(DeepCoreMiner const &)
{
	return *this;
}

void DeepCoreMiner::mine(IAsteroid *asteroid)
{
	std::cout << "* mining deep ... got "
						<< asteroid->beMined(this) << " ! *" << std::endl;
}
