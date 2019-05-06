/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 18:03:28 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 18:03:29 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRIPMINER_HPP
#define FT_STRIPMINER_HPP

#include <iostream>
#include "IMiningLaser.hpp"

class StripMiner : public IMiningLaser
{
private:
	/* data */
public:
	StripMiner();
	~StripMiner();
	StripMiner(StripMiner const &rhs);
	StripMiner &operator=(StripMiner const &rhs);

	void mine(IAsteroid *);
};

#endif /* FT_StripMiner_HPP */
