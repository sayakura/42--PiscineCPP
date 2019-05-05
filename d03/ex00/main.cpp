/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 05:39:29 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/03 20:43:48 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void test(FragTrap &subject)
{
	subject.takeDamage(50);
	subject.beRepaired(60);
	subject.takeDamage(200);
	subject.beRepaired(150);
	subject.meleeAttack("CPP");
	subject.rangedAttack("Makefile");
	subject.vaulthunter_dot_exe("TCHO");
	subject.vaulthunter_dot_exe("SELI");
	subject.vaulthunter_dot_exe("NCOLLIE");
}
int main()
{
	FragTrap you("Bocal");
	test(you);
	FragTrap you2 = you;
	you2.vaulthunter_dot_exe("Seli");
	test(you2);

	return 0;
}