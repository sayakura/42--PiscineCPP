#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <stdlib.h>
#include <unistd.h>

RobotomyRequestForm::RobotomyRequestForm(std::string t) :
Form("RobotomyRequestForm", 72, 45) {
	_target = t;
	srand(time(NULL));
}

void RobotomyRequestForm::action(void) const {
    int bell = 7;
	if (rand() % 2)
	{
	    for (int i = 0; i < 7; i++)
	        write(1, &bell, 1);
		std::cout << _target << " has been successfully robotomized!!!\n";
	}
	else
	{
		std::cout << "Robotomization failed and "
			<< _target << " is no longer with us...RIP\n";
	}
}
