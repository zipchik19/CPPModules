#pragma once
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string);
        ShrubberyCreationForm(const ShrubberyCreationForm &);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & ) const;
    private:
        std::string m_target;
};
