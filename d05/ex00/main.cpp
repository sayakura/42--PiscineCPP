#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{

    Bureaucrat seli = Bureaucrat("seli", 2);
    try {
        Bureaucrat seli2 = Bureaucrat("seli2", 150);
        Bureaucrat seli3 = Bureaucrat("seli3", 151);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    seli.incrementGrade();
    try {
        seli.incrementGrade();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
          Bureaucrat seli4 = Bureaucrat("seli4", 0);
    } catch(Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << seli;
    return (0);
}