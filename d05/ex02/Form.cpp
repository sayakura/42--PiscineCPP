#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string n, int gts, int gte) :
_name(n), _signed(0), _gradeToSign(gts), _gradeToExe(gte){
	if (gts < 1 || gte < 1)
		throw GradeTooHighException();
	else if (gts > 150 || gte > 150)
		throw GradeTooLowException();
}

Form::Form(Form const & rdi) : _name(rdi.getName()), _signed(rdi.getSign()),\
_gradeToSign(rdi.getGradeToSign()), _gradeToExe(rdi.getGradeToExe()) {}

Form::~Form(){}

Form & Form::operator=(Form const& rdi)
{
	_signed = rdi.getSign();
	return *this;
}

std::string Form::getName() const {
	return _name;}

bool Form::getSign() const {
	return _signed;}

int Form::getGradeToSign() const {
	return _gradeToSign;}

int Form::getGradeToExe() const {
	return _gradeToExe;}

void Form::beSigned(const Bureaucrat & rdi) {
	if (rdi.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_signed = true;
}

const char* Form::GradeTooHighException::what() const throw() {
		return ("[Form] Grade is too high!");}

const char* Form::GradeTooLowException::what() const throw() {
		return ("[Form] Grade is too low!");}

std::ostream & operator<<(std::ostream & to, const Form & s) {
	to << s.getName() << " sign status: " << s.getSign() << std::endl;
    to <<  s.getName() << " requires grade " <<  s.getGradeToSign() << " to sign." << std::endl;
    to <<  s.getName() << " requires grade " <<  s.getGradeToExe() << " to execute." << std::endl;
	return (to);
}
