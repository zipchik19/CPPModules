#include "Fixed.hpp"

Fixed::Fixed()
{
	m_value = 0;
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::~Fixed()
{
	std::cout<<"Default destructor called"<<std::endl;
}

Fixed::Fixed(const Fixed& cop)
{
	m_value = cop.m_value;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& assign)
{
	if(this != &assign)
	{
		m_value = assign.m_value;
		std::cout<<"Copy assignment operator overload called"<<std::endl;
		//this->setRawBits(assign.getRawBits());
	}	
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return m_value;
}

void Fixed::setRawBits(int const raw)
{
	m_value = raw;
}
