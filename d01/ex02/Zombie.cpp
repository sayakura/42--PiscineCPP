/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 19:12:49 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/01 23:07:35 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name_, std::string type_) : name(name_), type(type_)
{
}

Zombie::~Zombie()
{
}

void Zombie::announce(void)
{
	std::cout << "<" << name << " (" << type << ")> "
			  << "Braiiiiiiinnnssss..." << std::endl;
}
