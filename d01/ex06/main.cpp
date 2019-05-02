/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 23:18:29 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/01 23:20:48 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon wp = Weapon("=|=====>");
		HumanA seli("seli", wp);
		seli.attack();
		wp.setType("=|~~~~~~~>");
		seli.attack();
	}
	{
		Weapon wp = Weapon("=|=====>");
		HumanB seli2("seli2");
		seli2.setWeapon(wp);
		seli2.attack();
		wp.setType("=|~~~~~~~>");
		seli2.attack();
	}
}
