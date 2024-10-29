#pragma once
#include "AForm.hpp"
#include <fstream>
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string);
        RobotomyRequestForm(const RobotomyRequestForm &);
        RobotomyRequestForm& operator=(const RobotomyRequestForm &);
        ~RobotomyRequestForm();
        void execute(Bureaucrat const & ) const;
    private:
        std::string m_target;
};