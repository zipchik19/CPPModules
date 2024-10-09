#pragma once
#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        int m_grade;
        std::string m_name;
    public:
        Bureaucrat();
        Bureaucrat(std::string , int );
        Bureaucrat(const Bureaucrat &);
        Bureaucrat& operator=(const Bureaucrat &);
        ~Bureaucrat();
        
        std::string getName() const;
        int getGrade() const;

        void IncrementGrade();
        void DecrementGrade();

        void signForm(AForm &);
        void executeForm(AForm const &);        
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

std::ostream& operator<<(std::ostream&, const Bureaucrat&);