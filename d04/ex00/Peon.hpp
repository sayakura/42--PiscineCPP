/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:29:48 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 17:29:56 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PEON_HPP
#define FT_PEON_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon : virtual public Victim
{
private:

public:
	Peon(std::string iname);
	~Peon();
	Peon(Peon const &rhs);
	Peon &operator=(Peon const &rhs);

	void getPolymorphed() const;
};

#endif
