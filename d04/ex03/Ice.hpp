/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 18:00:10 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 18:00:13 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ICE_HPP
#define FT_ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : virtual public AMateria
{
private:
	/* data */
public:
	Ice();
	~Ice();
	Ice(Ice const &rhs);
	Ice &operator=(Ice const &rhs);

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif 
