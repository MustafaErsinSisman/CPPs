#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	out << G	<< "Animal default constructor called"
			<< RST << end;
}

Animal::Animal(const str& type) : type(type)
{
	out << G	<< "Animal parameterized constructor called"
			<< RST << end;
}

Animal::Animal(const Animal& copy)
{
	out << B	<< "Animal copy constructor called"
			<< RST << end;
	*this = copy;
}

Animal&	Animal::operator=(const Animal& copy)
{
	out << Y	<< "Animal copy assignment operator called"
			<< RST << end;
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

Animal::~Animal()
{
	out << R	<< "Animal destructor called"
			<< RST << end;
}

str	Animal::getType() const
{
	out	<< C << "getType member function called"
			<< RST << end;
	return type;
}

void Animal::setType(const str& type)
{
	out	<< C << "setType member function called"
			<< RST << end;
	this->type = type;
}

void	Animal::makeSound() const
{
	out << D << "There are no animals that can make noise." << RST << end;
}