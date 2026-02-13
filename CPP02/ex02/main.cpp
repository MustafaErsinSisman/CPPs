#include "Fixed.hpp"

int main( void )
{
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout	<< a << std::endl
			<< ++a << std::endl
			<< a << std::endl
			<< a++ << std::endl
			<< a << std::endl
			<< b << std::endl
			<< Fixed::max( a, b ) << std::endl;
	return 0;
}
