/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:40:11 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 17:49:43 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name)
		: name(name), ap(40), weapon(nullptr)
{
}

Character::~Character(void)
{
}

Character::Character(Character const &rhs)
{
	*this = rhs;
}

Character &Character::operator=(Character const &rhs)
{
	name = rhs.name;
	ap = rhs.ap;
	weapon = rhs.weapon;
	return *this;
}

std::string Character::toString() const
{
	std::ostringstream sout;
	sout << name << " has " << ap << " and ";
	if (weapon == nullptr)
		sout << "is unarmed";
	else
		sout << "wields a " << weapon->getName();
	sout << std::endl;
	return sout.str();
}

void Character::recoverAP(void)
{
	ap = ap + 10 > 40 ? 40 : ap + 10;
}

void Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

void Character::attack(Enemy *&enemy)
{
	if (weapon == nullptr)
		return;
	if (enemy == nullptr)
	{
		std::cout << "Enemy Already Died" << std::endl;
		return;
	}
	if (ap < weapon->getAPCost())
	{
		std::cout << "Not enough AP" << std::endl;
		return;
	}
	std::cout << name << " attacks "
						<< enemy->getType() << " with a "
						<< weapon->getName() << std::endl;
	weapon->attack();
	ap -= weapon->getAPCost();
	enemy->takeDamage(weapon->getDamage());
	if (enemy->getHP() == 0)
	{
		delete enemy;
		enemy = nullptr;
	}
}

std::ostream &operator<<(std::ostream &out, const Character &character)
{
	out << character.toString();
	return out;
}
