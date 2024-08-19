#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed()
{
	m_value = 0;
	//std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const int val)
{
	m_value = val * (1 << m_bits);
	//std::cout<<"Parametrized constructor with int called"<<std::endl;
}

Fixed::Fixed(const float val)
{
	
	m_value = roundf(val * (1 << m_bits));
	//std::cout<<"Parametrized constructor with float called"<<std::endl;
}

Fixed::~Fixed()
{
	//std::cout<<"Default destructor called"<<std::endl;
}

Fixed::Fixed(const Fixed& cop)
{
	m_value = cop.m_value;
	//std::cout << "Copy constructor called" << std::endl;
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
		//std::cout<<"Copy assignment operator overload called"<<std::endl;
		//this->setRawBits(obj.getRawBits());
	}	
	return *this;
}

int Fixed::getRawBits( void ) const
{
	//std::cout<<"getRawBits member function called"<<std::endl;
	return m_value;
}

void Fixed::setRawBits(int const raw)
{
	m_value = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	std::cout << obj.toFloat();
	return os;
}

bool Fixed::operator> (const Fixed & obj) const
{
	if (this -> getRawBits() < obj.getRawBits())
		return true;
	return false;
}

bool Fixed::operator< (const Fixed & obj) const
{
	if (this -> getRawBits() > obj.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>= (const Fixed & obj) const
{
	if (this -> getRawBits() <= obj.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<= (const Fixed & obj) const
{
	if (this -> getRawBits() >= obj.getRawBits())
		return true;
	return false;
}

bool Fixed::operator== (const Fixed & obj) const
{
	if (this -> getRawBits() == obj.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!= (const Fixed & obj) const
{
	if (this -> getRawBits() != obj.getRawBits())
		return true;
	return false;
}

Fixed Fixed::operator+ (const Fixed & obj) const
{
	return this -> getRawBits() + obj.getRawBits();
}

Fixed Fixed::operator- (const Fixed & obj) const
{
	return this -> getRawBits() - obj.getRawBits();
}

Fixed Fixed::operator* (const Fixed & obj) const
{
	return this -> getRawBits() * obj.getRawBits();
}

Fixed Fixed::operator/ (const Fixed & obj) const
{
	if (obj.getRawBits() != 0)
		return this -> getRawBits() / obj.getRawBits();
	return 0;
}

Fixed& Fixed::operator++ ()
{
	++this->m_value;
	return *this;
}

Fixed& Fixed::operator-- ()
{
	--this->m_value;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed obj(*this);
	++(*this);
	return obj;
}

Fixed Fixed::operator--(int)
{
	Fixed obj(*this);
	--(*this);
	return obj;
}

Fixed& Fixed::min(Fixed& obj1, Fixed& obj2)
{
	if (obj1.getRawBits() < obj2.getRawBits())
		return obj1;
	return obj2;
}

Fixed& Fixed::max(Fixed& obj1, Fixed& obj2)
{
	if (obj1.getRawBits() > obj2.getRawBits())
		return obj1;
	return obj2;
}

const Fixed& Fixed::min(Fixed const &obj1, Fixed const &obj2) 
{
	if (obj1.getRawBits() < obj2.getRawBits())
		return obj1;
	return obj2;
}

const Fixed& Fixed::max(Fixed const &obj1, Fixed const &obj2)
{
	if (obj1.getRawBits() > obj2.getRawBits())
		return obj1;
	return obj2;
}
