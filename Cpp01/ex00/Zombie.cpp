#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() 
{
	std::cout<<m_name<<" zombie died."<<std::endl;
}

void Zombie::announce()
{
	std::cout<<m_name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void Zombie::setName(std::string name)
{
	m_name = name;
}

std::string Zombie::getName(void)
{
	return m_name;
}

Zombie* newZombie(std::string name)
{
	Zombie *zombie = new Zombie;
	zombie->setName(name);
	return zombie;
}

void randomChump(std::string name)
{
	Zombie zombie;
	zombie.setName(name);
	zombie.announce();
}