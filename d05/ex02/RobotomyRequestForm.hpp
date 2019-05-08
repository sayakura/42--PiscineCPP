#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class RobotomyRequestForm : public Form {
		std::string _target;
		void action(void) const;
	public:
		RobotomyRequestForm(std::string s);
};

#endif