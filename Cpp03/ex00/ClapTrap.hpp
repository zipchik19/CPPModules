#pragma once
#include <iostream>

class ClapTrap
{
	private:
		std::string m_name;
		unsigned int m_point = 10;
		unsigned int m_energy_ponits = 10;
		unsigned int m_attack_damage = 0;
	public:
		ClapTrap();
		ClapTrap(const std::string );
		ClapTrap(const ClapTrap &);
		ClapTrap& operator= (const ClapTrap &);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void setPoint(unsigned int);
		void setEnergyPoint(unsigned int);
		void setAttackDamage(unsigned int);
		std::string getName();

};


