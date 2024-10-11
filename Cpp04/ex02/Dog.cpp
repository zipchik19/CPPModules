#include "Dog.hpp"

Dog::Dog()
{
	brain = new Brain();
	m_type = "Dog";
	std::cout <<m_type<< "'s default constructor called" << std::endl;
}

Dog::Dog(std::string name)
{
	brain = new Brain();
	m_type = name;
	std::cout <<m_type<< "'s parametrized constructor called" << std::endl;
}

Dog::Dog(const Dog &obj)
{
	this->brain = new Brain(*obj.brain);
	this->m_type = obj.m_type;
	std::cout << "Dog's copy constructor called" <<std::endl;
}

Dog& Dog::operator=(const Dog &obj)
{
	std::cout << "Dog's copy operator overload called" <<std::endl;
	if (this != &obj)
	{	
		delete this->brain;
		this->m_type = obj.m_type;
		brain = new Brain(*obj.brain);
	}
	return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog's destructor called" << std::endl;
}

void Dog::makeSound()
{
	std::cout << m_type <<"says wuf" << std::endl;
}