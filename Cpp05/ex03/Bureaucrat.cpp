#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): m_name("default")
{
    m_grade = 50;
    std::cout<<"Default constructor called"<<std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    m_name = name;
    m_grade = grade;
    if (m_grade < 1)
        throw GradeTooHighException();
    if (m_grade > 150)
        throw GradeTooLowException();
    std::cout<<"Parametrized constructor called"<<std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
    m_name = obj.m_name;
    m_grade = obj.m_grade;
    std::cout<<"Copy constructor called"<<std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    if(this != &obj)
    {
        this->m_grade = obj.m_grade;
        std::cout<<"Operator overload called"<<std::endl;
    }
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout<<"Destructor called"<<std::endl;
}

int Bureaucrat::getGrade() const
{
    return m_grade;
}

std::string Bureaucrat::getName() const
{
    return m_name;
}

void Bureaucrat::IncrementGrade()
{
    m_grade -=1;
    if (m_grade < 1)
    {
        throw GradeTooHighException();
    }
}

void Bureaucrat::DecrementGrade()
{
    m_grade +=1;
    if (m_grade > 150)
    {
        throw GradeTooLowException();
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too Low";
}

void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->getName() << " couldn't execute " << form.getName()
           << " because of " << e.what() << std::endl;
    }
}

void Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << "'" << this->getName() << "'" << " signed to " << form.getName() << std::endl;
    }
    catch(AForm::GradeTooLowException& e)
    {
        std::cout << "!!#" << this->getName() << "!!#"
        << " couldn't sign to "
        << form.getName()
        << " because " << e.what()
        << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
    std::cout<<obj.getName()<<", bureaucrat grade "<<obj.getGrade()<<"."<<std::endl;
    return os;
}