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
		bool operator> (const Fixed &) const;
		bool operator< (const Fixed &) const;
		bool operator>= (const Fixed &) const;
		bool operator<= (const Fixed &) const;
		bool operator== (const Fixed &) const;
		bool operator!= (const Fixed &) const;
		Fixed operator+ (const Fixed &) const;
		Fixed operator- (const Fixed &) const;
		Fixed operator* (const Fixed &) const;
		Fixed operator/ (const Fixed &) const;
		Fixed& operator++ (); //pre
		Fixed& operator-- (); //pre
		Fixed operator-- (int); //post
		Fixed operator++ (int); //post

		static Fixed& min(Fixed &, Fixed&);
		static Fixed& max(Fixed &, Fixed&);
		static const Fixed& min(Fixed const &, Fixed const &);
		static const Fixed& max(Fixed const &, Fixed const &);
};

std::ostream& operator<<(std::ostream& , const Fixed&);


