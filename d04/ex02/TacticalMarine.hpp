/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:58:51 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 17:58:51 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TACTICALMARINE_HPP
#define FT_TACTICALMARINE_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : virtual public ISpaceMarine
{
private:
	/* data */
public:
	TacticalMarine();
	~TacticalMarine();
	TacticalMarine(TacticalMarine const &rhs);
	TacticalMarine &operator=(TacticalMarine const &rhs);
	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
