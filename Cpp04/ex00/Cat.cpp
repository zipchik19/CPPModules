#include "Cat.hpp"

Cat::Cat()
{
	m_type = "Cat";
	std::cout <<m_type<< "'s default constructor called" << std::endl;
}

Cat::Cat(std::string name)
{
	m_type = name;
	std::cout <<m_type<< "'s parametrized constructor called" << std::endl;
}

Cat::Cat(const Cat &obj)
{
	this->m_type = obj.m_type;
	std::cout << "Cat's copy constructor called" <<std::endl;
}

Cat& Cat::operator=(const Cat &obj)
{
	std::cout << "Cat's copy operator overload called" <<std::endl;
	if (this != &obj)
	{	
		this->m_type = obj.m_type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat's destructor called" << std::endl;
}

void Cat::makeSound()
{
	std::cout << m_type <<"says meow" << std::endl;
}