/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 18:00:22 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 18:00:22 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : idx(0)
{
	for (int i = 0; i < 4; ++i)
		materias[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		if (materias[i] != nullptr)
			delete materias[i];
}

MateriaSource::MateriaSource(MateriaSource const &rhs)
{
	*this = rhs;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	for (int i = 0; i < 4; ++i)
		if (rhs.materias[i] != nullptr)
			materias[i] = rhs.materias[i]->clone();
		else
			materias[i] = nullptr;
	idx = rhs.idx;
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	materias[idx++] = materia->clone();
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
		if (materias[i] != nullptr && materias[i]->getType() == type)
			return materias[i]->clone();
	return nullptr;
}
