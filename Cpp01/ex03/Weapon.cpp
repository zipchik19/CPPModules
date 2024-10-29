#include "Weapon.hpp"

Weapon::Weapon(std::string text)
{
	m_type = text;
}

Weapon::~Weapon()
{

}

void Weapon::setType(std::string weapon_type)
{
	m_type = weapon_type;
}

const std::string& Weapon::getType()
{
	return m_type;
}