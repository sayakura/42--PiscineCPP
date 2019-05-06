/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:40:45 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 17:55:09 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RADSCORPION_HPP
#define FT_RADSCORPION_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"

class RadScorpion : virtual public Enemy
{
private:
	/* data */
public:
	RadScorpion(void);
	~RadScorpion(void);
	RadScorpion(RadScorpion const &rhs);
	RadScorpion &operator=(RadScorpion const &rhs);
};

#endif 
