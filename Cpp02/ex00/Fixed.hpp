#include <iostream>

class Fixed
{
	private:
		int m_value;
		static const int m_bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& );
		Fixed& operator= (const Fixed &);
		int getRawBits( void ) const;
		void setRawBits( int const );
};


