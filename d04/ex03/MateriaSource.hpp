/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 18:00:24 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 18:08:33 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATERIASOURCE_HPP
#define FT_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : virtual public IMateriaSource
{
private:
	AMateria *materias[4];
	int idx;

public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const &rhs);
	MateriaSource &operator=(MateriaSource const &rhs);

	void learnMateria(AMateria *);
	AMateria *createMateria(std::string const &type);
};

#endif
