#include "Animal.hpp"

Animal::Animal() : m_type("Animal")
{
	std::cout << "Animal's default constructor called" << std::endl;
}

Animal::Animal(std::string name) : m_type(name)
{
	std::cout << "Animal's parametrized constructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	this->m_type = obj.m_type;
	std::cout << "Animal's copy constructor called" <<std::endl;
}

Animal& Animal::operator=(const Animal &obj)
{
	if (this != &obj)
	{	
		this->m_type = obj.m_type;
		std::cout << "Animal's copy operator overload called" <<std::endl;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal's destructor called" << std::endl;
}