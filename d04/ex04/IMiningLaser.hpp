/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMiningLaser.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 18:03:09 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 18:03:09 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IMININGLASER_HPP
#define FT_IMININGLASER_HPP

#include "IAsteroid.hpp"

class IMiningLaser
{
public:
	virtual ~IMiningLaser() {}
	virtual void mine(IAsteroid *) = 0;
};

#endif /* FT_IMiningLaser_HPP */
