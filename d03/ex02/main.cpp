/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 05:39:29 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/03 21:50:08 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
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

void test(ScavTrap &subject)
{
	subject.takeDamage(50);
	subject.beRepaired(60);
	subject.takeDamage(200);
	subject.beRepaired(150);
	subject.meleeAttack("CPP");
	subject.rangedAttack("Makefile");
	subject.challengeNewcomer();
}

int main()
{
	FragTrap you("Bocal");
	test(you);
	ScavTrap cor("Corrector");
	test(cor);
	return 0;
}