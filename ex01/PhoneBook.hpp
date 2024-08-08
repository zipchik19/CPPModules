#pragma once
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
        void add(std::string contact[5]);
        void search();
        void printing(std::string str);
        void findIndex(std::string str);
	private:
        int m_index;
        int m_count;
		Contact contacts[8];
        
};