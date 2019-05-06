/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:29:36 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 17:34:10 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SORCERER_HPP
#define FT_SORCERER_HPP

#include <string>
#include <iostream>
#include <sstream>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string name;
	std::string title;

public:
	Sorcerer(std::string iname, std::string ititle);
	~Sorcerer();
	Sorcerer(Sorcerer const &rhs);
	Sorcerer &operator=(Sorcerer const &rhs);

	std::string toString() const;
	void polymorph(Victim const &) const;
};

std::ostream &operator<<(std::ostream &out, const Sorcerer &sorcerer);

#endif
