#pragma once
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string m_name;
        bool m_isSigned;
        const int m_reqSigned;
        const int m_reqExec;
        int validation(const int) const;

    public:
        AForm();
        AForm(std::string const, int, int);
        virtual ~AForm();
        AForm(const AForm &);
        AForm& operator=(const AForm &);

        std::string getName() const;
        int getReqSigned() const;
        int getReqExec() const;
        bool getSigning() const;
        void beSigned(Bureaucrat &);
        virtual void execute(Bureaucrat const & executor) const = 0;
        
        class SignedSuccessException: public std::exception
        {
            public:
                const char * what() const throw();
        };
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

std::ostream& operator<<(std::ostream& cout, const AForm& obj);
