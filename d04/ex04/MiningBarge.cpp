/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 18:03:16 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 18:03:16 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

MiningBarge::MiningBarge()
{
	for (int i = 0; i < 4; ++i)
		miners[i] = nullptr;
}

MiningBarge::~MiningBarge()
{
}

MiningBarge::MiningBarge(MiningBarge const &rhs)
{
	*this = rhs;
}

MiningBarge &MiningBarge::operator=(MiningBarge const &rhs)
{
	for (int i = 0; i < 4; ++i)
		miners[i] = rhs.miners[i];
	return *this;
}

void MiningBarge::equip(IMiningLaser *miner)
{
	for (int i = 0; i < 4; i++)
		if (miners[i] == nullptr)
		{
			miners[i] = miner;
			return;
		}
}

void MiningBarge::mine(IAsteroid *asteroid) const
{
	for (int i = 0; i < 4; i++)
		if (miners[i] != nullptr)
			miners[i]->mine(asteroid);
}
