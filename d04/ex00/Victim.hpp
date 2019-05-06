/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:29:30 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 17:34:04 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VICTIM_HPP
#define FT_VICTIM_HPP

#include <string>
#include <iostream>
#include <sstream>

class Victim
{
protected:
	std::string name;

public:
	Victim(std::string iname);
	~Victim(void);
	Victim(Victim const &rhs);
	Victim &operator=(Victim const &rhs);
	std::string toString(void) const;
	virtual void getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &out, const Victim &Victim);

#endif