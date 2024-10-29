#pragma once
#include <iostream>
#include "AForm.hpp"

class Intern
{
    public:
        Intern();
        //Intern();
        //Intern(const Intern &obj);
        Intern &operator=(const Intern &);
        ~Intern();
        AForm* makeForm(const std::string & , const std::string &);
        class Exception : public std::exception 
        {
            public:
                virtual const char* what() const throw();
        };
};
