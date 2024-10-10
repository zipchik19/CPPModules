#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}
Intern &Intern::operator=(const Intern &obj)
{
    if(this == &obj)
    {
        return *this;
    }
    return *this;
}

const char* Intern::Exception::what() const throw()
{
    return "Error";
}

AForm* Intern::makeForm(const std::string &name,const std::string &target)
{

    AForm *form = NULL;
    std::string req[3] = {"presidential request","robotomy request","shrubberry request"};
    int i = 0;
    while (i < 3 && req[i] != name)
    {
        i++;
    }
    switch (i)
    {
        case 0:
            form = new PresidentialPardonForm(target);
            break;
        case 1:
            form = new RobotomyRequestForm(target);
            break;
        case 2:
            form = new ShrubberyCreationForm(target);
            break;
        default:
            throw Exception();
            break;
    }
    return form;
}