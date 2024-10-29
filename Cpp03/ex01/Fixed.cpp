#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed()
{
	m_value = 0;
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const int val)
{
	m_value = val * (1 << m_bits);
	std::cout<<"Parametrized constructor with int called"<<std::endl;
}

Fixed::Fixed(const float val)
{
	
	m_value = roundf(val * (1 << m_bits));
	std::cout<<"Parametrized constructor with float called"<<std::endl;
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

float Fixed::toFloat() const
{
	return m_value / (float)(1 << m_bits);
}

int Fixed::toInt() const
{
	return m_value / (1 << m_bits);
}


Fixed& Fixed::operator=(const Fixed& obj)
{
	if(this != &obj)
	{
		m_value = obj.m_value;
		std::cout<<"Copy assignment operator overload called"<<std::endl;
		//this->setRawBits(obj.getRawBits());
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

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	std::cout << "For checking" << std::endl;
	std::cout << obj.toFloat();

	return os;
}