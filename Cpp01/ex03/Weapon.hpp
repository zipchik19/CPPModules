#pragma once
#include <iostream>

class Weapon
{
	private:
		std::string m_type;
	public:
		Weapon(std::string m_type);
		~Weapon();
		const std::string & getType();
		void setType(std::string);
};