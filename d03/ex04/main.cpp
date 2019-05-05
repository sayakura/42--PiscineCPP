/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 05:39:29 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/03 23:18:16 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "SuperTrap.hpp"

void test(SuperTrap &rdi, NinjaTrap &nt, ScavTrap &st, FragTrap &ft, ClapTrap &ct)
{
	rdi.NinjaTrap::takeDamage(50);
	rdi.NinjaTrap::beRepaired(60);
	rdi.NinjaTrap::takeDamage(200);
	rdi.NinjaTrap::beRepaired(150);
	rdi.NinjaTrap::meleeAttack("his brother");
	rdi.NinjaTrap::rangedAttack("his sisther");
	rdi.NinjaTrap::ninjaShoebox(ft);
	rdi.NinjaTrap::ninjaShoebox(st);
	rdi.NinjaTrap::ninjaShoebox(nt);
	rdi.NinjaTrap::ninjaShoebox(ct);
	rdi.vaulthunter_dot_exe("seli");
	rdi.getStat();
}

int main(void)
{
	ScavTrap st("tcho");
	FragTrap ft("ncollie");
	NinjaTrap nt("seli");
	
	SuperTrap sp("guapi");
	ClapTrap ct(100U, 100U, 30U, 20U, 10U);
	test(sp, nt, st, ft, ct);
	return 0;
}