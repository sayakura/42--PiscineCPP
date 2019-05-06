/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 18:03:23 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 18:03:23 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MININGBARGE_HPP
#define FT_MININGBARGE_HPP

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"
#include <iostream>

class MiningBarge
{
private:
	IMiningLaser *miners[4];

public:
	MiningBarge();
	~MiningBarge();
	MiningBarge(MiningBarge const &rhs);
	MiningBarge &operator=(MiningBarge const &rhs);
	void equip(IMiningLaser *);
	void mine(IAsteroid *) const;
};

#endif /* FT_MiningBarge_HPP */
