#include <iostream>

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
        Bureaucrat();
    public:
        Bureaucrat(std::string, int)
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const&);
        Bureaucrat& operator=(Bureaucrat const&);
        std::string getName(void);
        int getGrade(void);
        incrementGrade(void);
        decrementGrade(void);
}