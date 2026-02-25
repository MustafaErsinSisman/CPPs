#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
	out << G	<< "AAnimal default constructor called"
			<< RST << end;
}

AAnimal::AAnimal(const str& type) : type(type)
{
	out << G	<< "AAnimal parameterized constructor called"
			<< RST << end;
}

AAnimal::AAnimal(const AAnimal& copy)
{
	out << B	<< "AAnimal copy constructor called"
			<< RST << end;
	*this = copy;
}

AAnimal&	AAnimal::operator=(const AAnimal& copy)
{
	out << Y	<< "AAnimal copy assignment operator called"
			<< RST << end;
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

AAnimal::~AAnimal()
{
	out << R	<< "AAnimal destructor called"
			<< RST << end;
}

str	AAnimal::getType() const
{
	out	<< C << "getType member function called"
			<< RST << end;
	return type;
}

void AAnimal::setType(const str& type)
{
	out	<< C << "setType member function called"
			<< RST << end;
	this->type = type;
}

void	AAnimal::makeSound() const
{
	out << RB << "There are no Aanimals that can make noise." << RST << end;
}