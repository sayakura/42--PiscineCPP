/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:40:13 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 17:49:53 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHARACTER_HPP
#define FT_CHARACTER_HPP

#include <string>
#include <iostream>
#include <sstream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string name;
	int ap;
	AWeapon *weapon;

public:
	Character(std::string const &name);
	Character(Character const &rhs);
	Character &operator=(Character const &rhs);
	~Character();
	void recoverAP();
	void equip(AWeapon *);
	void attack(Enemy *&);
	std::string toString() const;
	std::string getName() const;
};

std::ostream &operator<<(std::ostream &out, const Character &character);

#endif
