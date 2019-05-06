/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:59:38 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 17:59:38 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
		: name(name)
{
	for (int i = 0; i < 4; ++i)
		materias[i] = nullptr;
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
		if (materias[i])
			delete materias[i];
}

Character::Character(Character const &rhs)
		: name(rhs.name)
{
	*this = rhs;
}

Character &Character::operator=(Character const &rhs)
{
	for (int i = 0; i < 4; ++i)
		materias[i] = rhs.materias[i]->clone();
	return *this;
}

std::string const &Character::getName() const
{
	return name;
}
void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
		if (materias[i] == nullptr)
		{
			materias[i] = m->clone();
			return;
		}
}
void Character::unequip(int idx)
{
	if (0 <= idx && idx <= 3)
	{
		if (materias[idx])
			delete materias[idx];
		materias[idx] = nullptr;
	}
}
void Character::use(int idx, ICharacter &target)
{
	if (0 <= idx && idx <= 3)
		materias[idx]->use(target);
}
