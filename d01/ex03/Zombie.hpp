#ifndef SELI_ZOMBIE_HPP
#define SELI_ZOMBIE_HPP

#include <string>
#include <iostream>
#include <sstream>

class Zombie
{
private:
	std::string name;
	std::string type;
	std::string gen_random_name(const int maxlen);

public:
	Zombie();
	~Zombie();
	void setNameType(std::string name, std::string type);
	void announce(void) const;
};

#endif
