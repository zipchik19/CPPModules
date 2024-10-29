#pragma once
#include "Weapon.hpp"

class HumanA 
{	
	private:
		Weapon &weapon;
		std::string m_name;
	public:
		HumanA(std::string n, Weapon &weap);
		void attack();
};