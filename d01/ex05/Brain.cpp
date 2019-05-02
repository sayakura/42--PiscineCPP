/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 23:16:37 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/01 23:16:37 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	powerlever = 9000;
}

Brain::~Brain()
{
}

std::string Brain::identify() const
{
	std::string str;
	std::stringstream s(str);
	s << this;
	s >> str;

	return str;
}
