#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	m_type = "WrongCat";
	std::cout <<m_type<< "'s default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string name)
{
	m_type = name;
	std::cout <<m_type<< "'s parametrized constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
	this->m_type = obj.m_type;
	std::cout << "Cat's copy constructor called" <<std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "WrongCat's copy operator overload called" <<std::endl;
	if (this != &obj)
	{	
		this->m_type = obj.m_type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat's destructor called" << std::endl;
}

void WrongCat::makeSound()
{
	std::cout << m_type <<"says meow" << std::endl;
}