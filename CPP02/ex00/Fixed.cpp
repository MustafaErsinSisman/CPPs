#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout	<< Y << "Default constructor called"
			<< W << std::endl;
}

Fixed::Fixed( const float value ) : value((int)(value * (1 << bits) + 0.5f))
{
	std::cout	<< Y << "Default constructor called"
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
		this->value = copy.getRawBits();
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
	return this->value;
}


void Fixed::setRawBits( int const raw )
{
	std::cout	<< B << "setRawBits member function called"
			<< W << std::endl;
	this->value = raw;
}

// float Fixed::getFixedNumber( void ) const
// {
// 	std::cout	<< C << "getFixedNumber member function called"
// 			<< W << std::endl;
// 	return (float)this->value / (1 << bits);
// }

// void Fixed::setFixedNumber( float const value )
// {
// 	std::cout	<< C << "setFixedNumber member function called"
// 			<< W << std::endl;
// 	this->value = (int)(value * (1 << bits) + 0.5f);
// }
