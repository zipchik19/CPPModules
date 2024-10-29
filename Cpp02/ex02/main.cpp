#include "Fixed.hpp"
#include <iostream> 

// int main( void ) 
// {
// 	float c1 = 2.10f;
// 	float e1 = 2.05f;
// 	Fixed a;
// 	// Fixed c(c1);
// 	// Fixed e(e1);
// 	const Fixed c(c1);
// 	const Fixed e(e1);
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	std::cout << "c - "<< c1 << "e - "<<e1<<"---" << (c1 > e1) << std::endl;
// 	std::cout << "c - "<< c << "e - "<<e <<"---"<< (c > e) << std::endl;
// 	std::cout << "" << (c1 < e1) << std::endl;
// 	std::cout << "" << (c < e) << std::endl;
// 	std::cout << "" << (c1 >= e1) << std::endl;
// 	std::cout << "" << (c >= e) << std::endl;
// 	std::cout << "" << (c1 <= e1) << std::endl;
// 	std::cout << "" << (c <= e) << std::endl;
// 	std::cout << "" << (c1 == e1) << std::endl;
// 	std::cout << "" << (c == e) << std::endl;
// 	std::cout << "" << (c1 + e1) << std::endl;
// 	std::cout << "" << (c + e) << std::endl;
// 	std::cout << "" << (c1 - e1) << std::endl;
// 	std::cout << "" << (c - e) << std::endl;
// 	std::cout << "" << (c1 * e1) << std::endl;
// 	std::cout << "" << (c * e) << std::endl;
// 	std::cout << "" << (c1 / e1) << std::endl;
// 	std::cout << "" << (c / e) << std::endl;
// 	std::cout << "" << c.min(c, e) << std::endl;
// 	std::cout << "" << c.max(c, e) << std::endl;
// 	return 0;
// }

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}