#include "AForm.hpp"

AForm::AForm() : m_name("default"), m_reqSigned(validation(50)), m_reqExec(validation(70)) 
{
	m_isSigned = false;
};

AForm::AForm(const std::string name,  const int signGrade, const int executeGrade) :
	m_name(name), m_reqSigned(validation(signGrade)), m_reqExec(validation(executeGrade)) {
		m_isSigned = false;
};

AForm::AForm(const AForm &obj) :
	m_name(obj.m_name), m_reqSigned(validation(obj.m_reqSigned)), m_reqExec(validation(obj.m_reqExec)) {
	m_isSigned = obj.m_isSigned;
};

AForm::~AForm() {};

AForm &AForm::operator=(const AForm &obj) {
	if (this != &obj) {
		m_isSigned = obj.m_isSigned;
	}
	return (*this);
};

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high" ;
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

const char* AForm::SignedSuccessException::what() const throw()
{
    return "The form isn't signed!";
}

std::string AForm::getName() const
{
    return m_name;
};

int AForm::getReqSigned() const
{
    return m_reqSigned;
};

int AForm::getReqExec() const
{
    return m_reqExec;
};

bool AForm::getSigning() const
{
    return m_isSigned;
};

int AForm::validation(const int grade) const
{
    if (grade < 1)
    {
        throw GradeTooHighException();
    }
    if(grade > 150)
    {
        throw GradeTooLowException();
    }
    return (grade);
};

void AForm::beSigned(Bureaucrat &bur)
{
    if(bur.getGrade() > this->getReqSigned())
        throw GradeTooLowException();
    else
    {
        m_isSigned = true;
    }
};

std::ostream &operator<<(std::ostream &out, const AForm &obj) 
{
	std::cout << "Forms name is " << obj.getName()
    << " ReqSigned is " << obj.getReqSigned()
    << " ReqExec " << obj.getReqExec() << std::endl;
    if(obj.getSigning())
        std::cout << "Signatured!\n";
    else
        std::cout << "Unsignatured!\n";
    return out;
};