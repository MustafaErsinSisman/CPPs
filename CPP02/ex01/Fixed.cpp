#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout	<< Y << "Default constructor called"
			<< W << std::endl;
}

Fixed::Fixed( const int value ) : value(value << bits)
{
	std::cout	<< Y << "Int constructor called"
			<< W << std::endl;	
}

Fixed::Fixed( const float value ) : value(roundf(value * (1 << bits)))
{
	std::cout	<< Y << "Float constructor called"
			<< W << std::endl;	
}

Fixed::Fixed( const Fixed& copy )
{
	std::cout	<< Y << "Copy constructor called"
			<< W << std::endl;
	*this = copy;
}

Fixed&	Fixed::operator=( const Fixed& copy )
{
	std::cout	<< G << "Copy assignment operator called"
			<< W << std::endl;
	if (this != &copy)
		this->value = copy.value;
	return *this;
}

Fixed::~Fixed()
{
	std::cout	<< R << "Destructor called"
			<< W << std::endl;
}

float Fixed::toFloat( void ) const {return static_cast<float>(value) / (1 << bits);}

int Fixed::toInt( void ) const {return value >> bits;}

std::ostream& operator<<(std::ostream& out, const Fixed& copy)
{
	out << copy.toFloat();
	return out;
}
