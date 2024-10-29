#pragma once
#include "Weapon.hpp"

class HumanB 
{	
	private:
		Weapon *weapon;
		std::string m_name;
	public:
		HumanB(std::string );
		void setWeapon(Weapon&);
		void attack();
};