#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() :m_type("WrongAnimal")
{
	std::cout << "WrongAnimal's default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : m_type(name)
{
	std::cout << "WrongAnimal's parametrized constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	this->m_type = obj.m_type;
	std::cout << "WrongAnimal's copy constructor called" <<std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj)
{
	if (this != &obj)
	{	
		this->m_type = obj.m_type;
		std::cout << "WrongAnimal's copy operator overload called" <<std::endl;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal's destructor called" << std::endl;
}

void WrongAnimal::makeSound()
{
	std::cout << "Default WrongAnimal makesound called from base class" << std::endl;
}