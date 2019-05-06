/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:40:49 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 17:40:59 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUPERMUTANT_HPP
#define FT_SUPERMUTANT_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"

class SuperMutant : virtual public Enemy
{
private:
	/* data */
public:
	SuperMutant();
	~SuperMutant();
	SuperMutant(SuperMutant const &rhs);
	SuperMutant &operator=(SuperMutant const &rhs);

	void takeDamage(int);
};

#endif 
