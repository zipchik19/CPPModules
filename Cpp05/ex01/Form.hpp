#pragma once
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;


class Form
{
    private:
        const std::string m_name;
        bool m_isSigned;
        const int m_reqSigned;
        const int m_reqExec;
        int validation(const int) const;
    public:
        Form();
        Form(std::string const, int, int);
        ~Form();
        Form(const Form&);
        Form& operator=(const Form&);

        std::string getName() const;
        int getReqSigned() const;
        int getReqExec() const;
        bool getSigning() const;
        void beSigned(Bureaucrat &);
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

};

std::ostream& operator<<(std::ostream& cout, const Form& obj);
