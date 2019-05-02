/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 23:14:53 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/01 23:14:54 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SELI_ZOMBIEHORDE_HPP
#define SELI_ZOMB

#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
private:
	int size;
	Zombie *zombies;

public:
	ZombieHorde(int n);
	~ZombieHorde();
	void announce(void);
};

#endif
