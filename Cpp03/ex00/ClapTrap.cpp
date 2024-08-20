#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	m_attack_damage = 0;
	m_energy_ponits = 10;
	m_point = 10;
	std::cout<<"Constructor called"<<std::endl;

}

ClapTrap::~ClapTrap()
{
	std::cout<<"Destructor called and "<<std::endl;

}

ClapTrap::ClapTrap(std::string name) : m_name(name)
{
	m_attack_damage = 0;
	m_energy_ponits = 10;
	m_point = 10;
	std::cout<<"Parametrized Constructor called and "<<this->m_name<<" created"<<std::endl;

}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	
	m_name = obj.m_name;
	m_attack_damage = obj.m_attack_damage;
	m_energy_ponits = obj.m_energy_ponits;
	m_point = obj.m_point;
	std::cout<<"Copy constructor called"<<std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &obj)
{
	if (this != &obj)
	{
		this->m_name = obj.m_name;
		this->m_attack_damage = obj.m_attack_damage;
		this->m_energy_ponits = obj.m_energy_ponits;
		this->m_point = obj.m_point;
	}
	std::cout<<"Copy assignment operator overload called"<<std::endl;
	return *this;
}

void ClapTrap::setPoint(unsigned int point)
{
	this->m_point = point;
}

void ClapTrap::setEnergyPoint(unsigned int point)
{
	this->m_energy_ponits = point;
}

void ClapTrap::setAttackDamage(unsigned int point)
{
	this->m_attack_damage = point;
}

void ClapTrap::attack(const std::string& target)
{
	if (m_energy_ponits == 0)
	{
		std::cout<< "ClapTrap "<<this->m_name<< " has not energy points"<<std::endl;
		return ;
	}
	std::cout<< "ClapTrap " << this->m_name << " attacks " << target << ", causing "<< this->m_attack_damage <<" points of damage!"<<std::endl;
	--this->m_energy_ponits;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (m_energy_ponits == 0)
	{
		std::cout<< "ClapTrap "<<this->m_name<< " has not energy points"<<std::endl;
		return ;
	}
	std::cout<< "ClapTrap " << this->m_name << " has been added " << amount << " points!"<<std::endl;
	this->m_point += amount;
	--this->m_energy_ponits;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->m_attack_damage > amount )
	{
		std::cout << "ClapTrap " << this->m_name << " lost " << amount << " amount of hit point." << std::endl;
		this->m_point -= amount;
	}
	else if(this->m_energy_ponits <= 0)
	{
		m_point = 0;
		std::cout << "ClapTrap "<<this->m_name<<" died!"<<std::endl;
	}
}



