/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 05:39:29 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/03 22:13:01 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"


void test(NinjaTrap &subject, ScavTrap &st, FragTrap &nt, ClapTrap &ct)
{
	subject.takeDamage(50);
	subject.beRepaired(60);
	subject.takeDamage(200);
	subject.beRepaired(150);
	subject.meleeAttack("his brother");
	subject.rangedAttack("his sisther");
	subject.ninjaShoebox(subject);
	subject.ninjaShoebox(st);
	subject.ninjaShoebox(nt);
	subject.ninjaShoebox(ct);
}

int main(void)
{
	ScavTrap st("tcho");
	FragTrap ft("ncollie");
	NinjaTrap nt("seli");
	ClapTrap ct(100U, 100U, 30U, 20U, 10U);
	test(nt, st, ft, ct);
	return 0;
}