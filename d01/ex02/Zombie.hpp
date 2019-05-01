
#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class	Zombie {

	public: 
		Zombie(std::string, std::string); 
		~Zombie(void);

		std::string 	name;
		std::string		typez;

		void announce();
};

#endif
