#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat deconstructor called" << std::endl;
}

void Bureaucrat::setGrade(int grade)
{
    this->_grade = grade;
}
int Bureaucrat::getGrade()
{
    return this->_grade;
}