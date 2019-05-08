#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <stdexcept>

class Bureaucrat;

class Form {
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExe;
		Form();
	public:
		Form(Form const & src);
		~Form();
		Form(std::string n, int gs, int ge);
		Form & operator=(const Form & rhs);
		std::string getName() const;
		bool getSign() const;
		int getGradeToSign() const;
		int getGradeToExe() const;
		void beSigned(const Bureaucrat &);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream & operator<<(std::ostream & ofs, const Form & s);
#endif