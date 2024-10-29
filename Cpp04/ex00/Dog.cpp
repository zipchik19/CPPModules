#include "Dog.hpp"

Dog::Dog()
{
	m_type = "Dog";
	std::cout <<m_type<< "'s default constructor called" << std::endl;
}

Dog::Dog(std::string name)
{
	m_type = name;
	std::cout <<m_type<< "'s parametrized constructor called" << std::endl;
}

Dog::Dog(const Dog &obj)
{
	this->m_type = obj.m_type;
	std::cout << "Dog's copy constructor called" <<std::endl;
}

Dog& Dog::operator=(const Dog &obj)
{
	std::cout << "Dog's copy operator overload called" <<std::endl;
	if (this != &obj)
	{	
		this->m_type = obj.m_type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog's destructor called" << std::endl;
}

void Dog::makeSound()
{
	std::cout << m_type <<"says wuf" << std::endl;
}