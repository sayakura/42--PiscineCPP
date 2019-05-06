/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:58:29 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 17:58:36 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SQUAD_HPP
#define FT_SQUAD_HPP

#include <iostream>
#include "ISquad.hpp"

struct SquadNode
{
	ISpaceMarine *marine;
	SquadNode *next;
};

class Squad : virtual public ISquad
{
private:
	int count;
	SquadNode *head;
	SquadNode *tail;

public:
	Squad();
	~Squad();
	Squad(Squad const &rhs);
	Squad &operator=(Squad const &rhs);

	int getCount() const;
	ISpaceMarine *getUnit(int) const;
	int push(ISpaceMarine *&);
};

#endif