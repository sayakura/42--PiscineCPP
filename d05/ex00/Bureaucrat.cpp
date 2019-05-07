Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {};
Bureaucrat::~Bureaucrat(void) {};
Bureaucrat::Bureaucrat(Bureaucrat const& rdi) : _name(rdi.getName()), _grade(rdi.getGrade) {};
Bureaucrat& operator=(Bureaucrat const& rdi)
{
    if (this != rdi)
    {
        _name = rdi.getName;
        _grade = rdi.getGrade;
        
    }
    return *this;
}
std::string Bureaucrat::getName(void) { return _name; }
int         Bureaucrat::getGrade(void) { return _grade; }
