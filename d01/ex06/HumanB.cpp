#include "HumanB.hpp"

HumanB::HumanB(std::string iname) : name(iname)
{
	weapon = nullptr;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &iweapon)
{
	weapon = &iweapon;
}

void HumanB::attack()
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
