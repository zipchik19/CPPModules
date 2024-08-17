#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    m_index = -1;
    m_count = 0;   
}

PhoneBook::~PhoneBook() 
{

}

void PhoneBook::rightAligned (std::string str)
{
    std::string result;
    if(str.length() <= 10)
        std::cout << std::setw(10) << str << "| ";
    else
        std::cout << str.substr(0, 9) << ".| ";
}

void PhoneBook::add(std::string contact[5])
{
    m_index++;
    if(m_index > 7)
        m_index = 0;
    if(m_count != 8)
        m_count++;
    contacts[m_index].setFirstName(contact[0]);
    contacts[m_index].setLastName(contact[1]);
    contacts[m_index].setNickName(contact[2]);
    contacts[m_index].setPhoneNumber(contact[3]);
    contacts[m_index].setSecret(contact[4]);
}

void PhoneBook::printFounded(std::string i)
{
    int num = atoi(i.c_str());
    std::cout <<"FirstName:     "<<contacts[num].getFirstName()<<std::endl;
    std::cout <<"LastName:      "<<contacts[num].getLastName()<<std::endl;
    std::cout <<"NickName:      "<<contacts[num].getNickName()<<std::endl;
    std::cout <<"PhoneNumber:   "<<contacts[num].getPhoneNumber()<<std::endl;
    std::cout <<"Secret:        "<<contacts[num].getSecret()<<std::endl;
}


void PhoneBook::findIndex(std::string i)
{
    int num = atoi(i.c_str());
    if(num >= m_count || !(i >= "0" && i <= "7"))
    {
        std::cout << "Index is not found" << std::endl;
    }
    else
    {
        printFounded(i);
    }
}

void PhoneBook::search()
{
    std::string index;
    for(int i = 0; i < m_count; i++)
    {
        std::cout << std::setw(10) << i << "|";
        rightAligned(contacts[i].getFirstName());
        rightAligned(contacts[i].getLastName());
        rightAligned(contacts[i].getNickName());
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Enter the index number ";
    getline(std::cin, index);
    findIndex(index);
}


