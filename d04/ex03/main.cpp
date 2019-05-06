/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 18:00:17 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 18:00:17 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"
#include "Character.hpp"

#include <iostream>

int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *zaz = new Character("zaz"), *bob = new Character("bob");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	std::cout << tmp->getType() << std::endl;
	zaz->equip(tmp);
	zaz->use(0, *bob);
	tmp = src->createMateria("cure");
	std::cout << tmp->getType() << std::endl;
	zaz->equip(tmp);
	zaz->use(1, *bob);

	tmp = src->createMateria("cure");
	std::cout << tmp->getType() << std::endl;
	zaz->equip(tmp);
	zaz->use(2, *bob);
	delete bob;
	delete zaz;
	delete src;
	return 0;
}
