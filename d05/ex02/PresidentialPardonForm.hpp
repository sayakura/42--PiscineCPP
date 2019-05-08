#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm : public Form {
		std::string _target;
		void action(void) const;
	public:
		PresidentialPardonForm(std::string s);
};

#endif