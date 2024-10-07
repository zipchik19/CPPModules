#include "Form.hpp"

Form::Form() : m_name("default"), m_reqSigned(validation(50)), m_reqExec(validation(70)) 
{
	m_isSigned = false;
};

Form::Form(const std::string name,  const int signGrade, const int executeGrade) :
	m_name(name), m_reqSigned(validation(signGrade)), m_reqExec(validation(executeGrade)) {
		m_isSigned = false;
};

Form::Form(const Form &obj) :
	m_name(obj.m_name), m_reqSigned(validation(obj.m_reqSigned)), m_reqExec(validation(obj.m_reqExec)) {
	m_isSigned = obj.m_isSigned;
};

Form::~Form() {};

Form &Form::operator=(const Form &obj) {
	if (this != &obj) {
		m_isSigned = obj.m_isSigned;
	}
	return (*this);
};

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high" ;
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

std::string Form::getName() const
{
    return m_name;
};

int Form::getReqSigned() const
{
    return m_reqSigned;
};

int Form::getReqExec() const
{
    return m_reqExec;
};

bool Form::getSigning() const
{
    return m_isSigned;
};

int Form::validation(const int grade) const
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

void Form::beSigned(Bureaucrat &bur)
{
    if(bur.getGrade() > this->getReqSigned())
        throw GradeTooLowException();
    else
    {
        std::cout << bur.getName() << " signed " << this->getName() << std::endl;
        m_isSigned = true;
    }
};

std::ostream &operator<<(std::ostream &out, const Form &obj) 
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