#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(Bureaucrat const& rdi) : _name(rdi.getName()), _grade(rdi.getGrade()) {};
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
};
Bureaucrat::~Bureaucrat() {};
Bureaucrat& Bureaucrat::operator=(Bureaucrat const& rdi)
{
    if (this != &rdi)
        _grade = rdi.getGrade();
    return *this;
}
std::string Bureaucrat::getName(void) const { return _name; }
int         Bureaucrat::getGrade(void) const { return _grade; }

void        Bureaucrat::incrementGrade(void)
{
    _grade -= 1;
    if (_grade < 1)
        throw GradeTooHighException();
}

void        Bureaucrat::decrementGrade(void)
{
    _grade += 1;
    if (_grade > 150)
        throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high!!!:)";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too looooow!!:D";
}

std::ostream& operator<<(std::ostream &to, const Bureaucrat& s){
    to << (s.getName() + ", here is your grade: ")  << s.getGrade() << std::endl;
    return (to);
}