#include "Zombie.hpp"

Zombie::Zombie()
{
	name = gen_random_name(50);
	type = gen_random_name(5);
	std::cout << "Zombie " << name << " "
			  << "(" << type << ") comes to 'live'" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " (" << type << ")" << std::endl;
}

std::string Zombie::gen_random_name(const int maxlen)
{
	static const char alphanum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	std::string name;
	std::stringstream s(name);
	const int len = (std::rand() % maxlen) + 1;
	for (int i = 0; i < len; ++i)
		s << alphanum[std::rand() % (sizeof(alphanum) - 1)];
	s >> name;
	return name;
}

void Zombie::setNameType(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

void Zombie::announce(void) const
{
	std::cout << "<" << name << " (" << type << ")> "
			  << "Braiiiiiiinnnssss..." << std::endl;
}
