#include "Character.hpp"
#include "AWeapon.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "Enemy.hpp"

int main()
{
	Character *zaz = new Character("zaz");
	std::cout << *zaz;
	Enemy *b = new RadScorpion();
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	zaz->attack(b);
	zaz->attack(b);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	b = new SuperMutant();
	zaz->equip(pf);
	std::cout << *zaz;
	zaz->attack(b);
	zaz->attack(b);
	zaz->attack(b);
	zaz->attack(b);
	zaz->attack(b);
	zaz->recoverAP();
	zaz->recoverAP();
	zaz->attack(b);
	zaz->attack(b);
	zaz->attack(b);
	zaz->attack(b);
	std::cout << *zaz;
	return 0;
}
