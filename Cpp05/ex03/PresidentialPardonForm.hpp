#pragma once
#include <string>
#include "AForm.hpp"
#include <fstream>
#include <cstdlib>
#include <ctime>

class PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string);
        PresidentialPardonForm(const PresidentialPardonForm &obj);
        PresidentialPardonForm& operator=(const PresidentialPardonForm &obj);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const &) const;
    private:
        std::string m_target;
};