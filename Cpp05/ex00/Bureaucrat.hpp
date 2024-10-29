#pragma once
#include <iostream>
#include <stdexcept>

class Bureaucrat
{
    private:
        int m_grade;
        const std::string m_name;
    public:
        Bureaucrat();
        Bureaucrat(const std::string &, int );
        Bureaucrat(const Bureaucrat&);
        Bureaucrat& operator=(const Bureaucrat&);
        ~Bureaucrat();
        
        std::string getName() const;
        int getGrade() const;

        void IncrementGrade();
        void DecrementGrade();

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