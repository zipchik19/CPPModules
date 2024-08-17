#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weap):  weapon(weap), m_name(name)
{
	
}

void HumanA::attack()
{
	std::cout<<m_name<<"  attacks with their "<<weapon.getType()<<std::endl;
}