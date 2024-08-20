#pragma once
#include <iostream>

class ClapTrap
{
	private:
		std::string m_name;
		int m_point = 10;
		int energy_ponits = 10;
		int attack_damage = 0;
	public:
		ClapTrap(std::string );
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};


