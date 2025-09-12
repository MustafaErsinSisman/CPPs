#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout	<< Y << "Default constructor called"
			<< W << std::endl;
}

Fixed::Fixed( const int raw ) : raw(raw)//, bits(8)
{
	std::cout	<< Y << "Default constructor called"
			<< W << std::endl;	
}

Fixed::Fixed( const Fixed& copy ) : raw(copy.raw)//, bits(copy.bits)
{
	std::cout	<< Y << "Copy constructor called"
			<< W << std::endl;
}

Fixed&	Fixed::operator=( const Fixed& copy )
{
	std::cout	<< G << "Copy assignment operator called"
			<< W << std::endl;

	if (this != &copy)
	{
		raw = copy.raw;
		// bits = copy.bits;
	}

	return (*this);
}

Fixed::~Fixed()
{
	std::cout	<< R << "Destructor called"
			<< W << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout	<< B << "getRawBits member function called"
			<< W << std::endl;
	return this->raw;
}

void Fixed::setRawBits( int const raw ) {this->raw = raw;}