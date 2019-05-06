/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:59:52 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 17:59:53 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHARACTER_HPP
#define FT_CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

class Character : virtual public ICharacter
{
private:
	std::string const name;
	AMateria *materias[4];

public:
	Character(std::string name);
	~Character();
	Character(Character const &rhs);
	Character &operator=(Character const &rhs);

	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif /* FT_Character_HPP */
