/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:40:16 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 17:50:02 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
		: hp(hp), type(type)
{
}

Enemy::~Enemy(void)
{
}

Enemy::Enemy(Enemy const &rhs)
{
	*this = rhs;
}

Enemy &Enemy::operator=(Enemy const &rhs)
{
	this->hp = rhs.hp;
	this->type = rhs.type;
	return *this;
}

int Enemy::getHP(void) const
{
	return hp;
}

std::string Enemy::getType(void) const
{
	return type;
}

void Enemy::takeDamage(int dmg)
{
	hp = dmg > hp ? 0 : hp - dmg;
}
