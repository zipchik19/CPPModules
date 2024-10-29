#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	m_name = name;
	weapon = NULL;
}

void HumanB::setWeapon(Weapon& weap)
{
	weapon = &weap;
}

void HumanB::attack()
{
	std::cout<<m_name<<"  attacks with their "<<weapon->getType()<<std::endl;
}