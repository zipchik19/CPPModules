#include "Cat.hpp"

Cat::Cat()
{
	brain = new Brain();
	m_type = "Cat";
	std::cout <<m_type<< "'s default constructor called" << std::endl;
}

Cat::Cat(std::string name)
{
	brain = new Brain();
	m_type = name;
	std::cout <<m_type<< "'s parametrized constructor called" << std::endl;
}

Cat::Cat(const Cat &obj)
{
    this->brain = new Brain(*obj.brain);
	this->m_type = obj.m_type;
	std::cout << "Cat's copy constructor called" <<std::endl;
}

Cat& Cat::operator=(const Cat &obj)
{
	std::cout << "Cat's copy assignment operator overload called" <<std::endl;
	if (this != &obj)
	{	
		delete this->brain;
		this->m_type = obj.m_type;
		brain = new Brain(*obj.brain);

	}
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat's destructor called" << std::endl;
}

void Cat::makeSound()
{
	std::cout << m_type <<"says meow" << std::endl;
}