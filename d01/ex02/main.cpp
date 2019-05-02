#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>

std::string gen_random_name(const int maxlen)
{
	static const char alphanum[] =
		"guapi guapi"
		"wang 3ho"
		"snake skin monster";

	std::string name;
	std::stringstream s(name);
	const int len = (std::rand() % maxlen) + 1;
	for (int i = 0; i < len; ++i)
		s << alphanum[std::rand() % (sizeof(alphanum) - 1)];
	s >> name;
	return name;
}

void randomChump(ZombieEvent &ze)
{
	Zombie *z = ze.newZombie(gen_random_name(50));
	z->announce();
	delete z;
}

int main(int argc, char *argv[])
{
	std::srand(std::time(nullptr));
	if (argc != 2)
	{
		std::cout << std::endl;
		return 0;
	}
	ZombieEvent ze = ZombieEvent();
	ze.setZombieType(argv[1]);
	for (int i = 0; i < 10; i++)
		randomChump(ze);
	return 0;
}
