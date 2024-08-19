#pragma once
#include <iostream>

class Fixed
{
	private:
		int m_value;
		static const int m_bits = 8;
	public:
		Fixed();
		Fixed(const int);
		Fixed(const float);
		~Fixed();
		Fixed(const Fixed& );
		Fixed& operator= (const Fixed &);
		int getRawBits( void ) const;
		void setRawBits( int const );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& , const Fixed&);
