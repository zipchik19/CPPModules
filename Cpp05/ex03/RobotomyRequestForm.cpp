#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm",72,45)
{
    m_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
{
    *this = obj;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    if (this != &obj)
    {
        m_target = obj.m_target;
    }
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor called for RobotomyRequestForm" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(!getSigning())
    {
		throw AForm::SignedSuccessException();
    }

    if (executor.getGrade() > getReqExec())
    {
        throw AForm::GradeTooLowException();
    }
    std::cout << " some drilling noises " << std::endl;
    std::srand(std::time(0));
    
    if(rand()%2 == 0)
    {
        std::cout << m_target << " has been robotomized successfully " << std::endl;
    }
    else
    {
         std::cout << m_target << " failed " << std::endl;
    }
}