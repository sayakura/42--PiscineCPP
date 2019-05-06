/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 18:00:01 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 18:00:04 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CURE_HPP
#define FT_CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : virtual public AMateria
{
private:
	/* data */
public:
	Cure();
	~Cure();
	Cure(Cure const &rhs);
	Cure &operator=(Cure const &rhs);

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif 
