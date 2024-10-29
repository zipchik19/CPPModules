#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm",25,5)
{
    m_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
{
    *this = obj;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    if (this != &obj)
    {
        m_target = obj.m_target;
    }
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor called for PresidentialPardonForm" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(!getSigning())
    {
		throw AForm::SignedSuccessException();
    }

    if (executor.getGrade() > getReqExec())
    {
        throw AForm::GradeTooLowException();
    }
    std::cout << m_target <<  " has been pardoned by Zaphod Beeblebrox " << std::endl;
}