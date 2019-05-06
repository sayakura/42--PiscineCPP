/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 18:02:50 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 18:02:50 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DEEPCOREMINER_HPP
#define FT_DEEPCOREMINER_HPP

#include <iostream>
#include "IMiningLaser.hpp"

class DeepCoreMiner : virtual public IMiningLaser
{
private:
	/* data */
public:
	DeepCoreMiner();
	~DeepCoreMiner();
	DeepCoreMiner(DeepCoreMiner const &rhs);
	DeepCoreMiner &operator=(DeepCoreMiner const &rhs);

	void mine(IAsteroid *);
};

#endif /* FT_DeepCoreMiner_HPP */
