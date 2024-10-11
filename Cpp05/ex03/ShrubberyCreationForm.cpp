#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm",145,137)
{
    m_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
{
    *this = obj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    if (this != &obj)
    {
        m_target = obj.m_target;
    }
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
  std::cout << "Destructor called for ShrubberyCreationForm" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(!getSigning())
    {
		throw AForm::SignedSuccessException();
    }

    if (executor.getGrade() > getReqExec())
    {
        throw AForm::GradeTooLowException();
    }

    std::string filename = m_target + "_shrubbery";
    std::ofstream outFile(filename);

    if (outFile.is_open()) {
        outFile <<	"     v"  <<std::endl
        <<  "     >X<" <<std::endl
        <<   "     A" <<std::endl
        <<  "     d$b" <<std::endl
        <<   "  .d\\$$b." <<std::endl
        <<  " .d$i$$\\$$b." <<std::endl
        <<  "    d$$@" <<std::endl
        <<  "   d\\$$$i" <<std::endl
        << "  .d$$$\\$$$" <<std::endl
        <<" .d$$@$$$$\\$$ib" <<std::endl
        << "    d$$i$$" <<std::endl
        << "   d\\$$$$@$" <<std::endl
        <<"  .d$@$$\\$$$$$@b" <<std::endl
        <<".d$$$$i$$$\\$$$$$$b" <<std::endl
        << "       ##" <<std::endl
        <<  "      ##" <<std::endl
        <<  "      ### mh" <<std::endl;
        outFile.close();
    } else {
        throw std::runtime_error("Unable to create file: " + filename);
    }
    
}