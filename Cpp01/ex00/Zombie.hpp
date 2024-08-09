#pragma once
#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string m_name;
	public:
		Zombie();
		~Zombie();
		void announce(void);
		void setName(std::string name);
		
		std::string getName(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);