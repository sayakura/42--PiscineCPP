#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include <iostream>

int main()
{
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *jim = new AssaultTerminator;
	ISpaceMarine *someone = new TacticalMarine;
	Squad *vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine *cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	Squad *clone = new Squad(*vlc);
	std::cout << bob << " " << jim << " " << someone << std::endl;
	std::cout << vlc->push(bob) << std::endl;
	std::cout << clone->push(someone) << std::endl;
	delete vlc;
	delete clone;
	return 0;
}
