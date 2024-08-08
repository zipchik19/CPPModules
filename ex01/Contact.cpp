#include <iostream>
#include <string>
#include "Contact.hpp"


Contact::Contact(){}

Contact::~Contact(){}

void Contact::setFirstName(std::string str)
{
    m_firstname = str;
}

void Contact::setLastName(std::string str)
{
    m_lastname = str;
}

void Contact::setNickName(std::string str)
{
    m_nickname = str;
}

void Contact::setPhoneNumber(std::string str)
{
    bool isnumber = true;
    for (std::string::iterator it = str.begin(); it != str.end(); ++it)
    {
        if (!isdigit(*it))
        {
            isnumber = false;
            std::cout<<"Write only numbers!"<<std::endl;
            break ;
        }
        else if(isnumber)
        {
            m_phonenumber = str;
        }

    }
}

void Contact::setSecret(std::string str)
{
    m_secret = str;
}

std::string Contact::getFirstName(void) {
    return m_firstname;
}

std::string Contact::getLastName(void) {
    return m_lastname;
}

std::string Contact::getNickName(void) {
    return m_nickname;
}

std::string Contact::getPhoneNumber(void) {
    return m_phonenumber;
}

std::string Contact::getSecret(void) {
    return m_secret;
}

 
