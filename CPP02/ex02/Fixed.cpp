#include "Fixed.hpp"

Fixed::Fixed() : value(0) {}

Fixed::Fixed( const int value ) : value(value << bits) {}

Fixed::Fixed( const float value ) : value(roundf(value * (1 << bits))) {}

Fixed::Fixed( const Fixed& copy ) {*this = copy;}

Fixed&	Fixed::operator=( const Fixed& copy )
{
	if (this != &copy)
		this->value = copy.value;
	return *this;
}

Fixed Fixed::operator+(const Fixed& other) const {return Fixed(this->toFloat() + other.toFloat());}

Fixed Fixed::operator-(const Fixed& other) const {return Fixed(this->toFloat() - other.toFloat());}

Fixed Fixed::operator*(const Fixed& other) const {return Fixed(this->toFloat() * other.toFloat());}

Fixed Fixed::operator/(const Fixed& other) const {return Fixed(this->toFloat() / other.toFloat());}

bool Fixed::operator<(const Fixed& other) const {return this->value < other.value;}

bool Fixed::operator>(const Fixed& other) const {return this->value > other.value;}

bool Fixed::operator<=(const Fixed& other) const {return this->value <= other.value;}

bool Fixed::operator>=(const Fixed& other) const {return this->value >= other.value;}

bool Fixed::operator==(const Fixed& other) const {return this->value == other.value;}

bool Fixed::operator!=(const Fixed& other) const {return this->value != other.value;}


Fixed&	Fixed::operator++()
{
	this->value++;
	return *this;
}

Fixed&	Fixed::operator--()
{
	this->value--;
	return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->value++;
    return tmp;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->value--;
    return tmp;
}

Fixed::~Fixed() {}

float Fixed::toFloat( void ) const {return static_cast<float>(value) / (1 << bits);}

int Fixed::toInt( void ) const {return value >> bits;}

std::ostream& operator<<(std::ostream& out, const Fixed& copy)
{
	out << copy.toFloat();
	return out;
}
