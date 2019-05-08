#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"
#include <stdexcept>

class Form;

class Bureaucrat
{
        const std::string _name;
        int _grade;
        Bureaucrat();
    public:
        Bureaucrat(std::string, int);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const&);
        Bureaucrat& operator=(Bureaucrat const&);
        std::string getName(void) const;
        int getGrade(void) const;
        void incrementGrade(void);
        void decrementGrade(void);
        void signForm(Form* f);
        
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream &operator << (std::ostream &to, const Bureaucrat &s);

#endif