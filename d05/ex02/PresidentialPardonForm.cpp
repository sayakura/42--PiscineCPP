#include "PresidentialPardonForm.hpp"
#include <ctime>
#include <stdlib.h>

PresidentialPardonForm::PresidentialPardonForm(std::string t) :
Form("PresidentialPardonForm", 25, 5) {
	_target = t;
	srand(time(NULL));
}

void PresidentialPardonForm::action(void) const {
	std::cout << _target << " has been pardoned by Zafod Beeblebrox.\n";
}
