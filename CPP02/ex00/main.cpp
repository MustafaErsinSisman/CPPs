#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	// a.setFixedNumber(5.25);
	// b.setFixedNumber(3.75);
	// c.setFixedNumber(3.9);

	// std::cout << a.getFixedNumber() << std::endl;
	// std::cout << b.getFixedNumber() << std::endl;
	// std::cout << c.getFixedNumber() << std::endl;

	// Fixed d(5.25);

	// std::cout << d.getFixedNumber() << std::endl;
	// std::cout << d.getRawBits() << std::endl;
	// d.setFixedNumber(3.142676);
	// std::cout << d.getFixedNumber() << std::endl;
	// std::cout << d.getRawBits() << std::endl;



	return 0;
}
