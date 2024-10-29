#pragma once
#include <iostream> 
#include <iostream>
#include <fstream>

class Replace
{
	private:
		std::string m_filname;
		std::string m_from;
		std::string m_to;
	public:
		Replace(std::string, std::string, std::string);
		void mainFunc();
};